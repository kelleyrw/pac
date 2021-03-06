#include "EventInfoTree.h"
#include "CORE/eventSelections.h"
#include "CORE/mcSelections.h"
#include "CMS2.h"
#include "at/CMS2Tag.h"

using namespace at;

EventInfoTree::EventInfoTree ()
{
}

EventInfoTree::EventInfoTree (const std::string &prefix)
    : prefix_(prefix)
{
}

void EventInfoTree::FillCommon (Sample::value_type sample_, const std::string& root_file_name)
{
    run               = cms2.evt_run();
    ls                = cms2.evt_lumiBlock();
    evt               = cms2.evt_event();
    sample            = sample_;
    is_real_data      = cms2.evt_isRealData();
    nvtxs             = numberOfGoodVertices();
    vtx_idx           = firstGoodVertex();
    uncorpfmet        = cms2.evt_pfmet();
    uncorpfmet_phi    = cms2.evt_pfmetPhi();
    pfmet             = cms2.evt_pfmet_type1cor();
    pfmet_phi         = cms2.evt_pfmetPhi_type1cor();
    dataset           = cms2.evt_dataset().at(0);
    filename          = root_file_name;
    filt_csc          = passCSCBeamHaloFilter();
    filt_hbhe         = passHBHEFilter();
    filt_hcallaser    = passHCALLaserFilter();
    filt_ecaltp       = passECALDeadCellFilter();
    filt_trkfail      = passTrackingFailureFilter();
    filt_eebadsc      = passeeBadScFilter();
    if (at::GetCMS2Tag().version >= 23)
    {
        filt_ecallaser    = passECALLaserFilter();
        passes_metfilters = passMETFilters();
    }
    else
    {
        passes_metfilters = passCSCBeamHaloFilter() &&
                            passHBHEFilter() &&
                            passHCALLaserFilter() &&
                            passECALDeadCellFilter() &&
                            passTrackingFailureFilter() &&
                            passeeBadScFilter();
    }

    if (!cms2.evt_isRealData()) 
    {
        scale1fb     = cms2.evt_scale1fb();
        xsec         = cms2.evt_xsec_incl();
        nevts        = cms2.evt_nEvts();
        kfactor      = cms2.evt_kfactor();
        gen_met      = cms2.gen_met();
        gen_met_phi  = cms2.gen_metPhi();
        if (cms2.puInfo_nPUvertices().size()==3)
        {
            pu_nvtxs    = cms2.puInfo_nPUvertices().at(1);
            pu_ntrueint = cms2.puInfo_trueNumInteractions().at(1);
        }
        else
        {   
            pu_nvtxs    = cms2.puInfo_nPUvertices().at(0);
            pu_ntrueint = cms2.puInfo_trueNumInteractions().at(0);
        }

        // gen lepton counts
        gen_nleps              = leptonGenpCount(gen_nels, gen_nmus, gen_ntaus);
        gen_nleps_with_fromtau = leptonGenpCount_lepTauDecays(gen_nels_with_fromtau, gen_nmus_with_fromtau, gen_ntaus_with_fromtau);
    }
}

void EventInfoTree::Reset()
{
    run                    = 0;
    ls                     = 0;
    evt                    = 0;
    is_real_data           = false;
    sample                 = Sample::static_size;
    nvtxs                  = -999999;
    vtx_idx                = -999999;
    pfmet                  = -999999.0;
    pfmet_phi              = -999999.0;
    uncorpfmet             = -999999.0;
    uncorpfmet_phi         = -999999.0;
    pu_nvtxs               = -999999;
    pu_ntrueint            = -999999.0;
    scale1fb               = 1.;
    xsec                   = -999999.0;
    nevts                  = -999999;
    kfactor                = -999999.0;
    gen_met                = -999999.0;
    gen_met_phi            = -999999.0;
    gen_nleps              = -999999;
    gen_nels               = -999999;
    gen_nmus               = -999999;
    gen_ntaus              = -999999;
    gen_nleps_with_fromtau = -999999;
    gen_nels_with_fromtau  = -999999;
    gen_nmus_with_fromtau  = -999999;
    gen_ntaus_with_fromtau = -999999;
    dataset                = "";
    filename               = "";
    filt_csc               = false;
    filt_hbhe              = false;
    filt_hcallaser         = false;
    filt_ecallaser         = false;
    filt_ecaltp            = false;
    filt_trkfail           = false;
    filt_eebadsc           = false;
    passes_metfilters      = false;
}

void EventInfoTree::SetBranches(TTree &tree)
{
    tree.Branch(Form("%srun"                    , prefix_.c_str()) , &run                    , "run/i"                   );
    tree.Branch(Form("%sls"                     , prefix_.c_str()) , &ls                     , "ls/i"                    );
    tree.Branch(Form("%sevt"                    , prefix_.c_str()) , &evt                    , "evt/i"                   );
    tree.Branch(Form("%sis_real_data"           , prefix_.c_str()) , &is_real_data           , "is_real_data/O"          );
    tree.Branch(Form("%ssample"                 , prefix_.c_str()) , &sample                 , "sample/I"                );
    tree.Branch(Form("%snvtxs"                  , prefix_.c_str()) , &nvtxs                  , "nvtxs/I"                 );
    tree.Branch(Form("%svtx_idx"                , prefix_.c_str()) , &vtx_idx                , "vtx_idx/I"               );
    tree.Branch(Form("%spfmet"                  , prefix_.c_str()) , &pfmet                  , "pfmet/F"                 );
    tree.Branch(Form("%spfmet_phi"              , prefix_.c_str()) , &pfmet_phi              , "pfmet_phi/F"             );
    tree.Branch(Form("%suncorpfmet"             , prefix_.c_str()) , &uncorpfmet             , "uncorpfmet/F"            );
    tree.Branch(Form("%suncorpfmet_phi"         , prefix_.c_str()) , &uncorpfmet_phi         , "uncorpfmet_phi/F"        );
    tree.Branch(Form("%spu_nvtxs"               , prefix_.c_str()) , &pu_nvtxs               , "pu_nvtxs/I"              );
    tree.Branch(Form("%spu_ntrueint"            , prefix_.c_str()) , &pu_ntrueint            , "pu_ntrueint/F"           );
    tree.Branch(Form("%sscale1fb"               , prefix_.c_str()) , &scale1fb               , "scale1fb/F"              );
    tree.Branch(Form("%sxsec"                   , prefix_.c_str()) , &xsec                   , "xsec/F"                  );
    tree.Branch(Form("%snevts"                  , prefix_.c_str()) , &nevts                  , "nevts/I"                 );
    tree.Branch(Form("%skfactor"                , prefix_.c_str()) , &kfactor                , "kfactor/F"               );
    tree.Branch(Form("%sgen_met"                , prefix_.c_str()) , &gen_met                , "gen_met/F"               );
    tree.Branch(Form("%sgen_met_phi"            , prefix_.c_str()) , &gen_met_phi            , "gen_met_phi/F"           );
    tree.Branch(Form("%sdataset"                , prefix_.c_str()) , "TString"               , &dataset                  );
    tree.Branch(Form("%sfilename"               , prefix_.c_str()) , "TString"               , &filename                 );
    tree.Branch(Form("%sgen_nleps"              , prefix_.c_str()) , &gen_nleps              , "gen_nleps/I"             );
    tree.Branch(Form("%sgen_nels"               , prefix_.c_str()) , &gen_nels               , "gen_nels/I"              );
    tree.Branch(Form("%sgen_nmus"               , prefix_.c_str()) , &gen_nmus               , "gen_nmus/I"              );
    tree.Branch(Form("%sgen_ntaus"              , prefix_.c_str()) , &gen_ntaus              , "gen_ntaus/I"             );
    tree.Branch(Form("%sgen_nleps_with_fromtau" , prefix_.c_str()) , &gen_nleps_with_fromtau , "gen_nleps_with_fromtau/I");
    tree.Branch(Form("%sgen_nels_with_fromtau"  , prefix_.c_str()) , &gen_nels_with_fromtau  , "gen_nels_with_fromtau/I" );
    tree.Branch(Form("%sgen_nmus_with_fromtau"  , prefix_.c_str()) , &gen_nmus_with_fromtau  , "gen_nmus_with_fromtau/I" );
    tree.Branch(Form("%sgen_ntaus_with_fromtau" , prefix_.c_str()) , &gen_ntaus_with_fromtau , "gen_ntaus_with_fromtau/I");
    tree.Branch(Form("%sfilt_csc"               , prefix_.c_str()) , &filt_csc               , "filt_csc/O"              );
    tree.Branch(Form("%sfilt_hbhe"              , prefix_.c_str()) , &filt_hbhe              , "filt_hbhe/O"             );
    tree.Branch(Form("%sfilt_hcallaser"         , prefix_.c_str()) , &filt_hcallaser         , "filt_hcallaser/O"        );
    tree.Branch(Form("%sfilt_ecallaser"         , prefix_.c_str()) , &filt_ecallaser         , "filt_ecallaser/O"        );
    tree.Branch(Form("%sfilt_ecaltp"            , prefix_.c_str()) , &filt_ecaltp            , "filt_ecaltp/O"           );
    tree.Branch(Form("%sfilt_trkfail"           , prefix_.c_str()) , &filt_trkfail           , "filt_trkfail/O"          );
    tree.Branch(Form("%sfilt_eebadsc"           , prefix_.c_str()) , &filt_eebadsc           , "filt_eebadsc/O"          );
    tree.Branch(Form("%spasses_metfilters"      , prefix_.c_str()) , &passes_metfilters      , "passes_metfilters/O"     );
}

