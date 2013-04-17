#include "FRClosureLooper.h"
#include <iostream>
#include <algorithm>
#include <tr1/array>
#include <cmath>
#include "mcSelections.h"
#include "SSB2012.h"
#include "rt/RootTools.h"
#include "rt/is_equal.h"
#include "at/Predicates.h"
#include "at/VtxReweight.h"
#include "at/DileptonHypType.h"
#include "at/DileptonChargeType.h"
#include "SignalRegion.h"
#include "TTbarBreakDown.h"
#include "ScaleFactors.h"
#include "at/PredSummary.h"
#include "at/FakeRatePrediction.h"
#include "at/FlipRatePrediction.h"
#include "SSB2012.h"
#include "CTable.h"

typedef std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > vecLorentzVector;

using namespace std;
using namespace at;
using namespace ss;

// construct:
FRClosureLooper::FRClosureLooper
(
    const std::string& root_file_name,
    at::Sample::value_type sample,
    SignalRegion::value_type signal_region,
    AnalysisType::value_type analysis_type,
    SignalRegionType::value_type signal_region_type,
    const std::string& vtxreweight_file_name,
    const std::string& fake_rate_file_name,
    const std::string& mufr_hist_name,
    const std::string& elfr_hist_name,
    bool do_scale_factors,
    unsigned int num_btags,
    unsigned int num_jets,
    int charge_option,
    float lumi,
    bool verbose
    )
    : at::AnalysisWithHist(root_file_name, false, "")
    , m_lumi(lumi)
    , m_verbose(verbose)
    , m_is_data(at::SampleIsData(sample))
    , m_do_vtx_reweight(not vtxreweight_file_name.empty())
    , m_do_scale_factors(do_scale_factors)
    , m_nbtags(num_btags)
    , m_njets(num_jets)
    , m_charge_option(charge_option)
    , m_sample(sample)
    , m_signal_region(signal_region)
    , m_analysis_type(analysis_type)
    , m_signal_region_type(signal_region_type)
{
    // set vertex weight file
    if (m_do_vtx_reweight)
    {
        cout << "using vertex reweight file : " << vtxreweight_file_name << endl;
        set_vtxreweight_rootfile(vtxreweight_file_name.c_str(), m_verbose);
    }

    // set the fake rate histograms
    std::auto_ptr<TFile> fake_rate_file(rt::OpenRootFile(fake_rate_file_name));
    cout << "using FR file : " << fake_rate_file->GetName() << endl;
    string mufr_name = "";
    string elfr_name = "";
    switch (m_analysis_type)
    {
        case AnalysisType::high_pt:
            mufr_name = "h_mufr40c";
            elfr_name = "h_elfr40c";
            break;
        case AnalysisType::high_pt_eth:
            mufr_name = "h_mufr40c";
            elfr_name = "h_elfr40c";
            break;
        case AnalysisType::low_pt:
            mufr_name = "h_mufr40c";
            elfr_name = "h_elfr40c_noiso";
            break;
        case AnalysisType::vlow_pt:
            mufr_name = "h_mufr40c_isoe";
            elfr_name = "h_elfr40c_noiso";
            break;
        case AnalysisType::higgsino:
            mufr_name = "h_mufr40c";
            elfr_name = "h_elfr40c";
            break;
        default:
            mufr_name = "h_mufr40c";
            elfr_name = "h_elfr40c";
            break;
    }
    if (not mufr_hist_name.empty()) {mufr_name = mufr_hist_name;}
    if (not elfr_hist_name.empty()) {elfr_name = elfr_hist_name;}
    h_mufr.reset(dynamic_cast<TH2F*>(fake_rate_file->Get(mufr_name.c_str())->Clone()));
    h_elfr.reset(dynamic_cast<TH2F*>(fake_rate_file->Get(elfr_name.c_str())->Clone()));
    if (not h_mufr) {throw std::runtime_error(Form("ERROR: PlotLooper: %s doesn't exist", mufr_name.c_str()));}
    if (not h_elfr) {throw std::runtime_error(Form("ERROR: PlotLooper: %s doesn't exist", elfr_name.c_str()));}
    h_mufr->SetDirectory(0);
    h_elfr->SetDirectory(0);

    cout << "using mu FR hist : " << h_mufr->GetName() << endl;
    cout << "using el FR hist : " << h_elfr->GetName() << endl;

    // number of jets/btags
    cout << "Cutting on the number of jets/btags" << endl;
    cout << "nbtags >= " << m_nbtags << endl;
    cout << "njets  >= " << m_njets  << endl;

    // begin job
    BeginJob();
}

// destroy:
FRClosureLooper::~FRClosureLooper()
{
    // end  job
    //EndJob();
}

// methods:
void FRClosureLooper::BeginJob()
{
    m_fr_bin_info = GetFakeRateBinInfo();
    BookHists();
}

at::FakeRateBinInfo FRClosureLooper::GetFakeRateBinInfo()
{
    const size_t num_mu_eta_bins = h_mufr->GetNbinsX();
    const float *mu_eta_bins = rt::ConvertDoubleArrayToFloatArray(h_mufr->GetXaxis()->GetXbins()->GetArray(), num_mu_eta_bins+1);

    const size_t num_mu_pt_bins = h_mufr->GetNbinsY();
    const float *mu_pt_bins = rt::ConvertDoubleArrayToFloatArray(h_mufr->GetYaxis()->GetXbins()->GetArray(), num_mu_pt_bins+1);

    const size_t num_el_eta_bins = h_elfr->GetNbinsX();
    const float *el_eta_bins = rt::ConvertDoubleArrayToFloatArray(h_elfr->GetXaxis()->GetXbins()->GetArray(), num_el_eta_bins+1);

    const size_t num_el_pt_bins = h_elfr->GetNbinsY();
    const float *el_pt_bins = rt::ConvertDoubleArrayToFloatArray(h_elfr->GetYaxis()->GetXbins()->GetArray(), num_el_pt_bins+1);

    at::FakeRateBinInfo tmp;
    tmp.vel_eta_bins.assign(el_eta_bins, el_eta_bins+num_el_eta_bins+1);
    tmp.vel_pt_bins .assign(el_pt_bins , el_pt_bins +num_el_pt_bins+1 );

    tmp.vmu_eta_bins.assign(mu_eta_bins, mu_eta_bins+num_mu_eta_bins+1);
    tmp.vmu_pt_bins .assign(mu_pt_bins , mu_pt_bins +num_mu_pt_bins+1 );

    return tmp;
}

// end job
void FRClosureLooper::EndJob()
{
    // convenience alias
    rt::TH1Container& hc = m_hist_container;

    if (m_verbose)
    {
        hc.List();
    }

    // 0 ee, 1 mm, 2 em, 3 ll
    std::tr1::array<float, 4> yield_ss;
    yield_ss[0] = rt::Integral(hc["h_yield_ee"]);
    yield_ss[1] = rt::Integral(hc["h_yield_mm"]);
    yield_ss[2] = rt::Integral(hc["h_yield_em"]);
    yield_ss[3] = rt::Integral(hc["h_yield_ll"]);

    std::tr1::array<float, 4> yield_ss_error;
    yield_ss_error[0] = rt::IntegralAndError(hc["h_yield_ee"]).second;
    yield_ss_error[1] = rt::IntegralAndError(hc["h_yield_mm"]).second;
    yield_ss_error[2] = rt::IntegralAndError(hc["h_yield_em"]).second;
    yield_ss_error[3] = rt::IntegralAndError(hc["h_yield_ll"]).second;

    // set the error to the lumi*scale1fb if the yield < weight*0.5 
    //float weight = (m_lumi * m_scale1fb);
    float weight = 1.0; 
    if (rt::Integral(hc["h_yield_ee"]) < (weight * 0.5)) {hc["h_yield_ee"]->SetBinError(2, weight);}
    if (rt::Integral(hc["h_yield_mm"]) < (weight * 0.5)) {hc["h_yield_mm"]->SetBinError(2, weight);}
    if (rt::Integral(hc["h_yield_em"]) < (weight * 0.5)) {hc["h_yield_em"]->SetBinError(2, weight);}
    if (rt::Integral(hc["h_yield_ll"]) < (weight * 0.5)) {hc["h_yield_ll"]->SetBinError(2, weight);}

    // Fake predictions
    // -----------------------------------------------------------------------------//
    at::FakeRatePrediction frp(h_mufr.get(), h_elfr.get());
    frp.ComputeAllFakePredictions
        (
            static_cast<TH2F*>(hc["h_sf_elfo_pt_vs_eta_ee"]),
            static_cast<TH2F*>(hc["h_sf_mufo_pt_vs_eta_mm"]),
            static_cast<TH2F*>(hc["h_sf_elfo_pt_vs_eta_em"]),
            static_cast<TH2F*>(hc["h_sf_mufo_pt_vs_eta_em"]),
            static_cast<TH2F*>(hc["h_df_fo_pt_vs_eta_ee"  ]),
            static_cast<TH2F*>(hc["h_df_fo_pt_vs_eta_mm"  ]),
            static_cast<TH2F*>(hc["h_df_fo_pt_vs_eta_em"  ])
            );

    // SF (raw)
    PredSummary sf_raw = frp.GetSingleFakePredictionRaw();
    hc.Add(new TH1F("h_sf_pred_raw", "SF prediction, raw", 6, 0, 6));
    hc["h_sf_pred_raw"]->SetBinContent(1, sf_raw.ee.value);
    hc["h_sf_pred_raw"]->SetBinContent(2, sf_raw.mm.value);
    hc["h_sf_pred_raw"]->SetBinContent(3, sf_raw.em.value);
    hc["h_sf_pred_raw"]->SetBinContent(4, sf_raw.ll.value);
    hc["h_sf_pred_raw"]->SetBinContent(5, sf_raw.em_mufo.value);
    hc["h_sf_pred_raw"]->SetBinContent(6, sf_raw.em_elfo.value);
    hc["h_sf_pred_raw"]->SetBinError(1, sf_raw.ee.error);
    hc["h_sf_pred_raw"]->SetBinError(2, sf_raw.mm.error);
    hc["h_sf_pred_raw"]->SetBinError(3, sf_raw.em.error);
    hc["h_sf_pred_raw"]->SetBinError(4, sf_raw.ll.error);
    hc["h_sf_pred_raw"]->SetBinError(5, sf_raw.em_mufo.error);
    hc["h_sf_pred_raw"]->SetBinError(6, sf_raw.em_elfo.error);

    // DF
    PredSummary df = frp.GetDoubleFakePrediction();
    hc.Add(new TH1F("h_df_pred", "DF prediction", 4, 0, 4));
    hc["h_df_pred"]->SetBinContent(1, df.ee.value);
    hc["h_df_pred"]->SetBinContent(2, df.mm.value);
    hc["h_df_pred"]->SetBinContent(3, df.em.value);
    hc["h_df_pred"]->SetBinContent(4, df.ll.value);
    hc["h_df_pred"]->SetBinError(1, df.ee.error);
    hc["h_df_pred"]->SetBinError(2, df.mm.error);
    hc["h_df_pred"]->SetBinError(3, df.em.error);
    hc["h_df_pred"]->SetBinError(4, df.ll.error);

    // SF 
    PredSummary sf = frp.GetSingleFakePrediction();
    hc.Add(new TH1F("h_sf_pred", "SF prediction", 4, 0, 4));
    hc["h_sf_pred"]->SetBinContent(1, sf.ee.value);
    hc["h_sf_pred"]->SetBinContent(2, sf.mm.value);
    hc["h_sf_pred"]->SetBinContent(3, sf.em.value);
    hc["h_sf_pred"]->SetBinContent(4, sf.ll.value);
    hc["h_sf_pred"]->SetBinError(1, sf.ee.error);
    hc["h_sf_pred"]->SetBinError(2, sf.mm.error);
    hc["h_sf_pred"]->SetBinError(3, sf.em.error);
    hc["h_sf_pred"]->SetBinError(4, sf.ll.error);

    // Fakes 
    PredSummary fake = frp.GetFakePrediction();
    hc.Add(new TH1F("h_fake_pred", "fake prediction", 4, 0, 4));
    hc["h_fake_pred"]->SetBinContent(1, fake.ee.value);
    hc["h_fake_pred"]->SetBinContent(2, fake.mm.value);
    hc["h_fake_pred"]->SetBinContent(3, fake.em.value);
    hc["h_fake_pred"]->SetBinContent(4, fake.ll.value);
    hc["h_fake_pred"]->SetBinError(1, fake.ee.error);
    hc["h_fake_pred"]->SetBinError(2, fake.mm.error);
    hc["h_fake_pred"]->SetBinError(3, fake.em.error);
    hc["h_fake_pred"]->SetBinError(4, fake.ll.error);

    // MC pred (hard coded from ICHEP) 
    PredSummary mc(Pred(00.0, 0.0), Pred(11.3, 0.3), Pred(00.0, 0.0));

    // total prediciton
    //PredSummary pred = fake + mc;
    PredSummary pred = fake;
    
    // ratio of pred/obs
    int obs_ee = static_cast<int>(yield_ss[0]);
    int obs_mm = static_cast<int>(yield_ss[1]);
    int obs_em = static_cast<int>(yield_ss[2]);
    int obs_ll = static_cast<int>(yield_ss[3]);

    float obs_ee_error = yield_ss_error[0];
    float obs_mm_error = yield_ss_error[1];
    float obs_em_error = yield_ss_error[2];
    float obs_ll_error = yield_ss_error[3];

    float ee_ratio_value = pred.ee.value/obs_ee;
    float ee_ratio_error = ee_ratio_value * sqrt(pow(pred.ee.error/pred.ee.value, 2) + pow(obs_ee_error/obs_ee, 2));
    string ee_ratio      = rt::pm(ee_ratio_value, ee_ratio_error);
    float ee_rdiff_value = (pred.ee.value - obs_ee)/pred.ee.value; 
    float ee_rdiff_error = (obs_ee/pred.ee.value) * sqrt(pow(pred.ee.error/pred.ee.value, 2) + pow(obs_ee_error/obs_ee, 2));
    string ee_rdiff      = rt::pm(ee_rdiff_value, ee_rdiff_error); 

    float mm_ratio_value = pred.mm.value/obs_mm;
    float mm_ratio_error = mm_ratio_value * sqrt(pow(pred.mm.error/pred.mm.value, 2) + pow(obs_mm_error/obs_mm, 2));
    string mm_ratio      = rt::pm(mm_ratio_value, mm_ratio_error);
    float mm_rdiff_value = (pred.mm.value - obs_mm)/pred.mm.value; 
    float mm_rdiff_error = (obs_mm/pred.mm.value) * sqrt(pow(pred.mm.error/pred.mm.value, 2) + pow(obs_mm_error/obs_mm, 2));
    string mm_rdiff      = rt::pm(mm_rdiff_value, mm_rdiff_error); 

    float em_ratio_value = pred.em.value/obs_em;
    float em_ratio_error = em_ratio_value * sqrt(pow(pred.em.error/pred.em.value, 2) + pow(obs_em_error/obs_em, 2));
    string em_ratio      = rt::pm(em_ratio_value, em_ratio_error);
    float em_rdiff_value = (pred.em.value - obs_em)/pred.em.value; 
    float em_rdiff_error = (obs_em/pred.em.value) * sqrt(pow(pred.em.error/pred.em.value, 2) + pow(obs_em_error/obs_em, 2));
    string em_rdiff      = rt::pm(em_rdiff_value, em_rdiff_error); 

    float ll_ratio_value = pred.ll.value/obs_ll;
    float ll_ratio_error = ll_ratio_value * sqrt(pow(pred.ll.error/pred.ll.value, 2) + pow(obs_ll_error/obs_ll, 2));
    string ll_ratio      = rt::pm(ll_ratio_value, ll_ratio_error);
    float ll_rdiff_value = (pred.ll.value - obs_ll)/pred.ll.value; 
    float ll_rdiff_error = (obs_ll/pred.ll.value) * sqrt(pow(pred.ll.error/pred.ll.value, 2) + pow(obs_ll_error/obs_ll, 2));
    string ll_rdiff      = rt::pm(ll_rdiff_value, ll_rdiff_error); 

    // print the output
    const SignalRegionInfo sr_info = GetSignalRegionInfo(m_signal_region, m_analysis_type, m_signal_region_type);

    CTable t_yields;
    t_yields.useTitle();
    t_yields.setTitle(Form("closure test table (%s)", sr_info.title.c_str()));
    string f = "1.2";
    t_yields.setTable() (                        "ee",              "mm",             "em",        "em (el fake)",        "em (mu fake)",             "ll")
                        ("SF raw"  , sf_raw.ee.str(f), sf_raw.mm.str(f), sf_raw.em.str(f), sf_raw.em_elfo.str(f),  sf_raw.em_mufo.str(f), sf_raw.ll.str(f))
                        ("SF"      ,     sf.ee.str(f),     sf.mm.str(f),     sf.em.str(f),   				"NA",   				"NA",     sf.ll.str(f))
                        ("DF"      ,     df.ee.str(f),     df.mm.str(f),     df.em.str(f),   				"NA",   				"NA",     df.ll.str(f))
                        ("pred"    ,   pred.ee.str(f),   pred.mm.str(f),   pred.em.str(f),   				"NA",   				"NA",   pred.ll.str(f))
                        ("obs"     ,           obs_ee,           obs_mm,           obs_em,   				"NA",   				"NA",           obs_ll)
                        ("pred/obs",         ee_ratio,         mm_ratio,         em_ratio,   				"NA",   				"NA",         ll_ratio)
                        ("(p-o)/o" ,         ee_rdiff,         mm_rdiff,         em_rdiff,   				"NA",   				"NA",         ll_rdiff)
                        ;
    t_yields.print();
    t_yields.printTex();
}

// book hists 
void FRClosureLooper::BookHists()
{
    try
    {
        // convenience alias
        rt::TH1Container& hc = m_hist_container;
        TH1::SetDefaultSumw2(true);

        hc.Add(new TH1F("h_lumi"   , "integrated lumi used for these plots", 10000, 0, 100));

        // basic yield plots
        for (size_t i = 0; i != at::DileptonHypType::static_size; i++)
        {
            at::DileptonHypType::value_type hyp_type = static_cast<at::DileptonHypType::value_type>(i);

            // name and title suffixes
            string ns = Form("_%s" ,  GetDileptonHypTypeName(hyp_type).c_str());
            string ts = Form(" (%s)",  GetDileptonHypTypeTitle(hyp_type).c_str());

            // yields
            hc.Add(new TH1F(Form("h_yield%s", ns.c_str()), Form("yields%s;yield;Events", ts.c_str()), 3, 0, 3));

            // SF plots
            hc.Add(new TH2F(Form("h_sf_mufo_pt_vs_eta%s", ns.c_str()), Form("#mu FO p_{T} vs |#eta|%s;|#eta|;p_{T} (GeV)"     , ts.c_str()),m_fr_bin_info.num_mu_eta_bins(),m_fr_bin_info.mu_eta_bins(),m_fr_bin_info.num_mu_pt_bins(),m_fr_bin_info.mu_pt_bins()));
            hc.Add(new TH2F(Form("h_sf_elfo_pt_vs_eta%s", ns.c_str()), Form("electron FO p_{T} vs |#eta|%s;|#eta|;p_{T} (GeV)", ts.c_str()),m_fr_bin_info.num_el_eta_bins(),m_fr_bin_info.el_eta_bins(),m_fr_bin_info.num_el_pt_bins(),m_fr_bin_info.el_pt_bins()));

            // DF plots
            unsigned int xdim = 0;
            unsigned int ydim = 0;
            if (hyp_type == at::DileptonHypType::MUMU) {xdim=m_fr_bin_info.num_mu_eta_bins()*m_fr_bin_info.num_mu_pt_bins(); ydim=xdim;}
            if (hyp_type == at::DileptonHypType::EE)   {xdim=m_fr_bin_info.num_el_eta_bins()*m_fr_bin_info.num_el_pt_bins(); ydim=xdim;}
            if (hyp_type == at::DileptonHypType::EMU)  {xdim=m_fr_bin_info.num_mu_eta_bins()*m_fr_bin_info.num_mu_pt_bins(); ydim=m_fr_bin_info.num_el_eta_bins()*m_fr_bin_info.num_el_pt_bins();}
            if (hyp_type == at::DileptonHypType::ALL)  {xdim=std::max(m_fr_bin_info.num_mu_eta_bins()*m_fr_bin_info.num_mu_pt_bins(),m_fr_bin_info.num_el_eta_bins()*m_fr_bin_info.num_el_pt_bins()); ydim=xdim;}
            hc.Add(new TH2F(Form("h_df_fo_pt_vs_eta%s", ns.c_str()), Form("DF FO p_{T} vs |#eta|%s;|#eta|;p_{T} (GeV)", ts.c_str()), xdim, 0, xdim, ydim, 0, ydim));
        }

        return;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
}

// main analysis function operator 
int FRClosureLooper::operator()(long event)
{
    using namespace std;
    using namespace ssb;

    try
    {
        // base analysis
        at::AnalysisWithHist::operator()(event);

        // convenience alias
        rt::TH1Container& hc = m_hist_container;

        // good lumi
        if (is_real_data())
        {
            if (not is_good_lumi())
            {
                return 0;
            }
        }

        // scale 1b (set before cuts) 
        if (not is_real_data() && event == 0)
        {
            m_scale1fb = scale1fb();
        }

        // require only one gen lepton at status 3
        // if (gen_nleps() > 1) return 0;

        // selections 
        // ---------------------------------------------------------------------------------------------------------------------------- //

        // charge type
        DileptonChargeType::value_type charge_type = DileptonChargeType::static_size;
        if (is_ss()) {charge_type = DileptonChargeType::SS;}
        if (is_sf()) {charge_type = DileptonChargeType::SF;}
        if (is_df()) {charge_type = DileptonChargeType::DF;}
        if (charge_type == DileptonChargeType::static_size)
        {
            return 0;
        }

        // dilepton hyp type: 1 mm, 2 em, 3ee
        DileptonHypType::value_type hyp_type = static_cast<DileptonHypType::value_type>(dilep_type());
        if (hyp_type == DileptonHypType::static_size)
        {
            return 0;
        }

        // charge option (1 == ++, -1 == --)
        switch (m_charge_option)
        {
        case  1: if (not is_pp()) return 0; break;
        case -1: if (not is_mm()) return 0; break;
        default: {/*do nothing*/}
        }

        // two jet events
        if (njets() < 2)
        {
            return 0;
        }

        // # btagged jets
        if (nbtags() < static_cast<int>(m_nbtags))
        {
            return 0;
        }

        // passes signal region
        if (not PassesSignalRegion(m_signal_region, m_analysis_type, m_signal_region_type))
        {
            return 0;
        }

        // ttbar breakdown 
        const TTbarBreakDown::value_type ttbar_breakdown = GetTTbarBreakDown(m_sample, lep1_is_fromw(), lep2_is_fromw()); 
        switch (m_sample)
        {
            case at::Sample::ttdil: if (ttbar_breakdown != TTbarBreakDown::TTDIL) return 0; break; 
            case at::Sample::ttotr: if (ttbar_breakdown != TTbarBreakDown::TTOTR) return 0; break;
            case at::Sample::ttslb: if (ttbar_breakdown != TTbarBreakDown::TTSLB) return 0; break;
            case at::Sample::ttslo: if (ttbar_breakdown != TTbarBreakDown::TTSLO) return 0; break;
            default: {/*do nothing*/}
        }

        // Weight Factors
        // ----------------------------------------------------------------------------------------------------------------------------//

        // scale
        float evt_weight = 1.0;
        if (m_do_vtx_reweight)
        {
           evt_weight = is_real_data() ? 1.0 : vtxweight_n(nvtxs(), is_real_data(), false);
        }

        // Fill hists
        // ------------------------------------------------------------------------------------//

        // name and title suffixes
        const string hs = Form("_%s", GetDileptonHypTypeName(hyp_type).c_str());
        const string qs = Form("_%s", GetDileptonChargeTypeName(charge_type).c_str());

        const bool fromw_l1     = is_real_data() ? true : (lep1_is_fromw()==1);
        const bool fromw_l2     = is_real_data() ? true : (lep2_is_fromw()==1);
        const bool not_fromw_l1 = is_real_data() ? true : (lep1_is_fromw()<1);
        const bool not_fromw_l2 = is_real_data() ? true : (lep2_is_fromw()<1);

        // SS
        if (is_ss())
        {
            rt::Fill(hc["h_yield_ll"], 1, evt_weight);
            rt::Fill(hc["h_yield"+hs], 1, evt_weight);
        }

        // SF 
        if (is_sf())
        {
            const LorentzVector& p4 = lep1_is_fo() ? lep1_p4()    : lep2_p4();
            int id                  = lep1_is_fo() ? lep1_pdgid() : lep2_pdgid();
            if ((lep1_is_fo() && not_fromw_l1 && fromw_l2) || (lep2_is_fo() && fromw_l1 && not_fromw_l2))
            {
                if (abs(id)==13) {rt::Fill2D(hc["h_sf_mufo_pt_vs_eta"+ hs], fabs(p4.eta()), p4.pt(), evt_weight);}
                if (abs(id)==11) {rt::Fill2D(hc["h_sf_elfo_pt_vs_eta"+ hs], fabs(p4.eta()), p4.pt(), evt_weight);}
            }
        }

        // DF 
        if (is_df())
        {
            const LorentzVector& l1_p4 = lep1_p4();
            const LorentzVector& l2_p4 = lep2_p4();
            int l1_id                  = lep1_pdgid();
            int l2_id                  = lep2_pdgid();
            if (not_fromw_l1 && not_fromw_l2)
            {
                at::FillDoubleFakeHist(*dynamic_cast<TH2F*>(hc["h_df_fo_pt_vs_eta_ll"]), *h_mufr, *h_elfr, hyp_type, l1_id, l1_p4.pt(), l1_p4.eta(), l2_id, l2_p4.pt(), l2_p4.eta(), evt_weight);
                at::FillDoubleFakeHist(*dynamic_cast<TH2F*>(hc["h_df_fo_pt_vs_eta"+hs]), *h_mufr, *h_elfr, hyp_type, l1_id, l1_p4.pt(), l1_p4.eta(), l2_id, l2_p4.pt(), l2_p4.eta(), evt_weight);
            }
        }
    }
    catch (std::exception& e)
    {
        cout << e.what() << endl;
    }

    // analysis end
    return 0;
} 

float FRClosureLooper::GetFakeRateValue(int lep_id, float pt, float eta) const 
{
    using namespace tas;

    if (!h_mufr)
    {
        if (m_verbose) {std::cout << "h_mufr is NULL! returing zero..." << std::endl;}
        return 0.0;
    }

    if (!h_elfr)
    {
        if (m_verbose) {std::cout << "h_elfr is NULL! returing zero..." << std::endl;}
        return 0.0;
    }

    if (abs(lep_id)==13) 
    {
        float max_pt = h_mufr->GetYaxis()->GetXmax()-0.01;
        int pt_bin   = h_mufr->GetYaxis()->FindBin(min(pt, max_pt));
        int eta_bin  = h_mufr->GetXaxis()->FindBin(fabs(eta));
        return h_mufr->GetBinContent(eta_bin, pt_bin);
    }
    else if (abs(lep_id)==11) 
    {
        float max_pt = h_elfr->GetYaxis()->GetXmax()-0.01;
        int pt_bin   = h_elfr->GetYaxis()->FindBin(min(pt, max_pt));
        int eta_bin  = h_elfr->GetXaxis()->FindBin(fabs(eta));
        return h_elfr->GetBinContent(eta_bin, pt_bin);
    }
    return 0.0;
}

float FRClosureLooper::GetFakeRateError(int lep_id, float pt, float eta) const 
{
    using namespace tas;

    if (!h_mufr)
    {
        if (m_verbose) {std::cout << "h_mufr is NULL! returing zero..." << std::endl;}
        return 0.0;
    }

    if (!h_elfr)
    {
        if (m_verbose) {std::cout << "h_elfr is NULL! returing zero..." << std::endl;}
        return 0.0;
    }

    if (abs(lep_id)==13) 
    {
        float max_pt = h_mufr->GetYaxis()->GetXmax()-0.01;
        int pt_bin   = h_mufr->GetYaxis()->FindBin(min(pt, max_pt));
        int eta_bin  = h_mufr->GetXaxis()->FindBin(fabs(eta));
        return h_mufr->GetBinError(eta_bin, pt_bin);
    }
    else if (abs(lep_id)==11) 
    {
        float max_pt = h_elfr->GetYaxis()->GetXmax()-0.01;
        int pt_bin   = h_elfr->GetYaxis()->FindBin(min(pt, max_pt));
        int eta_bin  = h_elfr->GetXaxis()->FindBin(fabs(eta));
        return h_elfr->GetBinError(eta_bin, pt_bin);
    }
    return 0.0;
}
