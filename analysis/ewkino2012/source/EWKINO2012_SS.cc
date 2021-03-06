#include "EWKINO2012_SS.h"
EWKINO2012_SS ewk12ss;
namespace ewkino_ss {
	const unsigned int &run() { return ewk12ss.run(); }
	const unsigned int &ls() { return ewk12ss.ls(); }
	const unsigned int &evt() { return ewk12ss.evt(); }
	const bool &is_real_data() { return ewk12ss.is_real_data(); }
	const int &sample() { return ewk12ss.sample(); }
	const int &nvtxs() { return ewk12ss.nvtxs(); }
	const int &vtx_idx() { return ewk12ss.vtx_idx(); }
	const float &pfmet() { return ewk12ss.pfmet(); }
	const float &pfmet_phi() { return ewk12ss.pfmet_phi(); }
	const float &uncorpfmet() { return ewk12ss.uncorpfmet(); }
	const float &uncorpfmet_phi() { return ewk12ss.uncorpfmet_phi(); }
	const float &pu_nvtxs() { return ewk12ss.pu_nvtxs(); }
	const float &pu_ntrueint() { return ewk12ss.pu_ntrueint(); }
	const float &scale1fb() { return ewk12ss.scale1fb(); }
	const float &xsec() { return ewk12ss.xsec(); }
	const unsigned int &nevts() { return ewk12ss.nevts(); }
	const float &kfactor() { return ewk12ss.kfactor(); }
	const float &gen_met() { return ewk12ss.gen_met(); }
	const float &gen_met_phi() { return ewk12ss.gen_met_phi(); }
	const TString &dataset() { return ewk12ss.dataset(); }
	const TString &filename() { return ewk12ss.filename(); }
	const int &gen_nleps() { return ewk12ss.gen_nleps(); }
	const int &gen_nels() { return ewk12ss.gen_nels(); }
	const int &gen_nmus() { return ewk12ss.gen_nmus(); }
	const int &gen_ntaus() { return ewk12ss.gen_ntaus(); }
	const int &gen_nleps_with_fromtau() { return ewk12ss.gen_nleps_with_fromtau(); }
	const int &gen_nels_with_fromtau() { return ewk12ss.gen_nels_with_fromtau(); }
	const int &gen_nmus_with_fromtau() { return ewk12ss.gen_nmus_with_fromtau(); }
	const int &gen_ntaus_with_fromtau() { return ewk12ss.gen_ntaus_with_fromtau(); }
	const bool &filt_csc() { return ewk12ss.filt_csc(); }
	const bool &filt_hbhe() { return ewk12ss.filt_hbhe(); }
	const bool &filt_hcallaser() { return ewk12ss.filt_hcallaser(); }
	const bool &filt_ecallaser() { return ewk12ss.filt_ecallaser(); }
	const bool &filt_ecaltp() { return ewk12ss.filt_ecaltp(); }
	const bool &filt_trkfail() { return ewk12ss.filt_trkfail(); }
	const bool &filt_eebadsc() { return ewk12ss.filt_eebadsc(); }
	const bool &passes_metfilters() { return ewk12ss.passes_metfilters(); }
	const bool &lep1_passes_id() { return ewk12ss.lep1_passes_id(); }
	const bool &lep1_passes_iso() { return ewk12ss.lep1_passes_iso(); }
	const bool &lep1_is_num() { return ewk12ss.lep1_is_num(); }
	const bool &lep1_is_den() { return ewk12ss.lep1_is_den(); }
	const bool &lep1_is_fo() { return ewk12ss.lep1_is_fo(); }
	const bool &lep1_is_mu() { return ewk12ss.lep1_is_mu(); }
	const bool &lep1_is_el() { return ewk12ss.lep1_is_el(); }
	const bool &lep1_exists() { return ewk12ss.lep1_exists(); }
	const int &lep1_is_fromw() { return ewk12ss.lep1_is_fromw(); }
	const int &lep1_charge() { return ewk12ss.lep1_charge(); }
	const int &lep1_pdgid() { return ewk12ss.lep1_pdgid(); }
	const int &lep1_type() { return ewk12ss.lep1_type(); }
	const float &lep1_d0() { return ewk12ss.lep1_d0(); }
	const float &lep1_d0err() { return ewk12ss.lep1_d0err(); }
	const float &lep1_dz() { return ewk12ss.lep1_dz(); }
	const float &lep1_ip3d() { return ewk12ss.lep1_ip3d(); }
	const float &lep1_ip3derr() { return ewk12ss.lep1_ip3derr(); }
	const float &lep1_dzerr() { return ewk12ss.lep1_dzerr(); }
	const float &lep1_mt() { return ewk12ss.lep1_mt(); }
	const float &lep1_corpfiso() { return ewk12ss.lep1_corpfiso(); }
	const float &lep1_pfiso() { return ewk12ss.lep1_pfiso(); }
	const float &lep1_chiso() { return ewk12ss.lep1_chiso(); }
	const float &lep1_emiso() { return ewk12ss.lep1_emiso(); }
	const float &lep1_nhiso() { return ewk12ss.lep1_nhiso(); }
	const float &lep1_corpfiso04() { return ewk12ss.lep1_corpfiso04(); }
	const float &lep1_pfiso04() { return ewk12ss.lep1_pfiso04(); }
	const float &lep1_chiso04() { return ewk12ss.lep1_chiso04(); }
	const float &lep1_emiso04() { return ewk12ss.lep1_emiso04(); }
	const float &lep1_nhiso04() { return ewk12ss.lep1_nhiso04(); }
	const float &lep1_cordetiso() { return ewk12ss.lep1_cordetiso(); }
	const float &lep1_detiso() { return ewk12ss.lep1_detiso(); }
	const float &lep1_trkiso() { return ewk12ss.lep1_trkiso(); }
	const float &lep1_ecaliso() { return ewk12ss.lep1_ecaliso(); }
	const float &lep1_hcaliso() { return ewk12ss.lep1_hcaliso(); }
	const float &lep1_cordetiso04() { return ewk12ss.lep1_cordetiso04(); }
	const float &lep1_detiso04() { return ewk12ss.lep1_detiso04(); }
	const float &lep1_trkiso04() { return ewk12ss.lep1_trkiso04(); }
	const float &lep1_ecaliso04() { return ewk12ss.lep1_ecaliso04(); }
	const float &lep1_hcaliso04() { return ewk12ss.lep1_hcaliso04(); }
	const float &lep1_effarea() { return ewk12ss.lep1_effarea(); }
	const float &lep1_effarea04() { return ewk12ss.lep1_effarea04(); }
	const float &lep1_dbeta() { return ewk12ss.lep1_dbeta(); }
	const float &lep1_dbeta04() { return ewk12ss.lep1_dbeta04(); }
	const float &lep1_sf_lepeff() { return ewk12ss.lep1_sf_lepeff(); }
	const float &lep1_sf_trig() { return ewk12ss.lep1_sf_trig(); }
	const int &lep1_mcid() { return ewk12ss.lep1_mcid(); }
	const int &lep1_mc3id() { return ewk12ss.lep1_mc3id(); }
	const int &lep1_momid() { return ewk12ss.lep1_momid(); }
	const int &lep1_mc3_momid() { return ewk12ss.lep1_mc3_momid(); }
	const bool &lep1_q3agree() { return ewk12ss.lep1_q3agree(); }
	const bool &lep1_is_conv() { return ewk12ss.lep1_is_conv(); }
	const int &lep1_qsc() { return ewk12ss.lep1_qsc(); }
	const int &lep1_qctf() { return ewk12ss.lep1_qctf(); }
	const int &lep1_qgsf() { return ewk12ss.lep1_qgsf(); }
	const int &lep1_nmhits() { return ewk12ss.lep1_nmhits(); }
	const int &lep1_eleid_veto() { return ewk12ss.lep1_eleid_veto(); }
	const int &lep1_eleid_loose() { return ewk12ss.lep1_eleid_loose(); }
	const int &lep1_eleid_medium() { return ewk12ss.lep1_eleid_medium(); }
	const int &lep1_eleid_tight() { return ewk12ss.lep1_eleid_tight(); }
	const bool &lep1_is_eleid_veto() { return ewk12ss.lep1_is_eleid_veto(); }
	const bool &lep1_is_eleid_loose() { return ewk12ss.lep1_is_eleid_loose(); }
	const bool &lep1_is_eleid_medium() { return ewk12ss.lep1_is_eleid_medium(); }
	const bool &lep1_is_eleid_tight() { return ewk12ss.lep1_is_eleid_tight(); }
	const float &lep1_dphiin() { return ewk12ss.lep1_dphiin(); }
	const float &lep1_detain() { return ewk12ss.lep1_detain(); }
	const float &lep1_sieie() { return ewk12ss.lep1_sieie(); }
	const float &lep1_hoe() { return ewk12ss.lep1_hoe(); }
	const float &lep1_ooemoop() { return ewk12ss.lep1_ooemoop(); }
	const float &lep1_conv_dist() { return ewk12ss.lep1_conv_dist(); }
	const float &lep1_conv_dcot() { return ewk12ss.lep1_conv_dcot(); }
	const bool &lep1_is_global() { return ewk12ss.lep1_is_global(); }
	const bool &lep1_is_tracker() { return ewk12ss.lep1_is_tracker(); }
	const bool &lep1_is_stamu() { return ewk12ss.lep1_is_stamu(); }
	const bool &lep1_is_pfmu() { return ewk12ss.lep1_is_pfmu(); }
	const bool &lep1_is_loosemu() { return ewk12ss.lep1_is_loosemu(); }
	const bool &lep1_is_tightmu() { return ewk12ss.lep1_is_tightmu(); }
	const int &lep1_npixelhits() { return ewk12ss.lep1_npixelhits(); }
	const int &lep1_nsihits() { return ewk12ss.lep1_nsihits(); }
	const int &lep1_nsilayers() { return ewk12ss.lep1_nsilayers(); }
	const int &lep1_nstahits() { return ewk12ss.lep1_nstahits(); }
	const int &lep1_nstations() { return ewk12ss.lep1_nstations(); }
	const float &lep1_chi2() { return ewk12ss.lep1_chi2(); }
	const float &lep1_ndof() { return ewk12ss.lep1_ndof(); }
	const float &lep1_pterr() { return ewk12ss.lep1_pterr(); }
	const float &lep1_ecal_vetodep() { return ewk12ss.lep1_ecal_vetodep(); }
	const float &lep1_hcal_vetodep() { return ewk12ss.lep1_hcal_vetodep(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4() { return ewk12ss.lep1_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_mcp4() { return ewk12ss.lep1_mcp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_mc3p4() { return ewk12ss.lep1_mc3p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_mc_momp4() { return ewk12ss.lep1_mc_momp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_gsf_p4() { return ewk12ss.lep1_gsf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_ctf_p4() { return ewk12ss.lep1_ctf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_sc_p4() { return ewk12ss.lep1_sc_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_gfit_p4() { return ewk12ss.lep1_gfit_p4(); }
	const bool &lep2_passes_id() { return ewk12ss.lep2_passes_id(); }
	const bool &lep2_passes_iso() { return ewk12ss.lep2_passes_iso(); }
	const bool &lep2_is_num() { return ewk12ss.lep2_is_num(); }
	const bool &lep2_is_den() { return ewk12ss.lep2_is_den(); }
	const bool &lep2_is_fo() { return ewk12ss.lep2_is_fo(); }
	const bool &lep2_is_mu() { return ewk12ss.lep2_is_mu(); }
	const bool &lep2_is_el() { return ewk12ss.lep2_is_el(); }
	const bool &lep2_exists() { return ewk12ss.lep2_exists(); }
	const int &lep2_is_fromw() { return ewk12ss.lep2_is_fromw(); }
	const int &lep2_charge() { return ewk12ss.lep2_charge(); }
	const int &lep2_pdgid() { return ewk12ss.lep2_pdgid(); }
	const int &lep2_type() { return ewk12ss.lep2_type(); }
	const float &lep2_d0() { return ewk12ss.lep2_d0(); }
	const float &lep2_d0err() { return ewk12ss.lep2_d0err(); }
	const float &lep2_dz() { return ewk12ss.lep2_dz(); }
	const float &lep2_ip3d() { return ewk12ss.lep2_ip3d(); }
	const float &lep2_ip3derr() { return ewk12ss.lep2_ip3derr(); }
	const float &lep2_dzerr() { return ewk12ss.lep2_dzerr(); }
	const float &lep2_mt() { return ewk12ss.lep2_mt(); }
	const float &lep2_corpfiso() { return ewk12ss.lep2_corpfiso(); }
	const float &lep2_pfiso() { return ewk12ss.lep2_pfiso(); }
	const float &lep2_chiso() { return ewk12ss.lep2_chiso(); }
	const float &lep2_emiso() { return ewk12ss.lep2_emiso(); }
	const float &lep2_nhiso() { return ewk12ss.lep2_nhiso(); }
	const float &lep2_corpfiso04() { return ewk12ss.lep2_corpfiso04(); }
	const float &lep2_pfiso04() { return ewk12ss.lep2_pfiso04(); }
	const float &lep2_chiso04() { return ewk12ss.lep2_chiso04(); }
	const float &lep2_emiso04() { return ewk12ss.lep2_emiso04(); }
	const float &lep2_nhiso04() { return ewk12ss.lep2_nhiso04(); }
	const float &lep2_cordetiso() { return ewk12ss.lep2_cordetiso(); }
	const float &lep2_detiso() { return ewk12ss.lep2_detiso(); }
	const float &lep2_trkiso() { return ewk12ss.lep2_trkiso(); }
	const float &lep2_ecaliso() { return ewk12ss.lep2_ecaliso(); }
	const float &lep2_hcaliso() { return ewk12ss.lep2_hcaliso(); }
	const float &lep2_cordetiso04() { return ewk12ss.lep2_cordetiso04(); }
	const float &lep2_detiso04() { return ewk12ss.lep2_detiso04(); }
	const float &lep2_trkiso04() { return ewk12ss.lep2_trkiso04(); }
	const float &lep2_ecaliso04() { return ewk12ss.lep2_ecaliso04(); }
	const float &lep2_hcaliso04() { return ewk12ss.lep2_hcaliso04(); }
	const float &lep2_effarea() { return ewk12ss.lep2_effarea(); }
	const float &lep2_effarea04() { return ewk12ss.lep2_effarea04(); }
	const float &lep2_dbeta() { return ewk12ss.lep2_dbeta(); }
	const float &lep2_dbeta04() { return ewk12ss.lep2_dbeta04(); }
	const float &lep2_sf_lepeff() { return ewk12ss.lep2_sf_lepeff(); }
	const float &lep2_sf_trig() { return ewk12ss.lep2_sf_trig(); }
	const int &lep2_mcid() { return ewk12ss.lep2_mcid(); }
	const int &lep2_mc3id() { return ewk12ss.lep2_mc3id(); }
	const int &lep2_momid() { return ewk12ss.lep2_momid(); }
	const int &lep2_mc3_momid() { return ewk12ss.lep2_mc3_momid(); }
	const bool &lep2_q3agree() { return ewk12ss.lep2_q3agree(); }
	const bool &lep2_is_conv() { return ewk12ss.lep2_is_conv(); }
	const int &lep2_qsc() { return ewk12ss.lep2_qsc(); }
	const int &lep2_qctf() { return ewk12ss.lep2_qctf(); }
	const int &lep2_qgsf() { return ewk12ss.lep2_qgsf(); }
	const int &lep2_nmhits() { return ewk12ss.lep2_nmhits(); }
	const int &lep2_eleid_veto() { return ewk12ss.lep2_eleid_veto(); }
	const int &lep2_eleid_loose() { return ewk12ss.lep2_eleid_loose(); }
	const int &lep2_eleid_medium() { return ewk12ss.lep2_eleid_medium(); }
	const int &lep2_eleid_tight() { return ewk12ss.lep2_eleid_tight(); }
	const bool &lep2_is_eleid_veto() { return ewk12ss.lep2_is_eleid_veto(); }
	const bool &lep2_is_eleid_loose() { return ewk12ss.lep2_is_eleid_loose(); }
	const bool &lep2_is_eleid_medium() { return ewk12ss.lep2_is_eleid_medium(); }
	const bool &lep2_is_eleid_tight() { return ewk12ss.lep2_is_eleid_tight(); }
	const float &lep2_dphiin() { return ewk12ss.lep2_dphiin(); }
	const float &lep2_detain() { return ewk12ss.lep2_detain(); }
	const float &lep2_sieie() { return ewk12ss.lep2_sieie(); }
	const float &lep2_hoe() { return ewk12ss.lep2_hoe(); }
	const float &lep2_ooemoop() { return ewk12ss.lep2_ooemoop(); }
	const float &lep2_conv_dist() { return ewk12ss.lep2_conv_dist(); }
	const float &lep2_conv_dcot() { return ewk12ss.lep2_conv_dcot(); }
	const bool &lep2_is_global() { return ewk12ss.lep2_is_global(); }
	const bool &lep2_is_tracker() { return ewk12ss.lep2_is_tracker(); }
	const bool &lep2_is_stamu() { return ewk12ss.lep2_is_stamu(); }
	const bool &lep2_is_pfmu() { return ewk12ss.lep2_is_pfmu(); }
	const bool &lep2_is_loosemu() { return ewk12ss.lep2_is_loosemu(); }
	const bool &lep2_is_tightmu() { return ewk12ss.lep2_is_tightmu(); }
	const int &lep2_npixelhits() { return ewk12ss.lep2_npixelhits(); }
	const int &lep2_nsihits() { return ewk12ss.lep2_nsihits(); }
	const int &lep2_nsilayers() { return ewk12ss.lep2_nsilayers(); }
	const int &lep2_nstahits() { return ewk12ss.lep2_nstahits(); }
	const int &lep2_nstations() { return ewk12ss.lep2_nstations(); }
	const float &lep2_chi2() { return ewk12ss.lep2_chi2(); }
	const float &lep2_ndof() { return ewk12ss.lep2_ndof(); }
	const float &lep2_pterr() { return ewk12ss.lep2_pterr(); }
	const float &lep2_ecal_vetodep() { return ewk12ss.lep2_ecal_vetodep(); }
	const float &lep2_hcal_vetodep() { return ewk12ss.lep2_hcal_vetodep(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4() { return ewk12ss.lep2_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_mcp4() { return ewk12ss.lep2_mcp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_mc3p4() { return ewk12ss.lep2_mc3p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_mc_momp4() { return ewk12ss.lep2_mc_momp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_gsf_p4() { return ewk12ss.lep2_gsf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_ctf_p4() { return ewk12ss.lep2_ctf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_sc_p4() { return ewk12ss.lep2_sc_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_gfit_p4() { return ewk12ss.lep2_gfit_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep_p4() { return ewk12ss.dilep_p4(); }
	const bool &os() { return ewk12ss.os(); }
	const bool &ss() { return ewk12ss.ss(); }
	const bool &mm() { return ewk12ss.mm(); }
	const bool &ee() { return ewk12ss.ee(); }
	const bool &em() { return ewk12ss.em(); }
	const int &dilep_type() { return ewk12ss.dilep_type(); }
	const int &dilep_gen_type() { return ewk12ss.dilep_gen_type(); }
	const float &dilep_mass() { return ewk12ss.dilep_mass(); }
	const float &dilep_dphi() { return ewk12ss.dilep_dphi(); }
	const float &dilep_deta() { return ewk12ss.dilep_deta(); }
	const float &dilep_dr() { return ewk12ss.dilep_dr(); }
	const int &fiduciality() { return ewk12ss.fiduciality(); }
	const bool &lep3_passes_id() { return ewk12ss.lep3_passes_id(); }
	const bool &lep3_passes_iso() { return ewk12ss.lep3_passes_iso(); }
	const bool &lep3_is_num() { return ewk12ss.lep3_is_num(); }
	const bool &lep3_is_den() { return ewk12ss.lep3_is_den(); }
	const bool &lep3_is_fo() { return ewk12ss.lep3_is_fo(); }
	const bool &lep3_is_mu() { return ewk12ss.lep3_is_mu(); }
	const bool &lep3_is_el() { return ewk12ss.lep3_is_el(); }
	const bool &lep3_exists() { return ewk12ss.lep3_exists(); }
	const int &lep3_is_fromw() { return ewk12ss.lep3_is_fromw(); }
	const int &lep3_charge() { return ewk12ss.lep3_charge(); }
	const int &lep3_pdgid() { return ewk12ss.lep3_pdgid(); }
	const int &lep3_type() { return ewk12ss.lep3_type(); }
	const float &lep3_d0() { return ewk12ss.lep3_d0(); }
	const float &lep3_d0err() { return ewk12ss.lep3_d0err(); }
	const float &lep3_dz() { return ewk12ss.lep3_dz(); }
	const float &lep3_ip3d() { return ewk12ss.lep3_ip3d(); }
	const float &lep3_ip3derr() { return ewk12ss.lep3_ip3derr(); }
	const float &lep3_dzerr() { return ewk12ss.lep3_dzerr(); }
	const float &lep3_mt() { return ewk12ss.lep3_mt(); }
	const float &lep3_corpfiso() { return ewk12ss.lep3_corpfiso(); }
	const float &lep3_pfiso() { return ewk12ss.lep3_pfiso(); }
	const float &lep3_chiso() { return ewk12ss.lep3_chiso(); }
	const float &lep3_emiso() { return ewk12ss.lep3_emiso(); }
	const float &lep3_nhiso() { return ewk12ss.lep3_nhiso(); }
	const float &lep3_corpfiso04() { return ewk12ss.lep3_corpfiso04(); }
	const float &lep3_pfiso04() { return ewk12ss.lep3_pfiso04(); }
	const float &lep3_chiso04() { return ewk12ss.lep3_chiso04(); }
	const float &lep3_emiso04() { return ewk12ss.lep3_emiso04(); }
	const float &lep3_nhiso04() { return ewk12ss.lep3_nhiso04(); }
	const float &lep3_cordetiso() { return ewk12ss.lep3_cordetiso(); }
	const float &lep3_detiso() { return ewk12ss.lep3_detiso(); }
	const float &lep3_trkiso() { return ewk12ss.lep3_trkiso(); }
	const float &lep3_ecaliso() { return ewk12ss.lep3_ecaliso(); }
	const float &lep3_hcaliso() { return ewk12ss.lep3_hcaliso(); }
	const float &lep3_cordetiso04() { return ewk12ss.lep3_cordetiso04(); }
	const float &lep3_detiso04() { return ewk12ss.lep3_detiso04(); }
	const float &lep3_trkiso04() { return ewk12ss.lep3_trkiso04(); }
	const float &lep3_ecaliso04() { return ewk12ss.lep3_ecaliso04(); }
	const float &lep3_hcaliso04() { return ewk12ss.lep3_hcaliso04(); }
	const float &lep3_effarea() { return ewk12ss.lep3_effarea(); }
	const float &lep3_effarea04() { return ewk12ss.lep3_effarea04(); }
	const float &lep3_dbeta() { return ewk12ss.lep3_dbeta(); }
	const float &lep3_dbeta04() { return ewk12ss.lep3_dbeta04(); }
	const float &lep3_sf_lepeff() { return ewk12ss.lep3_sf_lepeff(); }
	const float &lep3_sf_trig() { return ewk12ss.lep3_sf_trig(); }
	const int &lep3_mcid() { return ewk12ss.lep3_mcid(); }
	const int &lep3_mc3id() { return ewk12ss.lep3_mc3id(); }
	const int &lep3_momid() { return ewk12ss.lep3_momid(); }
	const int &lep3_mc3_momid() { return ewk12ss.lep3_mc3_momid(); }
	const bool &lep3_q3agree() { return ewk12ss.lep3_q3agree(); }
	const bool &lep3_is_conv() { return ewk12ss.lep3_is_conv(); }
	const int &lep3_qsc() { return ewk12ss.lep3_qsc(); }
	const int &lep3_qctf() { return ewk12ss.lep3_qctf(); }
	const int &lep3_qgsf() { return ewk12ss.lep3_qgsf(); }
	const int &lep3_nmhits() { return ewk12ss.lep3_nmhits(); }
	const int &lep3_eleid_veto() { return ewk12ss.lep3_eleid_veto(); }
	const int &lep3_eleid_loose() { return ewk12ss.lep3_eleid_loose(); }
	const int &lep3_eleid_medium() { return ewk12ss.lep3_eleid_medium(); }
	const int &lep3_eleid_tight() { return ewk12ss.lep3_eleid_tight(); }
	const bool &lep3_is_eleid_veto() { return ewk12ss.lep3_is_eleid_veto(); }
	const bool &lep3_is_eleid_loose() { return ewk12ss.lep3_is_eleid_loose(); }
	const bool &lep3_is_eleid_medium() { return ewk12ss.lep3_is_eleid_medium(); }
	const bool &lep3_is_eleid_tight() { return ewk12ss.lep3_is_eleid_tight(); }
	const float &lep3_dphiin() { return ewk12ss.lep3_dphiin(); }
	const float &lep3_detain() { return ewk12ss.lep3_detain(); }
	const float &lep3_sieie() { return ewk12ss.lep3_sieie(); }
	const float &lep3_hoe() { return ewk12ss.lep3_hoe(); }
	const float &lep3_ooemoop() { return ewk12ss.lep3_ooemoop(); }
	const float &lep3_conv_dist() { return ewk12ss.lep3_conv_dist(); }
	const float &lep3_conv_dcot() { return ewk12ss.lep3_conv_dcot(); }
	const bool &lep3_is_global() { return ewk12ss.lep3_is_global(); }
	const bool &lep3_is_tracker() { return ewk12ss.lep3_is_tracker(); }
	const bool &lep3_is_stamu() { return ewk12ss.lep3_is_stamu(); }
	const bool &lep3_is_pfmu() { return ewk12ss.lep3_is_pfmu(); }
	const bool &lep3_is_loosemu() { return ewk12ss.lep3_is_loosemu(); }
	const bool &lep3_is_tightmu() { return ewk12ss.lep3_is_tightmu(); }
	const int &lep3_npixelhits() { return ewk12ss.lep3_npixelhits(); }
	const int &lep3_nsihits() { return ewk12ss.lep3_nsihits(); }
	const int &lep3_nsilayers() { return ewk12ss.lep3_nsilayers(); }
	const int &lep3_nstahits() { return ewk12ss.lep3_nstahits(); }
	const int &lep3_nstations() { return ewk12ss.lep3_nstations(); }
	const float &lep3_chi2() { return ewk12ss.lep3_chi2(); }
	const float &lep3_ndof() { return ewk12ss.lep3_ndof(); }
	const float &lep3_pterr() { return ewk12ss.lep3_pterr(); }
	const float &lep3_ecal_vetodep() { return ewk12ss.lep3_ecal_vetodep(); }
	const float &lep3_hcal_vetodep() { return ewk12ss.lep3_hcal_vetodep(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_p4() { return ewk12ss.lep3_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_mcp4() { return ewk12ss.lep3_mcp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_mc3p4() { return ewk12ss.lep3_mc3p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_mc_momp4() { return ewk12ss.lep3_mc_momp4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_gsf_p4() { return ewk12ss.lep3_gsf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_ctf_p4() { return ewk12ss.lep3_ctf_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_sc_p4() { return ewk12ss.lep3_sc_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_gfit_p4() { return ewk12ss.lep3_gfit_p4(); }
	const unsigned int &selection() { return ewk12ss.selection(); }
	const bool &is_good_lumi() { return ewk12ss.is_good_lumi(); }
	const bool &charge_type() { return ewk12ss.charge_type(); }
	const int &njets() { return ewk12ss.njets(); }
	const int &nlbtags() { return ewk12ss.nlbtags(); }
	const int &nmbtags() { return ewk12ss.nmbtags(); }
	const int &ntbtags() { return ewk12ss.ntbtags(); }
	const int &nlbtags_pv() { return ewk12ss.nlbtags_pv(); }
	const int &nmbtags_pv() { return ewk12ss.nmbtags_pv(); }
	const int &ntbtags_pv() { return ewk12ss.ntbtags_pv(); }
	const int &ttbar_bkdn() { return ewk12ss.ttbar_bkdn(); }
	const float &vtxw() { return ewk12ss.vtxw(); }
	const float &mt() { return ewk12ss.mt(); }
	const float &max_mt() { return ewk12ss.max_mt(); }
	const float &max_mt_up() { return ewk12ss.max_mt_up(); }
	const float &max_mt_dn() { return ewk12ss.max_mt_dn(); }
	const float &max_mt_jer() { return ewk12ss.max_mt_jer(); }
	const float &mt2() { return ewk12ss.mt2(); }
	const float &mt2j() { return ewk12ss.mt2j(); }
	const float &mt2j_up() { return ewk12ss.mt2j_up(); }
	const float &mt2j_dn() { return ewk12ss.mt2j_dn(); }
	const float &mt2j_jer() { return ewk12ss.mt2j_jer(); }
	const float &ht() { return ewk12ss.ht(); }
	const float &rho() { return ewk12ss.rho(); }
	const float &rho_iso() { return ewk12ss.rho_iso(); }
	const bool &trig_mm() { return ewk12ss.trig_mm(); }
	const bool &trig_em() { return ewk12ss.trig_em(); }
	const bool &trig_ee() { return ewk12ss.trig_ee(); }
	const bool &trig_mm_mu17_mu8() { return ewk12ss.trig_mm_mu17_mu8(); }
	const bool &trig_ee_el17_el8_id_iso() { return ewk12ss.trig_ee_el17_el8_id_iso(); }
	const bool &trig_em_mu17_el8_id_iso() { return ewk12ss.trig_em_mu17_el8_id_iso(); }
	const bool &trig_em_mu8_el17_id_iso() { return ewk12ss.trig_em_mu8_el17_id_iso(); }
	const int &njets_dn() { return ewk12ss.njets_dn(); }
	const int &njets_up() { return ewk12ss.njets_up(); }
	const int &njets_jer() { return ewk12ss.njets_jer(); }
	const int &nlbtags_dn() { return ewk12ss.nlbtags_dn(); }
	const int &nlbtags_up() { return ewk12ss.nlbtags_up(); }
	const int &nlbtags_jer() { return ewk12ss.nlbtags_jer(); }
	const int &nmbtags_dn() { return ewk12ss.nmbtags_dn(); }
	const int &nmbtags_up() { return ewk12ss.nmbtags_up(); }
	const int &nmbtags_jer() { return ewk12ss.nmbtags_jer(); }
	const int &ntbtags_dn() { return ewk12ss.ntbtags_dn(); }
	const int &ntbtags_up() { return ewk12ss.ntbtags_up(); }
	const int &ntbtags_jer() { return ewk12ss.ntbtags_jer(); }
	const float &ht_dn() { return ewk12ss.ht_dn(); }
	const float &ht_up() { return ewk12ss.ht_up(); }
	const float &ht_jer() { return ewk12ss.ht_jer(); }
	const int &nlbtags_reweighted() { return ewk12ss.nlbtags_reweighted(); }
	const int &nlbtags_reweighted_dn() { return ewk12ss.nlbtags_reweighted_dn(); }
	const int &nlbtags_reweighted_up() { return ewk12ss.nlbtags_reweighted_up(); }
	const int &nlbtags_reweighted_jer() { return ewk12ss.nlbtags_reweighted_jer(); }
	const int &nlbtags_reweighted_jec_dn() { return ewk12ss.nlbtags_reweighted_jec_dn(); }
	const int &nlbtags_reweighted_jec_up() { return ewk12ss.nlbtags_reweighted_jec_up(); }
	const int &nmbtags_reweighted() { return ewk12ss.nmbtags_reweighted(); }
	const int &nmbtags_reweighted_dn() { return ewk12ss.nmbtags_reweighted_dn(); }
	const int &nmbtags_reweighted_up() { return ewk12ss.nmbtags_reweighted_up(); }
	const int &nmbtags_reweighted_jer() { return ewk12ss.nmbtags_reweighted_jer(); }
	const int &nmbtags_reweighted_jec_dn() { return ewk12ss.nmbtags_reweighted_jec_dn(); }
	const int &nmbtags_reweighted_jec_up() { return ewk12ss.nmbtags_reweighted_jec_up(); }
	const int &ntbtags_reweighted() { return ewk12ss.ntbtags_reweighted(); }
	const int &ntbtags_reweighted_dn() { return ewk12ss.ntbtags_reweighted_dn(); }
	const int &ntbtags_reweighted_up() { return ewk12ss.ntbtags_reweighted_up(); }
	const int &ntbtags_reweighted_jer() { return ewk12ss.ntbtags_reweighted_jer(); }
	const int &ntbtags_reweighted_jec_dn() { return ewk12ss.ntbtags_reweighted_jec_dn(); }
	const int &ntbtags_reweighted_jec_up() { return ewk12ss.ntbtags_reweighted_jec_up(); }
	const int &nlbtags_pv_reweighted() { return ewk12ss.nlbtags_pv_reweighted(); }
	const int &nlbtags_pv_reweighted_dn() { return ewk12ss.nlbtags_pv_reweighted_dn(); }
	const int &nlbtags_pv_reweighted_up() { return ewk12ss.nlbtags_pv_reweighted_up(); }
	const int &nlbtags_pv_reweighted_jer() { return ewk12ss.nlbtags_pv_reweighted_jer(); }
	const int &nlbtags_pv_reweighted_jec_dn() { return ewk12ss.nlbtags_pv_reweighted_jec_dn(); }
	const int &nlbtags_pv_reweighted_jec_up() { return ewk12ss.nlbtags_pv_reweighted_jec_up(); }
	const int &nmbtags_pv_reweighted() { return ewk12ss.nmbtags_pv_reweighted(); }
	const int &nmbtags_pv_reweighted_dn() { return ewk12ss.nmbtags_pv_reweighted_dn(); }
	const int &nmbtags_pv_reweighted_up() { return ewk12ss.nmbtags_pv_reweighted_up(); }
	const int &nmbtags_pv_reweighted_jer() { return ewk12ss.nmbtags_pv_reweighted_jer(); }
	const int &nmbtags_pv_reweighted_jec_dn() { return ewk12ss.nmbtags_pv_reweighted_jec_dn(); }
	const int &nmbtags_pv_reweighted_jec_up() { return ewk12ss.nmbtags_pv_reweighted_jec_up(); }
	const int &ntbtags_pv_reweighted() { return ewk12ss.ntbtags_pv_reweighted(); }
	const int &ntbtags_pv_reweighted_dn() { return ewk12ss.ntbtags_pv_reweighted_dn(); }
	const int &ntbtags_pv_reweighted_up() { return ewk12ss.ntbtags_pv_reweighted_up(); }
	const int &ntbtags_pv_reweighted_jer() { return ewk12ss.ntbtags_pv_reweighted_jer(); }
	const int &ntbtags_pv_reweighted_jec_dn() { return ewk12ss.ntbtags_pv_reweighted_jec_dn(); }
	const int &ntbtags_pv_reweighted_jec_up() { return ewk12ss.ntbtags_pv_reweighted_jec_up(); }
	const float &pfmet_dn() { return ewk12ss.pfmet_dn(); }
	const float &pfmet_up() { return ewk12ss.pfmet_up(); }
	const float &pfmet_phi_dn() { return ewk12ss.pfmet_phi_dn(); }
	const float &pfmet_phi_up() { return ewk12ss.pfmet_phi_up(); }
	const float &pfmet_jer() { return ewk12ss.pfmet_jer(); }
	const float &pfmet_phi_jer() { return ewk12ss.pfmet_phi_jer(); }
	const float &sf_dileptrig() { return ewk12ss.sf_dileptrig(); }
	const float &sf_lepeff() { return ewk12ss.sf_lepeff(); }
	const float &sparm0() { return ewk12ss.sparm0(); }
	const float &sparm1() { return ewk12ss.sparm1(); }
	const float &sparm2() { return ewk12ss.sparm2(); }
	const float &sparm3() { return ewk12ss.sparm3(); }
	const TString &sparm0_name() { return ewk12ss.sparm0_name(); }
	const TString &sparm1_name() { return ewk12ss.sparm1_name(); }
	const TString &sparm2_name() { return ewk12ss.sparm2_name(); }
	const TString &sparm3_name() { return ewk12ss.sparm3_name(); }
	const bool &is_pp() { return ewk12ss.is_pp(); }
	const bool &is_mm() { return ewk12ss.is_mm(); }
	const bool &is_ss() { return ewk12ss.is_ss(); }
	const bool &is_sf() { return ewk12ss.is_sf(); }
	const bool &is_df() { return ewk12ss.is_df(); }
	const bool &is_os() { return ewk12ss.is_os(); }
	const bool &no_extraz() { return ewk12ss.no_extraz(); }
	const bool &no_extrag() { return ewk12ss.no_extrag(); }
	const bool &clean() { return ewk12ss.clean(); }
	const bool &presel() { return ewk12ss.presel(); }
	const bool &em_mufo() { return ewk12ss.em_mufo(); }
	const bool &em_elfo() { return ewk12ss.em_elfo(); }
	const bool &hyp_good_vtx() { return ewk12ss.hyp_good_vtx(); }
	const bool &is_gen_pp() { return ewk12ss.is_gen_pp(); }
	const bool &is_gen_mm() { return ewk12ss.is_gen_mm(); }
	const int &gen_njets() { return ewk12ss.gen_njets(); }
	const float &gen_ht() { return ewk12ss.gen_ht(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_nearjet_p4() { return ewk12ss.lep1_nearjet_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_nearlep_p4() { return ewk12ss.lep1_nearlep_p4(); }
	const float &lep1_wfr() { return ewk12ss.lep1_wfr(); }
	const float &lep1_wflip() { return ewk12ss.lep1_wflip(); }
	const float &lep1_nearjet_dr() { return ewk12ss.lep1_nearjet_dr(); }
	const float &lep1_nearlep_dr() { return ewk12ss.lep1_nearlep_dr(); }
	const int &lep1_nearlep_id() { return ewk12ss.lep1_nearlep_id(); }
	const bool &lep1_isFromH() { return ewk12ss.lep1_isFromH(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_nearjet_p4() { return ewk12ss.lep2_nearjet_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_nearlep_p4() { return ewk12ss.lep2_nearlep_p4(); }
	const float &lep2_wfr() { return ewk12ss.lep2_wfr(); }
	const float &lep2_wflip() { return ewk12ss.lep2_wflip(); }
	const float &lep2_nearjet_dr() { return ewk12ss.lep2_nearjet_dr(); }
	const float &lep2_nearlep_dr() { return ewk12ss.lep2_nearlep_dr(); }
	const int &lep2_nearlep_id() { return ewk12ss.lep2_nearlep_id(); }
	const bool &lep2_isFromH() { return ewk12ss.lep2_isFromH(); }
	const float &jets_dr12() { return ewk12ss.jets_dr12(); }
	const float &dijet_mass() { return ewk12ss.dijet_mass(); }
	const float &dijet_mass_pv() { return ewk12ss.dijet_mass_pv(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_p4() { return ewk12ss.vjets_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_p4_up() { return ewk12ss.vjets_p4_up(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_p4_dn() { return ewk12ss.vjets_p4_dn(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_p4_jer() { return ewk12ss.vjets_p4_jer(); }
	const vector<bool> &vjets_matched_pv() { return ewk12ss.vjets_matched_pv(); }
	const vector<bool> &vjets_matched_pv_up() { return ewk12ss.vjets_matched_pv_up(); }
	const vector<bool> &vjets_matched_pv_dn() { return ewk12ss.vjets_matched_pv_dn(); }
	const vector<bool> &vjets_matched_pv_jer() { return ewk12ss.vjets_matched_pv_jer(); }
	const vector<int> &vjets_mcflavor_phys() { return ewk12ss.vjets_mcflavor_phys(); }
	const vector<int> &vjets_mcflavor_algo() { return ewk12ss.vjets_mcflavor_algo(); }
	const vector<int> &vjets_mcflavor_phys_up() { return ewk12ss.vjets_mcflavor_phys_up(); }
	const vector<int> &vjets_mcflavor_algo_up() { return ewk12ss.vjets_mcflavor_algo_up(); }
	const vector<int> &vjets_mcflavor_phys_dn() { return ewk12ss.vjets_mcflavor_phys_dn(); }
	const vector<int> &vjets_mcflavor_algo_dn() { return ewk12ss.vjets_mcflavor_algo_dn(); }
	const vector<int> &vjets_mcflavor_phys_jer() { return ewk12ss.vjets_mcflavor_phys_jer(); }
	const vector<int> &vjets_mcflavor_algo_jer() { return ewk12ss.vjets_mcflavor_algo_jer(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_mc3p4() { return ewk12ss.vjets_mc3p4(); }
	const vector<bool> &vjets_lbtagged() { return ewk12ss.vjets_lbtagged(); }
	const vector<bool> &vjets_mbtagged() { return ewk12ss.vjets_mbtagged(); }
	const vector<bool> &vjets_tbtagged() { return ewk12ss.vjets_tbtagged(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vgenjets_p4() { return ewk12ss.vgenjets_p4(); }
	const vector<int> &vjets_mc3id() { return ewk12ss.vjets_mc3id(); }
	const vector<int> &vjets_momid() { return ewk12ss.vjets_momid(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vjets_nearjet_p4() { return ewk12ss.vjets_nearjet_p4(); }
	const vector<float> &vjets_nearjet_dr() { return ewk12ss.vjets_nearjet_dr(); }
	const vector<float> &vjets_bdisc() { return ewk12ss.vjets_bdisc(); }
	const vector<float> &vjets_bdisc_up() { return ewk12ss.vjets_bdisc_up(); }
	const vector<float> &vjets_bdisc_dn() { return ewk12ss.vjets_bdisc_dn(); }
	const vector<float> &vjets_bdisc_jer() { return ewk12ss.vjets_bdisc_jer(); }
	const vector<bool> &vjets_qgdisc() { return ewk12ss.vjets_qgdisc(); }
	const vector<bool> &vjets_qgdisc_up() { return ewk12ss.vjets_qgdisc_up(); }
	const vector<bool> &vjets_qgdisc_dn() { return ewk12ss.vjets_qgdisc_dn(); }
	const vector<bool> &vjets_qgdisc_jer() { return ewk12ss.vjets_qgdisc_jer(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_jj_p4() { return ewk12ss.lep1_jj_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_jj_p4() { return ewk12ss.lep2_jj_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jjl_p4() { return ewk12ss.jjl_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jjl_p4_up() { return ewk12ss.jjl_p4_up(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jjl_p4_dn() { return ewk12ss.jjl_p4_dn(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jjl_p4_jer() { return ewk12ss.jjl_p4_jer(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gen_lep1_p4() { return ewk12ss.gen_lep1_p4(); }
	const int &gen_lep1_pdgid() { return ewk12ss.gen_lep1_pdgid(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gen_lep2_p4() { return ewk12ss.gen_lep2_p4(); }
	const int &gen_lep2_pdgid() { return ewk12ss.gen_lep2_pdgid(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gen_lep3_p4() { return ewk12ss.gen_lep3_p4(); }
	const int &gen_lep3_pdgid() { return ewk12ss.gen_lep3_pdgid(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &gen_dilep_p4() { return ewk12ss.gen_dilep_p4(); }
	const int &gen_dilep_type() { return ewk12ss.gen_dilep_type(); }
	const float &gen_dilep_mass() { return ewk12ss.gen_dilep_mass(); }
	const float &gen_dilep_dphi() { return ewk12ss.gen_dilep_dphi(); }
	const float &gen_dilep_deta() { return ewk12ss.gen_dilep_deta(); }
	const float &gen_dilep_dr() { return ewk12ss.gen_dilep_dr(); }
	const int &pfcandid5() { return ewk12ss.pfcandid5(); }
	const int &pfcandid10() { return ewk12ss.pfcandid10(); }
	const int &pfcanddirid10() { return ewk12ss.pfcanddirid10(); }
	const int &pfcandvetoid10() { return ewk12ss.pfcandvetoid10(); }
	const int &pfcandvetoLid10() { return ewk12ss.pfcandvetoLid10(); }
	const int &pfcandidOS10() { return ewk12ss.pfcandidOS10(); }
	const int &pfcandidOS10looseZ() { return ewk12ss.pfcandidOS10looseZ(); }
	const int &pfcandid5looseZ() { return ewk12ss.pfcandid5looseZ(); }
	const float &trkpt5() { return ewk12ss.trkpt5(); }
	const float &mleptrk5() { return ewk12ss.mleptrk5(); }
	const float &trkreliso5() { return ewk12ss.trkreliso5(); }
	const float &trkpt10() { return ewk12ss.trkpt10(); }
	const float &mleptrk10() { return ewk12ss.mleptrk10(); }
	const float &trkreliso10() { return ewk12ss.trkreliso10(); }
	const float &trkpt5loose() { return ewk12ss.trkpt5loose(); }
	const float &trkreliso5loose() { return ewk12ss.trkreliso5loose(); }
	const float &trkpt10loose() { return ewk12ss.trkpt10loose(); }
	const float &trkreliso10loose() { return ewk12ss.trkreliso10loose(); }
	const float &trkpt10pt0p1() { return ewk12ss.trkpt10pt0p1(); }
	const float &trkreliso10pt0p1() { return ewk12ss.trkreliso10pt0p1(); }
	const float &trkpt10pt0p2() { return ewk12ss.trkpt10pt0p2(); }
	const float &trkreliso10pt0p2() { return ewk12ss.trkreliso10pt0p2(); }
	const float &trkpt10pt0p3() { return ewk12ss.trkpt10pt0p3(); }
	const float &trkreliso10pt0p3() { return ewk12ss.trkreliso10pt0p3(); }
	const float &trkpt10pt0p4() { return ewk12ss.trkpt10pt0p4(); }
	const float &trkreliso10pt0p4() { return ewk12ss.trkreliso10pt0p4(); }
	const float &trkpt10pt0p5() { return ewk12ss.trkpt10pt0p5(); }
	const float &trkreliso10pt0p5() { return ewk12ss.trkreliso10pt0p5(); }
	const float &trkpt10pt0p6() { return ewk12ss.trkpt10pt0p6(); }
	const float &trkreliso10pt0p6() { return ewk12ss.trkreliso10pt0p6(); }
	const float &trkpt10pt0p7() { return ewk12ss.trkpt10pt0p7(); }
	const float &trkreliso10pt0p7() { return ewk12ss.trkreliso10pt0p7(); }
	const float &trkpt10pt0p8() { return ewk12ss.trkpt10pt0p8(); }
	const float &trkreliso10pt0p8() { return ewk12ss.trkreliso10pt0p8(); }
	const float &trkpt10pt0p9() { return ewk12ss.trkpt10pt0p9(); }
	const float &trkreliso10pt0p9() { return ewk12ss.trkreliso10pt0p9(); }
	const float &trkpt10pt1p0() { return ewk12ss.trkpt10pt1p0(); }
	const float &trkreliso10pt1p0() { return ewk12ss.trkreliso10pt1p0(); }
	const float &pfcandiso5() { return ewk12ss.pfcandiso5(); }
	const float &pfcandiso10() { return ewk12ss.pfcandiso10(); }
	const float &pfcanddiriso10() { return ewk12ss.pfcanddiriso10(); }
	const float &pfcandvetoiso10() { return ewk12ss.pfcandvetoiso10(); }
	const float &pfcandvetoLiso10() { return ewk12ss.pfcandvetoLiso10(); }
	const float &pfcandisoOS10() { return ewk12ss.pfcandisoOS10(); }
	const float &pfcandisoOS10looseZ() { return ewk12ss.pfcandisoOS10looseZ(); }
	const float &pfcandiso5looseZ() { return ewk12ss.pfcandiso5looseZ(); }
	const float &pfcandpt5() { return ewk12ss.pfcandpt5(); }
	const float &pfcandpt10() { return ewk12ss.pfcandpt10(); }
	const float &pfcanddirpt10() { return ewk12ss.pfcanddirpt10(); }
	const float &pfcandvetopt10() { return ewk12ss.pfcandvetopt10(); }
	const float &pfcandvetoLpt10() { return ewk12ss.pfcandvetoLpt10(); }
	const float &pfcandptOS10() { return ewk12ss.pfcandptOS10(); }
	const float &pfcandptOS10looseZ() { return ewk12ss.pfcandptOS10looseZ(); }
	const float &pfcandpt5looseZ() { return ewk12ss.pfcandpt5looseZ(); }
	const float &pfcanddz5() { return ewk12ss.pfcanddz5(); }
	const float &pfcanddz10() { return ewk12ss.pfcanddz10(); }
	const float &pfcanddirdz10() { return ewk12ss.pfcanddirdz10(); }
	const float &pfcandvetodz10() { return ewk12ss.pfcandvetodz10(); }
	const float &pfcandvetoLdz10() { return ewk12ss.pfcandvetoLdz10(); }
	const float &pfcanddzOS10() { return ewk12ss.pfcanddzOS10(); }
	const float &pfcanddzOS10looseZ() { return ewk12ss.pfcanddzOS10looseZ(); }
	const float &pfcanddz5looseZ() { return ewk12ss.pfcanddz5looseZ(); }
	const float &pfcandmindrj5() { return ewk12ss.pfcandmindrj5(); }
	const float &pfcandmindrj10() { return ewk12ss.pfcandmindrj10(); }
	const float &pfcanddirmindrj10() { return ewk12ss.pfcanddirmindrj10(); }
	const float &pfcandvetomindrj10() { return ewk12ss.pfcandvetomindrj10(); }
	const float &pfcandvetoLmindrj10() { return ewk12ss.pfcandvetoLmindrj10(); }
	const float &pfcandpt10pt0p1() { return ewk12ss.pfcandpt10pt0p1(); }
	const float &pfcandiso10pt0p1() { return ewk12ss.pfcandiso10pt0p1(); }
	const float &pfcandpt10pt0p2() { return ewk12ss.pfcandpt10pt0p2(); }
	const float &pfcandiso10pt0p2() { return ewk12ss.pfcandiso10pt0p2(); }
	const float &pfcandpt10pt0p3() { return ewk12ss.pfcandpt10pt0p3(); }
	const float &pfcandiso10pt0p3() { return ewk12ss.pfcandiso10pt0p3(); }
	const float &pfcandpt10pt0p4() { return ewk12ss.pfcandpt10pt0p4(); }
	const float &pfcandiso10pt0p4() { return ewk12ss.pfcandiso10pt0p4(); }
	const float &pfcandpt10pt0p5() { return ewk12ss.pfcandpt10pt0p5(); }
	const float &pfcandiso10pt0p5() { return ewk12ss.pfcandiso10pt0p5(); }
	const float &pfcandpt10pt0p6() { return ewk12ss.pfcandpt10pt0p6(); }
	const float &pfcandiso10pt0p6() { return ewk12ss.pfcandiso10pt0p6(); }
	const float &pfcandpt10pt0p7() { return ewk12ss.pfcandpt10pt0p7(); }
	const float &pfcandiso10pt0p7() { return ewk12ss.pfcandiso10pt0p7(); }
	const float &pfcandpt10pt0p8() { return ewk12ss.pfcandpt10pt0p8(); }
	const float &pfcandiso10pt0p8() { return ewk12ss.pfcandiso10pt0p8(); }
	const float &pfcandpt10pt0p9() { return ewk12ss.pfcandpt10pt0p9(); }
	const float &pfcandiso10pt0p9() { return ewk12ss.pfcandiso10pt0p9(); }
	const float &pfcandpt10pt1p0() { return ewk12ss.pfcandpt10pt1p0(); }
	const float &pfcandiso10pt1p0() { return ewk12ss.pfcandiso10pt1p0(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcand5() { return ewk12ss.pfcand5(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcand10() { return ewk12ss.pfcand10(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcanddir10() { return ewk12ss.pfcanddir10(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcandveto10() { return ewk12ss.pfcandveto10(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcandvetoL10() { return ewk12ss.pfcandvetoL10(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcandOS10() { return ewk12ss.pfcandOS10(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcandOS10looseZ() { return ewk12ss.pfcandOS10looseZ(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfcand5looseZ() { return ewk12ss.pfcand5looseZ(); }
	const int &pfTau15_leadPtcandID() { return ewk12ss.pfTau15_leadPtcandID(); }
	const int &pfTau_leadPtcandID() { return ewk12ss.pfTau_leadPtcandID(); }
	const int &pfTauLoose_leadPtcandID() { return ewk12ss.pfTauLoose_leadPtcandID(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau15() { return ewk12ss.pfTau15(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau15_leadPtcand() { return ewk12ss.pfTau15_leadPtcand(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau() { return ewk12ss.pfTau(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTau_leadPtcand() { return ewk12ss.pfTau_leadPtcand(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTauLoose() { return ewk12ss.pfTauLoose(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &pfTauLoose_leadPtcand() { return ewk12ss.pfTauLoose_leadPtcand(); }
	const vector<float> &pfjets_beta() { return ewk12ss.pfjets_beta(); }
	const vector<float> &pfjets_beta2() { return ewk12ss.pfjets_beta2(); }
	const vector<float> &pfjets_beta_0p1() { return ewk12ss.pfjets_beta_0p1(); }
	const vector<float> &pfjets_beta_0p2() { return ewk12ss.pfjets_beta_0p2(); }
	const vector<float> &pfjets_beta2_0p1() { return ewk12ss.pfjets_beta2_0p1(); }
	const vector<float> &pfjets_beta2_0p5() { return ewk12ss.pfjets_beta2_0p5(); }
	const vector<float> &pfjets_mvaPUid() { return ewk12ss.pfjets_mvaPUid(); }
	const vector<float> &pfjets_mva5xPUid() { return ewk12ss.pfjets_mva5xPUid(); }
	const vector<float> &pfjets_up_mva5xPUid() { return ewk12ss.pfjets_up_mva5xPUid(); }
	const vector<float> &pfjets_dn_mva5xPUid() { return ewk12ss.pfjets_dn_mva5xPUid(); }
	const vector<float> &pfjets_jer_mva5xPUid() { return ewk12ss.pfjets_jer_mva5xPUid(); }
	const vector<float> &pfjets_mvaBeta() { return ewk12ss.pfjets_mvaBeta(); }
	const bool &passes_isotrk_veto() { return ewk12ss.passes_isotrk_veto(); }
	const bool &passes_tau_veto() { return ewk12ss.passes_tau_veto(); }
	const int &njets_pv_tight0() { return ewk12ss.njets_pv_tight0(); }
	const int &njets_pv_tight0_up() { return ewk12ss.njets_pv_tight0_up(); }
	const int &njets_pv_tight0_dn() { return ewk12ss.njets_pv_tight0_dn(); }
	const int &njets_pv_tight0_jer() { return ewk12ss.njets_pv_tight0_jer(); }
	const int &njets_pv_tight1() { return ewk12ss.njets_pv_tight1(); }
	const int &njets_pv_tight2() { return ewk12ss.njets_pv_tight2(); }
	const bool &leptonic_offshell_w() { return ewk12ss.leptonic_offshell_w(); }
	const bool &hadronic_offshell_w() { return ewk12ss.hadronic_offshell_w(); }
}
