#include "FakeRateBaby.h"
FakeRateBaby fake_rate_baby;
namespace frb {
	int &run() { return fake_rate_baby.run(); }
	int &ls() { return fake_rate_baby.ls(); }
	unsigned int &evt() { return fake_rate_baby.evt(); }
	float &weight() { return fake_rate_baby.weight(); }
	bool &is_real_data() { return fake_rate_baby.is_real_data(); }
	TString &dataset() { return fake_rate_baby.dataset(); }
	TString &filename() { return fake_rate_baby.filename(); }
	int &pu_nPUvertices() { return fake_rate_baby.pu_nPUvertices(); }
	int &evt_nvtxs() { return fake_rate_baby.evt_nvtxs(); }
	int &nFOels() { return fake_rate_baby.nFOels(); }
	int &nFOmus() { return fake_rate_baby.nFOmus(); }
	int &ngsfs() { return fake_rate_baby.ngsfs(); }
	int &nmus() { return fake_rate_baby.nmus(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lp4() { return fake_rate_baby.lp4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &mc3p4() { return fake_rate_baby.mc3p4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &foel_p4() { return fake_rate_baby.foel_p4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &fomu_p4() { return fake_rate_baby.fomu_p4(); }
	int &foel_id() { return fake_rate_baby.foel_id(); }
	int &fomu_id() { return fake_rate_baby.fomu_id(); }
	float &foel_mass() { return fake_rate_baby.foel_mass(); }
	float &fomu_mass() { return fake_rate_baby.fomu_mass(); }
	float &pt() { return fake_rate_baby.pt(); }
	float &eta() { return fake_rate_baby.eta(); }
	float &sceta() { return fake_rate_baby.sceta(); }
	float &phi() { return fake_rate_baby.phi(); }
	float &scet() { return fake_rate_baby.scet(); }
	float &hoe() { return fake_rate_baby.hoe(); }
	float &pfmet() { return fake_rate_baby.pfmet(); }
	float &pfmetphi() { return fake_rate_baby.pfmetphi(); }
	float &iso() { return fake_rate_baby.iso(); }
	float &iso_nps() { return fake_rate_baby.iso_nps(); }
	float &trck_iso() { return fake_rate_baby.trck_iso(); }
	float &ecal_iso() { return fake_rate_baby.ecal_iso(); }
	float &ecal_iso_nps() { return fake_rate_baby.ecal_iso_nps(); }
	float &hcal_iso() { return fake_rate_baby.hcal_iso(); }
	float &pfiso03() { return fake_rate_baby.pfiso03(); }
	float &ch_pfiso03() { return fake_rate_baby.ch_pfiso03(); }
	float &nh_pfiso03() { return fake_rate_baby.nh_pfiso03(); }
	float &em_pfiso03() { return fake_rate_baby.em_pfiso03(); }
	float &pfiso04() { return fake_rate_baby.pfiso04(); }
	float &ch_pfiso04() { return fake_rate_baby.ch_pfiso04(); }
	float &nh_pfiso04() { return fake_rate_baby.nh_pfiso04(); }
	float &em_pfiso04() { return fake_rate_baby.em_pfiso04(); }
	float &pfpupt03() { return fake_rate_baby.pfpupt03(); }
	float &pfpupt04() { return fake_rate_baby.pfpupt04(); }
	float &cpfiso03_rho() { return fake_rate_baby.cpfiso03_rho(); }
	float &cpfiso03_db() { return fake_rate_baby.cpfiso03_db(); }
	int &id() { return fake_rate_baby.id(); }
	bool &closestMuon() { return fake_rate_baby.closestMuon(); }
	float &el_id_sieie() { return fake_rate_baby.el_id_sieie(); }
	float &el_id_detain() { return fake_rate_baby.el_id_detain(); }
	float &el_id_dphiin() { return fake_rate_baby.el_id_dphiin(); }
	bool &el_id_smurfV5() { return fake_rate_baby.el_id_smurfV5(); }
	bool &el_id_vbtf80() { return fake_rate_baby.el_id_vbtf80(); }
	bool &el_id_vbtf90() { return fake_rate_baby.el_id_vbtf90(); }
	float &el_effarea() { return fake_rate_baby.el_effarea(); }
	float &mu_effarea03() { return fake_rate_baby.mu_effarea03(); }
	float &mu_nh_effarea03() { return fake_rate_baby.mu_nh_effarea03(); }
	float &mu_em_effarea03() { return fake_rate_baby.mu_em_effarea03(); }
	float &mu_effarea03_tight() { return fake_rate_baby.mu_effarea03_tight(); }
	float &mu_nh_effarea03_tight() { return fake_rate_baby.mu_nh_effarea03_tight(); }
	float &mu_em_effarea03_tight() { return fake_rate_baby.mu_em_effarea03_tight(); }
	float &mu_effarea04() { return fake_rate_baby.mu_effarea04(); }
	float &mu_nh_effarea04() { return fake_rate_baby.mu_nh_effarea04(); }
	float &mu_em_effarea04() { return fake_rate_baby.mu_em_effarea04(); }
	float &mu_effarea04_tight() { return fake_rate_baby.mu_effarea04_tight(); }
	float &mu_nh_effarea04_tight() { return fake_rate_baby.mu_nh_effarea04_tight(); }
	float &mu_em_effarea04_tight() { return fake_rate_baby.mu_em_effarea04_tight(); }
	bool &conv0MissHits() { return fake_rate_baby.conv0MissHits(); }
	bool &convHitPattern() { return fake_rate_baby.convHitPattern(); }
	bool &convPartnerTrack() { return fake_rate_baby.convPartnerTrack(); }
	bool &convMIT() { return fake_rate_baby.convMIT(); }
	float &mt() { return fake_rate_baby.mt(); }
	float &pfmt() { return fake_rate_baby.pfmt(); }
	bool &q3() { return fake_rate_baby.q3(); }
	int &els_exp_innerlayers() { return fake_rate_baby.els_exp_innerlayers(); }
	float &d0PV_wwV1() { return fake_rate_baby.d0PV_wwV1(); }
	float &dzPV_wwV1() { return fake_rate_baby.dzPV_wwV1(); }
	float &ht_pf() { return fake_rate_baby.ht_pf(); }
	float &ht_pf_L2L3() { return fake_rate_baby.ht_pf_L2L3(); }
	float &ht_pf_L1FastL2L3() { return fake_rate_baby.ht_pf_L1FastL2L3(); }
	int &mcid() { return fake_rate_baby.mcid(); }
	int &mcmotherid() { return fake_rate_baby.mcmotherid(); }
	int &mc3id() { return fake_rate_baby.mc3id(); }
	float &mc3pt() { return fake_rate_baby.mc3pt(); }
	float &mc3dr() { return fake_rate_baby.mc3dr(); }
	int &leptonIsFromW() { return fake_rate_baby.leptonIsFromW(); }
	bool &mu_isCosmic() { return fake_rate_baby.mu_isCosmic(); }
	float &mu_ecal_veto_dep() { return fake_rate_baby.mu_ecal_veto_dep(); }
	float &mu_hcal_veto_dep() { return fake_rate_baby.mu_hcal_veto_dep(); }
	float &mu_nchi2() { return fake_rate_baby.mu_nchi2(); }
	float &mz_fo_gsf() { return fake_rate_baby.mz_fo_gsf(); }
	float &mz_gsf_iso() { return fake_rate_baby.mz_gsf_iso(); }
	float &mz_fo_ctf() { return fake_rate_baby.mz_fo_ctf(); }
	float &mz_ctf_iso() { return fake_rate_baby.mz_ctf_iso(); }
	float &mupsilon_fo_mu() { return fake_rate_baby.mupsilon_fo_mu(); }
	float &mupsilon_mu_iso() { return fake_rate_baby.mupsilon_mu_iso(); }
	bool &num_el_ssV7() { return fake_rate_baby.num_el_ssV7(); }
	bool &num_el_ssV7_noIso() { return fake_rate_baby.num_el_ssV7_noIso(); }
	bool &v1_el_ssV7() { return fake_rate_baby.v1_el_ssV7(); }
	bool &v2_el_ssV7() { return fake_rate_baby.v2_el_ssV7(); }
	bool &v3_el_ssV7() { return fake_rate_baby.v3_el_ssV7(); }
	bool &num_mu_ssV5() { return fake_rate_baby.num_mu_ssV5(); }
	bool &num_mu_ssV5_noIso() { return fake_rate_baby.num_mu_ssV5_noIso(); }
	bool &fo_mu_ssV5() { return fake_rate_baby.fo_mu_ssV5(); }
	bool &fo_mu_ssV5_noIso() { return fake_rate_baby.fo_mu_ssV5_noIso(); }
	bool &num_el_TTZcuttightv1() { return fake_rate_baby.num_el_TTZcuttightv1(); }
	bool &num_el_TTZcuttightv1_noIso() { return fake_rate_baby.num_el_TTZcuttightv1_noIso(); }
	bool &fo_el_TTZcuttightv1() { return fake_rate_baby.fo_el_TTZcuttightv1(); }
	bool &fo_el_TTZcuttightv1_noIso() { return fake_rate_baby.fo_el_TTZcuttightv1_noIso(); }
	bool &num_el_TTZcutloosev1() { return fake_rate_baby.num_el_TTZcutloosev1(); }
	bool &num_el_TTZcutloosev1_noIso() { return fake_rate_baby.num_el_TTZcutloosev1_noIso(); }
	bool &fo_el_TTZcutloosev1() { return fake_rate_baby.fo_el_TTZcutloosev1(); }
	bool &fo_el_TTZcutloosev1_noIso() { return fake_rate_baby.fo_el_TTZcutloosev1_noIso(); }
	bool &num_el_TTZMVAtightv1() { return fake_rate_baby.num_el_TTZMVAtightv1(); }
	bool &num_el_TTZMVAtightv1_noIso() { return fake_rate_baby.num_el_TTZMVAtightv1_noIso(); }
	bool &fo_el_TTZMVAtightv1() { return fake_rate_baby.fo_el_TTZMVAtightv1(); }
	bool &fo_el_TTZMVAtightv1_noIso() { return fake_rate_baby.fo_el_TTZMVAtightv1_noIso(); }
	bool &num_el_TTZMVAloosev1() { return fake_rate_baby.num_el_TTZMVAloosev1(); }
	bool &num_el_TTZMVAloosev1_noIso() { return fake_rate_baby.num_el_TTZMVAloosev1_noIso(); }
	bool &fo_el_TTZMVAloosev1() { return fake_rate_baby.fo_el_TTZMVAloosev1(); }
	bool &fo_el_TTZMVAloosev1_noIso() { return fake_rate_baby.fo_el_TTZMVAloosev1_noIso(); }
	bool &num_mu_TTZtightv1() { return fake_rate_baby.num_mu_TTZtightv1(); }
	bool &num_mu_TTZtightv1_noIso() { return fake_rate_baby.num_mu_TTZtightv1_noIso(); }
	bool &fo_mu_TTZtightv1() { return fake_rate_baby.fo_mu_TTZtightv1(); }
	bool &fo_mu_TTZtightv1_noIso() { return fake_rate_baby.fo_mu_TTZtightv1_noIso(); }
	bool &num_mu_TTZloosev1() { return fake_rate_baby.num_mu_TTZloosev1(); }
	bool &num_mu_TTZloosev1_noIso() { return fake_rate_baby.num_mu_TTZloosev1_noIso(); }
	bool &fo_mu_TTZloosev1() { return fake_rate_baby.fo_mu_TTZloosev1(); }
	bool &fo_mu_TTZloosev1_noIso() { return fake_rate_baby.fo_mu_TTZloosev1_noIso(); }
	bool &num_el_ssV6() { return fake_rate_baby.num_el_ssV6(); }
	bool &num_el_ssV6_noIso() { return fake_rate_baby.num_el_ssV6_noIso(); }
	bool &v1_el_ssV6() { return fake_rate_baby.v1_el_ssV6(); }
	bool &v2_el_ssV6() { return fake_rate_baby.v2_el_ssV6(); }
	bool &v3_el_ssV6() { return fake_rate_baby.v3_el_ssV6(); }
	bool &numNomSSv4() { return fake_rate_baby.numNomSSv4(); }
	bool &numNomSSv4noIso() { return fake_rate_baby.numNomSSv4noIso(); }
	bool &fo_mussV4_04() { return fake_rate_baby.fo_mussV4_04(); }
	bool &fo_mussV4_noIso() { return fake_rate_baby.fo_mussV4_noIso(); }
	bool &num_el_smurfV6() { return fake_rate_baby.num_el_smurfV6(); }
	bool &num_el_smurfV6lh() { return fake_rate_baby.num_el_smurfV6lh(); }
	bool &v1_el_smurfV1() { return fake_rate_baby.v1_el_smurfV1(); }
	bool &v2_el_smurfV1() { return fake_rate_baby.v2_el_smurfV1(); }
	bool &v3_el_smurfV1() { return fake_rate_baby.v3_el_smurfV1(); }
	bool &v4_el_smurfV1() { return fake_rate_baby.v4_el_smurfV1(); }
	bool &num_mu_smurfV6() { return fake_rate_baby.num_mu_smurfV6(); }
	bool &fo_mu_smurf_04() { return fake_rate_baby.fo_mu_smurf_04(); }
	bool &fo_mu_smurf_10() { return fake_rate_baby.fo_mu_smurf_10(); }
	bool &num_el_OSV2() { return fake_rate_baby.num_el_OSV2(); }
	bool &num_mu_OSGV2() { return fake_rate_baby.num_mu_OSGV2(); }
	bool &num_mu_OSZV2() { return fake_rate_baby.num_mu_OSZV2(); }
	bool &fo_el_OSV2() { return fake_rate_baby.fo_el_OSV2(); }
	bool &fo_mu_OSGV2() { return fake_rate_baby.fo_mu_OSGV2(); }
	bool &num_el_OSV3() { return fake_rate_baby.num_el_OSV3(); }
	bool &num_mu_OSGV3() { return fake_rate_baby.num_mu_OSGV3(); }
	bool &fo_el_OSV3() { return fake_rate_baby.fo_el_OSV3(); }
	bool &fo_mu_OSGV3() { return fake_rate_baby.fo_mu_OSGV3(); }
	int &ele8_vstar() { return fake_rate_baby.ele8_vstar(); }
	int &ele8_CaloIdL_TrkIdVL_vstar() { return fake_rate_baby.ele8_CaloIdL_TrkIdVL_vstar(); }
	int &ele8_CaloIdL_CaloIsoVL_Jet40_vstar() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_Jet40_vstar(); }
	int &ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	int &ele8_CaloIdT_TrkIdVL_vstar() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_vstar(); }
	int &ele8_CaloIdT_TrkIdVL_Jet30_vstar() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_Jet30_vstar(); }
	int &ele17_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.ele17_CaloIdL_CaloIsoVL_vstar(); }
	int &ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	int &ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	int &photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar() { return fake_rate_baby.ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar(); }
	int &ele27_WP80_vstar() { return fake_rate_baby.ele27_WP80_vstar(); }
	int &ele8_version() { return fake_rate_baby.ele8_version(); }
	int &ele8_CaloIdL_TrkIdVL_version() { return fake_rate_baby.ele8_CaloIdL_TrkIdVL_version(); }
	int &ele8_CaloIdL_CaloIsoVL_Jet40_version() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_Jet40_version(); }
	int &ele8_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_version(); }
	int &ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_version() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_version(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_version() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_version(); }
	int &ele8_CaloIdT_TrkIdVL_version() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_version(); }
	int &ele8_CaloIdT_TrkIdVL_Jet30_version() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_Jet30_version(); }
	int &ele17_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.ele17_CaloIdL_CaloIsoVL_version(); }
	int &ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version() { return fake_rate_baby.ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version(); }
	int &ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_version() { return fake_rate_baby.ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_version(); }
	int &photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_version(); }
	int &ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_version() { return fake_rate_baby.ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_version(); }
	int &ele27_WP80_version() { return fake_rate_baby.ele27_WP80_version(); }
	float &dr_ele8_vstar() { return fake_rate_baby.dr_ele8_vstar(); }
	float &dr_ele8_CaloIdL_TrkIdVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_TrkIdVL_vstar(); }
	float &dr_ele8_CaloIdL_CaloIsoVL_Jet40_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_CaloIsoVL_Jet40_vstar(); }
	float &dr_ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_CaloIsoVL_vstar(); }
	float &dr_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar(); }
	float &dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	float &dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	float &dr_ele8_CaloIdT_TrkIdVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_TrkIdVL_vstar(); }
	float &dr_ele8_CaloIdT_TrkIdVL_Jet30_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_TrkIdVL_Jet30_vstar(); }
	float &dr_ele17_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_ele17_CaloIdL_CaloIsoVL_vstar(); }
	float &dr_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.dr_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	float &dr_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.dr_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	float &dr_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar(); }
	float &dr_ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar() { return fake_rate_baby.dr_ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar(); }
	float &dr_ele27_WP80_vstar() { return fake_rate_baby.dr_ele27_WP80_vstar(); }
	int &hltps_ele8_vstar() { return fake_rate_baby.hltps_ele8_vstar(); }
	int &hltps_ele8_CaloIdL_TrkIdVL_vstar() { return fake_rate_baby.hltps_ele8_CaloIdL_TrkIdVL_vstar(); }
	int &hltps_ele8_CaloIdL_CaloIsoVL_Jet40_vstar() { return fake_rate_baby.hltps_ele8_CaloIdL_CaloIsoVL_Jet40_vstar(); }
	int &hltps_ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.hltps_ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &hltps_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar() { return fake_rate_baby.hltps_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar(); }
	int &hltps_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.hltps_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	int &hltps_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.hltps_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	int &hltps_ele8_CaloIdT_TrkIdVL_vstar() { return fake_rate_baby.hltps_ele8_CaloIdT_TrkIdVL_vstar(); }
	int &hltps_ele8_CaloIdT_TrkIdVL_Jet30_vstar() { return fake_rate_baby.hltps_ele8_CaloIdT_TrkIdVL_Jet30_vstar(); }
	int &hltps_ele17_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.hltps_ele17_CaloIdL_CaloIsoVL_vstar(); }
	int &hltps_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.hltps_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	int &hltps_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar() { return fake_rate_baby.hltps_ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Jet30_vstar(); }
	int &hltps_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.hltps_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &hltps_ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar() { return fake_rate_baby.hltps_ele25_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_CentralPFJet30_vstar(); }
	int &hltps_ele27_WP80_vstar() { return fake_rate_baby.hltps_ele27_WP80_vstar(); }
	int &mu3_vstar() { return fake_rate_baby.mu3_vstar(); }
	int &mu5_vstar() { return fake_rate_baby.mu5_vstar(); }
	int &mu8_vstar() { return fake_rate_baby.mu8_vstar(); }
	int &mu12_vstar() { return fake_rate_baby.mu12_vstar(); }
	int &mu15_vstar() { return fake_rate_baby.mu15_vstar(); }
	int &mu17_vstar() { return fake_rate_baby.mu17_vstar(); }
	int &mu20_vstar() { return fake_rate_baby.mu20_vstar(); }
	int &mu24_vstar() { return fake_rate_baby.mu24_vstar(); }
	int &mu30_vstar() { return fake_rate_baby.mu30_vstar(); }
	int &mu15_eta2p1_vstar() { return fake_rate_baby.mu15_eta2p1_vstar(); }
	int &mu24_eta2p1_vstar() { return fake_rate_baby.mu24_eta2p1_vstar(); }
	int &mu30_eta2p1_vstar() { return fake_rate_baby.mu30_eta2p1_vstar(); }
	int &mu8_Jet40_vstar() { return fake_rate_baby.mu8_Jet40_vstar(); }
	int &isoMu20_eta2p1_vstar() { return fake_rate_baby.isoMu20_eta2p1_vstar(); }
	int &isoMu24_eta2p1_vstar() { return fake_rate_baby.isoMu24_eta2p1_vstar(); }
	int &isoMu30_eta2p1_vstar() { return fake_rate_baby.isoMu30_eta2p1_vstar(); }
	int &relIso1p0Mu17_vstar() { return fake_rate_baby.relIso1p0Mu17_vstar(); }
	int &relIso1p0Mu20_vstar() { return fake_rate_baby.relIso1p0Mu20_vstar(); }
	int &relIso1p0Mu5_vstar() { return fake_rate_baby.relIso1p0Mu5_vstar(); }
	int &mu3_version() { return fake_rate_baby.mu3_version(); }
	int &mu5_version() { return fake_rate_baby.mu5_version(); }
	int &mu8_version() { return fake_rate_baby.mu8_version(); }
	int &mu12_version() { return fake_rate_baby.mu12_version(); }
	int &mu15_version() { return fake_rate_baby.mu15_version(); }
	int &mu17_version() { return fake_rate_baby.mu17_version(); }
	int &mu20_version() { return fake_rate_baby.mu20_version(); }
	int &mu24_version() { return fake_rate_baby.mu24_version(); }
	int &mu30_version() { return fake_rate_baby.mu30_version(); }
	int &mu15_eta2p1_version() { return fake_rate_baby.mu15_eta2p1_version(); }
	int &mu24_eta2p1_version() { return fake_rate_baby.mu24_eta2p1_version(); }
	int &mu30_eta2p1_version() { return fake_rate_baby.mu30_eta2p1_version(); }
	int &mu8_Jet40_version() { return fake_rate_baby.mu8_Jet40_version(); }
	int &isoMu20_eta2p1_version() { return fake_rate_baby.isoMu20_eta2p1_version(); }
	int &isoMu24_eta2p1_version() { return fake_rate_baby.isoMu24_eta2p1_version(); }
	int &isoMu30_eta2p1_version() { return fake_rate_baby.isoMu30_eta2p1_version(); }
	int &relIso1p0Mu17_version() { return fake_rate_baby.relIso1p0Mu17_version(); }
	int &relIso1p0Mu20_version() { return fake_rate_baby.relIso1p0Mu20_version(); }
	int &relIso1p0Mu5_version() { return fake_rate_baby.relIso1p0Mu5_version(); }
	float &dr_mu3_vstar() { return fake_rate_baby.dr_mu3_vstar(); }
	float &dr_mu5_vstar() { return fake_rate_baby.dr_mu5_vstar(); }
	float &dr_mu8_vstar() { return fake_rate_baby.dr_mu8_vstar(); }
	float &dr_mu12_vstar() { return fake_rate_baby.dr_mu12_vstar(); }
	float &dr_mu15_vstar() { return fake_rate_baby.dr_mu15_vstar(); }
	float &dr_mu17_vstar() { return fake_rate_baby.dr_mu17_vstar(); }
	float &dr_mu20_vstar() { return fake_rate_baby.dr_mu20_vstar(); }
	float &dr_mu24_vstar() { return fake_rate_baby.dr_mu24_vstar(); }
	float &dr_mu30_vstar() { return fake_rate_baby.dr_mu30_vstar(); }
	float &dr_mu15_eta2p1_vstar() { return fake_rate_baby.dr_mu15_eta2p1_vstar(); }
	float &dr_mu24_eta2p1_vstar() { return fake_rate_baby.dr_mu24_eta2p1_vstar(); }
	float &dr_mu30_eta2p1_vstar() { return fake_rate_baby.dr_mu30_eta2p1_vstar(); }
	float &dr_mu8_Jet40_vstar() { return fake_rate_baby.dr_mu8_Jet40_vstar(); }
	float &dr_isoMu20_eta2p1_vstar() { return fake_rate_baby.dr_isoMu20_eta2p1_vstar(); }
	float &dr_isoMu24_eta2p1_vstar() { return fake_rate_baby.dr_isoMu24_eta2p1_vstar(); }
	float &dr_isoMu30_eta2p1_vstar() { return fake_rate_baby.dr_isoMu30_eta2p1_vstar(); }
	float &dr_relIso1p0Mu17_vstar() { return fake_rate_baby.dr_relIso1p0Mu17_vstar(); }
	float &dr_relIso1p0Mu20_vstar() { return fake_rate_baby.dr_relIso1p0Mu20_vstar(); }
	float &dr_relIso1p0Mu5_vstar() { return fake_rate_baby.dr_relIso1p0Mu5_vstar(); }
	int &hltps_mu3_vstar() { return fake_rate_baby.hltps_mu3_vstar(); }
	int &hltps_mu5_vstar() { return fake_rate_baby.hltps_mu5_vstar(); }
	int &hltps_mu8_vstar() { return fake_rate_baby.hltps_mu8_vstar(); }
	int &hltps_mu12_vstar() { return fake_rate_baby.hltps_mu12_vstar(); }
	int &hltps_mu15_vstar() { return fake_rate_baby.hltps_mu15_vstar(); }
	int &hltps_mu17_vstar() { return fake_rate_baby.hltps_mu17_vstar(); }
	int &hltps_mu20_vstar() { return fake_rate_baby.hltps_mu20_vstar(); }
	int &hltps_mu24_vstar() { return fake_rate_baby.hltps_mu24_vstar(); }
	int &hltps_mu30_vstar() { return fake_rate_baby.hltps_mu30_vstar(); }
	int &hltps_mu15_eta2p1_vstar() { return fake_rate_baby.hltps_mu15_eta2p1_vstar(); }
	int &hltps_mu24_eta2p1_vstar() { return fake_rate_baby.hltps_mu24_eta2p1_vstar(); }
	int &hltps_mu30_eta2p1_vstar() { return fake_rate_baby.hltps_mu30_eta2p1_vstar(); }
	int &hltps_mu8_Jet40_vstar() { return fake_rate_baby.hltps_mu8_Jet40_vstar(); }
	int &hltps_isoMu20_eta2p1_vstar() { return fake_rate_baby.hltps_isoMu20_eta2p1_vstar(); }
	int &hltps_isoMu24_eta2p1_vstar() { return fake_rate_baby.hltps_isoMu24_eta2p1_vstar(); }
	int &hltps_isoMu30_eta2p1_vstar() { return fake_rate_baby.hltps_isoMu30_eta2p1_vstar(); }
	int &hltps_relIso1p0Mu17_vstar() { return fake_rate_baby.hltps_relIso1p0Mu17_vstar(); }
	int &hltps_relIso1p0Mu20_vstar() { return fake_rate_baby.hltps_relIso1p0Mu20_vstar(); }
	int &hltps_relIso1p0Mu5_vstar() { return fake_rate_baby.hltps_relIso1p0Mu5_vstar(); }
	float &ptpfj1() { return fake_rate_baby.ptpfj1(); }
	int &npfj1() { return fake_rate_baby.npfj1(); }
	float &ptpfj1_b2b() { return fake_rate_baby.ptpfj1_b2b(); }
	float &dphipfj1_b2b() { return fake_rate_baby.dphipfj1_b2b(); }
	float &ptpfcj1() { return fake_rate_baby.ptpfcj1(); }
	int &npfcj1() { return fake_rate_baby.npfcj1(); }
	float &ptpfcj1_b2b() { return fake_rate_baby.ptpfcj1_b2b(); }
	float &dphipfcj1_b2b() { return fake_rate_baby.dphipfcj1_b2b(); }
	bool &btagpfc() { return fake_rate_baby.btagpfc(); }
	float &emfpfcL1Fj1() { return fake_rate_baby.emfpfcL1Fj1(); }
	float &ptpfcL1Fj1() { return fake_rate_baby.ptpfcL1Fj1(); }
	float &dphipfcL1Fj1() { return fake_rate_baby.dphipfcL1Fj1(); }
	int &npfcL1Fj1() { return fake_rate_baby.npfcL1Fj1(); }
	int &npfc30L1Fj1() { return fake_rate_baby.npfc30L1Fj1(); }
	int &npfc40L1Fj1() { return fake_rate_baby.npfc40L1Fj1(); }
	float &ptpfcL1Fj1_b2b() { return fake_rate_baby.ptpfcL1Fj1_b2b(); }
	float &dphipfcL1Fj1_b2b() { return fake_rate_baby.dphipfcL1Fj1_b2b(); }
	bool &btagpfcL1F() { return fake_rate_baby.btagpfcL1F(); }
	int &npfc50L1Fj1_eth() { return fake_rate_baby.npfc50L1Fj1_eth(); }
	float &emfpfcL1Fj1res() { return fake_rate_baby.emfpfcL1Fj1res(); }
	float &ptpfcL1Fj1res() { return fake_rate_baby.ptpfcL1Fj1res(); }
	float &dphipfcL1Fj1res() { return fake_rate_baby.dphipfcL1Fj1res(); }
	int &npfcL1Fj1res() { return fake_rate_baby.npfcL1Fj1res(); }
	int &npfc30L1Fj1res() { return fake_rate_baby.npfc30L1Fj1res(); }
	int &npfc40L1Fj1res() { return fake_rate_baby.npfc40L1Fj1res(); }
	float &ptpfcL1Fj1res_b2b() { return fake_rate_baby.ptpfcL1Fj1res_b2b(); }
	float &dphipfcL1Fj1res_b2b() { return fake_rate_baby.dphipfcL1Fj1res_b2b(); }
	bool &btagpfcL1Fres() { return fake_rate_baby.btagpfcL1Fres(); }
	int &npfc50L1Fj1res_eth() { return fake_rate_baby.npfc50L1Fj1res_eth(); }
	float &ptbtagpfcL1Fj1() { return fake_rate_baby.ptbtagpfcL1Fj1(); }
	float &dphibtagpfcL1Fj1() { return fake_rate_baby.dphibtagpfcL1Fj1(); }
	float &ptbtagpfcL1Fj1res() { return fake_rate_baby.ptbtagpfcL1Fj1res(); }
	float &dphibtagpfcL1Fj1res() { return fake_rate_baby.dphibtagpfcL1Fj1res(); }
	int &nbpfcjet() { return fake_rate_baby.nbpfcjet(); }
	float &dRpfcNear() { return fake_rate_baby.dRpfcNear(); }
	float &dRpfcFar() { return fake_rate_baby.dRpfcFar(); }
	float &rho() { return fake_rate_baby.rho(); }
}
