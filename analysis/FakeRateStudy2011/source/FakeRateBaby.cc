#include "FakeRateBaby.h"
FakeRateBaby fake_rate_baby;
namespace frb {
	int &run() { return fake_rate_baby.run(); }
	int &ls() { return fake_rate_baby.ls(); }
	unsigned int &evt() { return fake_rate_baby.evt(); }
	float &weight() { return fake_rate_baby.weight(); }
	int &pu_nPUvertices() { return fake_rate_baby.pu_nPUvertices(); }
	int &evt_nvtxs() { return fake_rate_baby.evt_nvtxs(); }
	int &evt_ndavtxs() { return fake_rate_baby.evt_ndavtxs(); }
	int &nFOels() { return fake_rate_baby.nFOels(); }
	int &nFOmus() { return fake_rate_baby.nFOmus(); }
	int &ngsfs() { return fake_rate_baby.ngsfs(); }
	int &nmus() { return fake_rate_baby.nmus(); }
	int &foel_id() { return fake_rate_baby.foel_id(); }
	int &fomu_id() { return fake_rate_baby.fomu_id(); }
	float &foel_mass() { return fake_rate_baby.foel_mass(); }
	float &fomu_mass() { return fake_rate_baby.fomu_mass(); }
	float &pt() { return fake_rate_baby.pt(); }
	LorentzVector &lp4() { return fake_rate_baby.lp4(); }
	float &eta() { return fake_rate_baby.eta(); }
	float &sceta() { return fake_rate_baby.sceta(); }
	float &phi() { return fake_rate_baby.phi(); }
	float &scet() { return fake_rate_baby.scet(); }
	float &hoe() { return fake_rate_baby.hoe(); }
	float &tcmet() { return fake_rate_baby.tcmet(); }
	float &tcmetphi() { return fake_rate_baby.tcmetphi(); }
	float &pfmet() { return fake_rate_baby.pfmet(); }
	float &pfmetphi() { return fake_rate_baby.pfmetphi(); }
	float &iso() { return fake_rate_baby.iso(); }
	float &iso_nps() { return fake_rate_baby.iso_nps(); }
	float &nt_iso() { return fake_rate_baby.nt_iso(); }
	float &nt_iso_nps() { return fake_rate_baby.nt_iso_nps(); }
	float &trck_iso() { return fake_rate_baby.trck_iso(); }
	float &trck_nt_iso() { return fake_rate_baby.trck_nt_iso(); }
	float &ecal_iso() { return fake_rate_baby.ecal_iso(); }
	float &ecal_iso_nps() { return fake_rate_baby.ecal_iso_nps(); }
	float &ecal_nt_iso() { return fake_rate_baby.ecal_nt_iso(); }
	float &ecal_nt_iso_nps() { return fake_rate_baby.ecal_nt_iso_nps(); }
	float &hcal_iso() { return fake_rate_baby.hcal_iso(); }
	float &hcal_nt_iso() { return fake_rate_baby.hcal_nt_iso(); }
	float &nt_pfiso03() { return fake_rate_baby.nt_pfiso03(); }
	float &nt_pfiso04() { return fake_rate_baby.nt_pfiso04(); }
	int &id() { return fake_rate_baby.id(); }
	bool &closestMuon() { return fake_rate_baby.closestMuon(); }
	bool &el_id_smurfV5() { return fake_rate_baby.el_id_smurfV5(); }
	bool &el_id_vbtf80() { return fake_rate_baby.el_id_vbtf80(); }
	bool &el_id_vbtf90() { return fake_rate_baby.el_id_vbtf90(); }
	bool &conv0MissHits() { return fake_rate_baby.conv0MissHits(); }
	bool &convHitPattern() { return fake_rate_baby.convHitPattern(); }
	bool &convPartnerTrack() { return fake_rate_baby.convPartnerTrack(); }
	bool &convMIT() { return fake_rate_baby.convMIT(); }
	float &mt() { return fake_rate_baby.mt(); }
	float &pfmt() { return fake_rate_baby.pfmt(); }
	bool &q3() { return fake_rate_baby.q3(); }
	int &els_exp_innerlayers() { return fake_rate_baby.els_exp_innerlayers(); }
	int &mcid() { return fake_rate_baby.mcid(); }
	int &mcmotherid() { return fake_rate_baby.mcmotherid(); }
	float &d0PV_wwV1() { return fake_rate_baby.d0PV_wwV1(); }
	float &dzPV_wwV1() { return fake_rate_baby.dzPV_wwV1(); }
	float &ht_calo() { return fake_rate_baby.ht_calo(); }
	float &ht_calo_L2L3() { return fake_rate_baby.ht_calo_L2L3(); }
	float &ht_jpt_L2L3() { return fake_rate_baby.ht_jpt_L2L3(); }
	float &ht_pf() { return fake_rate_baby.ht_pf(); }
	float &ht_pf_L2L3() { return fake_rate_baby.ht_pf_L2L3(); }
	float &ht_pf_L1FastL2L3() { return fake_rate_baby.ht_pf_L1FastL2L3(); }
	int &mc3id() { return fake_rate_baby.mc3id(); }
	float &mc3pt() { return fake_rate_baby.mc3pt(); }
	float &mc3dr() { return fake_rate_baby.mc3dr(); }
	int &leptonIsFromW() { return fake_rate_baby.leptonIsFromW(); }
	float &el_lh() { return fake_rate_baby.el_lh(); }
	float &el_mva() { return fake_rate_baby.el_mva(); }
	bool &mu_isCosmic() { return fake_rate_baby.mu_isCosmic(); }
	float &mz_fo_gsf() { return fake_rate_baby.mz_fo_gsf(); }
	float &mz_gsf_iso() { return fake_rate_baby.mz_gsf_iso(); }
	float &mz_fo_ctf() { return fake_rate_baby.mz_fo_ctf(); }
	float &mz_ctf_iso() { return fake_rate_baby.mz_ctf_iso(); }
	float &mupsilon_fo_mu() { return fake_rate_baby.mupsilon_fo_mu(); }
	float &mupsilon_mu_iso() { return fake_rate_baby.mupsilon_mu_iso(); }
	bool &num_el_ssV3() { return fake_rate_baby.num_el_ssV3(); }
	bool &v1_el_ssV3() { return fake_rate_baby.v1_el_ssV3(); }
	bool &v2_el_ssV3() { return fake_rate_baby.v2_el_ssV3(); }
	bool &v3_el_ssV3() { return fake_rate_baby.v3_el_ssV3(); }
	bool &num_el_ssV4() { return fake_rate_baby.num_el_ssV4(); }
	bool &v1_el_ssV4() { return fake_rate_baby.v1_el_ssV4(); }
	bool &v2_el_ssV4() { return fake_rate_baby.v2_el_ssV4(); }
	bool &v3_el_ssV4() { return fake_rate_baby.v3_el_ssV4(); }
	bool &num_el_ssV5() { return fake_rate_baby.num_el_ssV5(); }
	bool &v1_el_ssV5() { return fake_rate_baby.v1_el_ssV5(); }
	bool &v2_el_ssV5() { return fake_rate_baby.v2_el_ssV5(); }
	bool &v3_el_ssV5() { return fake_rate_baby.v3_el_ssV5(); }
	bool &num_el_ssV5_noIso() { return fake_rate_baby.num_el_ssV5_noIso(); }
	bool &num_el_ssV6() { return fake_rate_baby.num_el_ssV6(); }
	bool &v1_el_ssV6() { return fake_rate_baby.v1_el_ssV6(); }
	bool &v2_el_ssV6() { return fake_rate_baby.v2_el_ssV6(); }
	bool &v3_el_ssV6() { return fake_rate_baby.v3_el_ssV6(); }
	bool &num_el_ssV6_noIso() { return fake_rate_baby.num_el_ssV6_noIso(); }
	bool &numNomSSv3() { return fake_rate_baby.numNomSSv3(); }
	bool &fo_mussV3_04() { return fake_rate_baby.fo_mussV3_04(); }
	bool &numNomSSv4() { return fake_rate_baby.numNomSSv4(); }
	bool &fo_mussV4_04() { return fake_rate_baby.fo_mussV4_04(); }
	bool &numNomSSv4noIso() { return fake_rate_baby.numNomSSv4noIso(); }
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
	bool &numOct6() { return fake_rate_baby.numOct6(); }
	bool &v1Oct6() { return fake_rate_baby.v1Oct6(); }
	bool &v2Oct6() { return fake_rate_baby.v2Oct6(); }
	bool &v3Oct6() { return fake_rate_baby.v3Oct6(); }
	bool &num() { return fake_rate_baby.num(); }
	bool &fo_04() { return fake_rate_baby.fo_04(); }
	bool &fo_10() { return fake_rate_baby.fo_10(); }
	bool &v1SSV2() { return fake_rate_baby.v1SSV2(); }
	bool &v2SSV2() { return fake_rate_baby.v2SSV2(); }
	bool &v3SSV2() { return fake_rate_baby.v3SSV2(); }
	bool &numSSV2() { return fake_rate_baby.numSSV2(); }
	bool &numNomSSv2() { return fake_rate_baby.numNomSSv2(); }
	bool &fo_mussV2_04() { return fake_rate_baby.fo_mussV2_04(); }
	bool &fo_mussV2_10() { return fake_rate_baby.fo_mussV2_10(); }
	bool &num_OSGv1() { return fake_rate_baby.num_OSGv1(); }
	bool &num_OSZv1() { return fake_rate_baby.num_OSZv1(); }
	bool &numOSOct18() { return fake_rate_baby.numOSOct18(); }
	bool &v1OSOct18() { return fake_rate_baby.v1OSOct18(); }
	bool &v2OSOct18() { return fake_rate_baby.v2OSOct18(); }
	bool &v3OSOct18() { return fake_rate_baby.v3OSOct18(); }
	bool &num_wwV1() { return fake_rate_baby.num_wwV1(); }
	bool &v1_wwV1() { return fake_rate_baby.v1_wwV1(); }
	bool &v2_wwV1() { return fake_rate_baby.v2_wwV1(); }
	bool &v3_wwV1() { return fake_rate_baby.v3_wwV1(); }
	bool &v4_wwV1() { return fake_rate_baby.v4_wwV1(); }
	bool &fo_wwV1_04() { return fake_rate_baby.fo_wwV1_04(); }
	bool &fo_wwV1_10() { return fake_rate_baby.fo_wwV1_10(); }
	bool &fo_wwV1_10_d0() { return fake_rate_baby.fo_wwV1_10_d0(); }
	int &ele8_vstar() { return fake_rate_baby.ele8_vstar(); }
	int &ele8_CaloIdL_TrkIdVL_vstar() { return fake_rate_baby.ele8_CaloIdL_TrkIdVL_vstar(); }
	int &ele8_CaloIdL_CaloIsoVL_Jet40_vstar() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_Jet40_vstar(); }
	int &ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &ele17_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.ele17_CaloIdL_CaloIsoVL_vstar(); }
	int &ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	int &photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &ele8_version() { return fake_rate_baby.ele8_version(); }
	int &ele8_CaloIdL_TrkIdVL_version() { return fake_rate_baby.ele8_CaloIdL_TrkIdVL_version(); }
	int &ele8_CaloIdL_CaloIsoVL_Jet40_version() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_Jet40_version(); }
	int &ele8_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.ele8_CaloIdL_CaloIsoVL_version(); }
	int &ele17_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.ele17_CaloIdL_CaloIsoVL_version(); }
	int &ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_version() { return fake_rate_baby.ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_version(); }
	int &ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version() { return fake_rate_baby.ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_version(); }
	int &photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_version() { return fake_rate_baby.photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_version(); }
	float &dr_ele8_vstar() { return fake_rate_baby.dr_ele8_vstar(); }
	float &dr_ele8_CaloIdL_TrkIdVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_TrkIdVL_vstar(); }
	float &dr_ele8_CaloIdL_CaloIsoVL_Jet40_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_CaloIsoVL_Jet40_vstar(); }
	float &dr_ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdL_CaloIsoVL_vstar(); }
	float &dr_ele17_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_ele17_CaloIdL_CaloIsoVL_vstar(); }
	float &dr_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_TrkIdVL_CaloIsoVL_TrkIsoVL_vstar(); }
	float &dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar() { return fake_rate_baby.dr_ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_vstar(); }
	float &dr_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar() { return fake_rate_baby.dr_photon20_CaloIdVT_IsoT_Ele8_CaloIdL_CaloIsoVL_vstar(); }
	int &mu3_vstar() { return fake_rate_baby.mu3_vstar(); }
	int &mu5_vstar() { return fake_rate_baby.mu5_vstar(); }
	int &mu8_vstar() { return fake_rate_baby.mu8_vstar(); }
	int &mu12_vstar() { return fake_rate_baby.mu12_vstar(); }
	int &mu15_vstar() { return fake_rate_baby.mu15_vstar(); }
	int &mu20_vstar() { return fake_rate_baby.mu20_vstar(); }
	int &mu24_vstar() { return fake_rate_baby.mu24_vstar(); }
	int &mu30_vstar() { return fake_rate_baby.mu30_vstar(); }
	int &mu8_Jet40_vstar() { return fake_rate_baby.mu8_Jet40_vstar(); }
	int &mu3_version() { return fake_rate_baby.mu3_version(); }
	int &mu5_version() { return fake_rate_baby.mu5_version(); }
	int &mu8_version() { return fake_rate_baby.mu8_version(); }
	int &mu12_version() { return fake_rate_baby.mu12_version(); }
	int &mu15_version() { return fake_rate_baby.mu15_version(); }
	int &mu20_version() { return fake_rate_baby.mu20_version(); }
	int &mu24_version() { return fake_rate_baby.mu24_version(); }
	int &mu30_version() { return fake_rate_baby.mu30_version(); }
	int &mu8_Jet40_version() { return fake_rate_baby.mu8_Jet40_version(); }
	float &dr_mu3_vstar() { return fake_rate_baby.dr_mu3_vstar(); }
	float &dr_mu5_vstar() { return fake_rate_baby.dr_mu5_vstar(); }
	float &dr_mu8_vstar() { return fake_rate_baby.dr_mu8_vstar(); }
	float &dr_mu12_vstar() { return fake_rate_baby.dr_mu12_vstar(); }
	float &dr_mu15_vstar() { return fake_rate_baby.dr_mu15_vstar(); }
	float &dr_mu20_vstar() { return fake_rate_baby.dr_mu20_vstar(); }
	float &dr_mu24_vstar() { return fake_rate_baby.dr_mu24_vstar(); }
	float &dr_mu30_vstar() { return fake_rate_baby.dr_mu30_vstar(); }
	float &dr_mu8_Jet40_vstar() { return fake_rate_baby.dr_mu8_Jet40_vstar(); }
	int &hlt15u() { return fake_rate_baby.hlt15u(); }
	int &hlt30u() { return fake_rate_baby.hlt30u(); }
	int &hlt50u() { return fake_rate_baby.hlt50u(); }
	int &l16u() { return fake_rate_baby.l16u(); }
	int &l110() { return fake_rate_baby.l110(); }
	int &ph10() { return fake_rate_baby.ph10(); }
	int &ph15() { return fake_rate_baby.ph15(); }
	int &ph20() { return fake_rate_baby.ph20(); }
	int &el10_lw() { return fake_rate_baby.el10_lw(); }
	int &el10_sw() { return fake_rate_baby.el10_sw(); }
	int &el10_sw_v2() { return fake_rate_baby.el10_sw_v2(); }
	int &el10_lw_id() { return fake_rate_baby.el10_lw_id(); }
	int &el10_sw_id() { return fake_rate_baby.el10_sw_id(); }
	int &el15_lw() { return fake_rate_baby.el15_lw(); }
	int &el15_sw() { return fake_rate_baby.el15_sw(); }
	int &el15_lw_id() { return fake_rate_baby.el15_lw_id(); }
	int &el15_sw_id() { return fake_rate_baby.el15_sw_id(); }
	int &el15_sw_cid() { return fake_rate_baby.el15_sw_cid(); }
	int &el20_sw() { return fake_rate_baby.el20_sw(); }
	int &el25_sw() { return fake_rate_baby.el25_sw(); }
	int &Del10_sw() { return fake_rate_baby.Del10_sw(); }
	int &el17_sw() { return fake_rate_baby.el17_sw(); }
	int &el17_sw_v2() { return fake_rate_baby.el17_sw_v2(); }
	int &el17_iso() { return fake_rate_baby.el17_iso(); }
	int &el17_loose() { return fake_rate_baby.el17_loose(); }
	int &el17_sw_cid() { return fake_rate_baby.el17_sw_cid(); }
	int &el17_sw_id() { return fake_rate_baby.el17_sw_id(); }
	int &el17_tiso() { return fake_rate_baby.el17_tiso(); }
	int &el17_tiso_v1() { return fake_rate_baby.el17_tiso_v1(); }
	float &drph10() { return fake_rate_baby.drph10(); }
	float &drph15() { return fake_rate_baby.drph15(); }
	float &drph20() { return fake_rate_baby.drph20(); }
	float &drel10_lw() { return fake_rate_baby.drel10_lw(); }
	float &drel10_sw() { return fake_rate_baby.drel10_sw(); }
	float &drel10_sw_v2() { return fake_rate_baby.drel10_sw_v2(); }
	float &drel10_lw_id() { return fake_rate_baby.drel10_lw_id(); }
	float &drel10_sw_id() { return fake_rate_baby.drel10_sw_id(); }
	float &drel15_lw() { return fake_rate_baby.drel15_lw(); }
	float &drel15_sw() { return fake_rate_baby.drel15_sw(); }
	float &drel15_lw_id() { return fake_rate_baby.drel15_lw_id(); }
	float &drel15_sw_id() { return fake_rate_baby.drel15_sw_id(); }
	float &drel15_sw_cid() { return fake_rate_baby.drel15_sw_cid(); }
	float &drel20_sw() { return fake_rate_baby.drel20_sw(); }
	float &drel25_sw() { return fake_rate_baby.drel25_sw(); }
	float &drDel10_sw() { return fake_rate_baby.drDel10_sw(); }
	float &drel17_sw() { return fake_rate_baby.drel17_sw(); }
	float &drel17_sw_v2() { return fake_rate_baby.drel17_sw_v2(); }
	float &drel17_iso() { return fake_rate_baby.drel17_iso(); }
	float &drel17_loose() { return fake_rate_baby.drel17_loose(); }
	float &drel17_sw_cid() { return fake_rate_baby.drel17_sw_cid(); }
	float &drel17_sw_id() { return fake_rate_baby.drel17_sw_id(); }
	float &drel17_tiso() { return fake_rate_baby.drel17_tiso(); }
	float &drel17_tiso_v1() { return fake_rate_baby.drel17_tiso_v1(); }
	int &mu17() { return fake_rate_baby.mu17(); }
	int &mu15() { return fake_rate_baby.mu15(); }
	int &mu13() { return fake_rate_baby.mu13(); }
	int &mu11() { return fake_rate_baby.mu11(); }
	int &mu9() { return fake_rate_baby.mu9(); }
	int &mu7() { return fake_rate_baby.mu7(); }
	int &mu5() { return fake_rate_baby.mu5(); }
	float &drmu17() { return fake_rate_baby.drmu17(); }
	float &drmu15() { return fake_rate_baby.drmu15(); }
	float &drmu13() { return fake_rate_baby.drmu13(); }
	float &drmu11() { return fake_rate_baby.drmu11(); }
	float &drmu9() { return fake_rate_baby.drmu9(); }
	float &drmu7() { return fake_rate_baby.drmu7(); }
	float &drmu5() { return fake_rate_baby.drmu5(); }
	float &ptj1() { return fake_rate_baby.ptj1(); }
	int &nj1() { return fake_rate_baby.nj1(); }
	float &ptj1_b2b() { return fake_rate_baby.ptj1_b2b(); }
	float &dphij1_b2b() { return fake_rate_baby.dphij1_b2b(); }
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
	float &ptbtagpfcL1Fj1() { return fake_rate_baby.ptbtagpfcL1Fj1(); }
	float &dphibtagpfcL1Fj1() { return fake_rate_baby.dphibtagpfcL1Fj1(); }
	float &ptjptcj1() { return fake_rate_baby.ptjptcj1(); }
	int &njptcj1() { return fake_rate_baby.njptcj1(); }
	float &ptjptcj1_b2b() { return fake_rate_baby.ptjptcj1_b2b(); }
	float &dphijptcj1_b2b() { return fake_rate_baby.dphijptcj1_b2b(); }
	bool &btagjptc() { return fake_rate_baby.btagjptc(); }
	int &nbjet() { return fake_rate_baby.nbjet(); }
	float &dRNear() { return fake_rate_baby.dRNear(); }
	float &dRFar() { return fake_rate_baby.dRFar(); }
	int &nbpfcjet() { return fake_rate_baby.nbpfcjet(); }
	float &dRpfcNear() { return fake_rate_baby.dRpfcNear(); }
	float &dRpfcFar() { return fake_rate_baby.dRpfcFar(); }
	float &rho() { return fake_rate_baby.rho(); }
}
