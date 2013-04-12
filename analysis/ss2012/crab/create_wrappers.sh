#!/bin/bash

default_args="--anal_type vlow_pt --fr ssFR_data_ewkcor_26Feb2013.root --fl ssFL_data_standard_02222013.root --sparms 1 --isFastSim 1 --njets 0 --apply_jet_unc START52_V9"

# T1tttt
./BatchProcessViaCrab.sh \
 "SMS-T1tttt_Mgluino-350to1200_mLSP-0to850_8TeV-Pythia6Z_StoreResults-PU_START52_V9_FastSim-v1_cfg.py" \
 "/SMS-T1tttt_Mgluino-350to1200_mLSP-0to850_8TeV-Pythia6Z/StoreResults-PU_START52_V9_FastSim-v1/USER" \
 "SMS-T1tttt_Mgluino-350to1200_mLSP-0to850_8TeV-Pythia6Z_StoreResults-PU_START52_V9_FastSim-v1" \
 "http://cmsdbsprod.cern.ch/cms_dbs_prod_global/servlet/DBSServlet" \
 "ss2012_baby.root" \
 "--sample t1tttt $default_args"

# T1tttt (scans) --> trying to use multicrab
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-400to750_mLSP-1_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v1/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-800to1400_mLSP-1_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v2/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-400to750_mLSP-25to550_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v1/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-775to1075_mLSP-25to500_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v1/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-775to1075_mLSP-525to875_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v2/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-1100to1400_mLSP-25to500_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v2/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-1100to1400_mLSP-525to1000_25GeVX25GeV_Binning/Summer12-START52_V9_FSIM-v2/AODSIM
# /SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-1100to1400_mLSP-1025to1200_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v1/AODSIM
./BatchProcessViaCrab.sh \
 "SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-XXX_Binning_Summer12-START52_V9_FSIM-v1_cfg.py" \
 "/SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-400to750_mLSP-1_50GeVX50GeV_Binning/Summer12-START52_V9_FSIM-v1/AODSIM" \
 "SMS-MadGraph_Pythia6Zstar_8TeV_T1tttt_2J_mGo-XXX_Binning_Summer12-START52_V9_FSIM-v1" \
 "http://cmsdbsprod.cern.ch/cms_dbs_prod_global/servlet/DBSServlet" \
 "ss2012_baby.root" \
 "--sample t1tttt_scans $default_args"

# T4tW (or T6ttWW)
./BatchProcessViaCrab.sh \
 "SMS-T4tW_Msbottom-325to700_mChargino-150to625_8TeV-Madgraph_Summer12-START52_V9_FSIM_cfg.py" \
 "/SMS-T4tW_Msbottom-325to700_mChargino-150to625_8TeV-Madgraph/Summer12-START52_V9_FSIM/USER" \
 "SMS-T4tW_Msbottom-325to700_mChargino-150to625_8TeV-Madgraph_Summer12-START52_V9_FSIM" \
 "http://cmsdbsprod.cern.ch/cms_dbs_ph_analysis_01/servlet/DBSServlet" \
 "ss2012_baby.root" \
 "--sample sbottomtop $default_args"

# TChiwh
./BatchProcessViaCrab.sh \
 "TChiwh-test_cfg.py" \
 "/TChiwh-test/fgolf-TChiwh-test-6138c231f814ac3df24f1150dfcad736/USER" \
 "TChiwh-test" \
 "http://cmsdbsprod.cern.ch/cms_dbs_ph_analysis_02/servlet/DBSServlet" \
 "ss2012_baby.root" \
 "--sample tchiwh $default_args"
