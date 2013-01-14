#!/bin/bash

verbose=0
njets=2
version=v1

# make the output dirs
mkdir -p logs

# do the merging
function merge
{
    mkdir -p $output_path
    mkdir -p logs/${version} 
    local name=$1
    local path=$2
    cmd="ss2012_merge_babies --verbose $verbose --input \"${input_path}/${path}/*.root\"  --output \"${output_path}/${name}.root\" --njets $njets"
    echo $cmd
    echo $cmd > logs/${version}/${name}_baby_merge.log 2>&1 &
    eval $cmd >> logs/${version}/${name}_baby_merge.log 2>&1 &
}

function merge2
{
    mkdir -p $output_path
    mkdir -p logs/${version} 
    local name=$1
    local input=$2
    cmd="ss2012_merge_babies --verbose $verbose --input \"$input\" --output \"${output_path}/${name}.root\" --njets $njets"
    echo $cmd
    echo $cmd > logs/${version}/${name}_baby_merge.log 2>&1 &
    eval $cmd >> logs/${version}/${name}_baby_merge.log 2>&1 &
    #eval $cmd
}

#input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/52X/v5
#output_path=/nfs-7/userdata/rwkelley/babies/ss2012/53X/v3
#output_path=babies/52X
#output_path=babies_njets2_v4
#merge wwg_fast    8TeV_WWGJets_FastSim_525_Summer12-v3_StoreResults-InTimePU_START52_V9-v3
#merge www_fast    8TeV_WWWJets_FastSim_525_Summer12-v3_StoreResults-InTimePU_START52_V9-v3
#merge wwz_fast    8TeV_WWZNoGstarJets_FastSim_525_Summer12-v3_StoreResults-InTimePU_START52_V9-v3
#merge wzz_fast    8TeV_WZZNoGstarJets_FastSim_525_Summer12-v3_StoreResults-InTimePU_START52_V9-v3
#merge zzz_fast    8TeV_ZZZNoGstarJets_FastSim_525_Summer12-v3_StoreResults-InTimePU_START52_V9-v3
#merge t1tttt_fastsim SMS-T1tttt_Mgluino-350to1200_mLSP-0to850_8TeV-Pythia6Z_StoreResults-PU_START52_V9_FastSim-v1
#merge sbottomtop SbottomTopv6_macneill_8TeV 
#merge glusbottom GluinoSbottom_cgeorge_8Tev 
#merge glustop    GluinoStop_cgeorge_8Tev 
#merge t1tttt      SMS-T1ttttProtoScan_Mgluino-350to1200_mLSP-0to400_8TeV-Pythia6Z_StoreResults-PU_START52_V5_FullSim-v1
#merge ttw         TTWJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge ttg         TTGJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge ttw         TTWJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge ttww        TTWWJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge ttz         TTZJets_8TeV-madgraph_v2_Summer12-PU_S7_START52_V9-v1
#merge www         WWWJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge wwz         WZZNoGstarJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge zzz         ZZZNoGstarJets_8TeV-madgraph_Summer12-PU_S7_START52_V9-v1
#merge wz          WZTo3LNu_TuneZ2star_8TeV_pythia6_tauola_Summer12-PU_S7_START52_V9-v1
#merge zz          ZZJetsTo4L_TuneZ2star_8TeV-madgraph-tauola_Summer12-PU_S7_START52_V9-v3

#input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/53X/v10_lowpt
#output_path=babies_backup/babies_njets${njets}_v10_lowpt
#merge dy       DYJetsToLL_M-50_TuneZ2Star_8TeV-madgraph-tarball_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wjets    WJetsToLNu_TuneZ2Star_8TeV-madgraph-tarball_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wz       WZJetsTo3LNu_TuneZ2_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge zz       ZZJetsTo4L_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ww       WWJetsTo2L2Nu_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttg      TTGJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttjets   TTJets_MassiveBinDECAY_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttw      TTWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttww     TTWWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttz      TTZJets_8TeV-madgraph_v2_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wwg      WWGJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge www      WWWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wwz      WWZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wzz      WZZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge zzz      ZZZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge lm6      SUSY_LM6_sftsht_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge lm9      SUSY_LM9_sftsht_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wmwmqq   WmWmqq_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wpwpqq   WpWpqq_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ww_ds    WW_DoubleScattering_8TeV-pythia8_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wgstar2e WGstarToLNu2E_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wgstar2m WGstarToLNu2Mu_TuneZ2star_7TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge wgstar2t WGstarToLNu2Tau_TuneZ2star_7TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge2 t_schan  "${input_path}/Tbar_s-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_s-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"
#merge2 t_tchan  "${input_path}/Tbar_t-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_t-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"
#merge2 t_tw     "${input_path}/Tbar_tW-channel-DR_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_tW-channel-DR_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"

#input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/53X/v11_highpt_1
#output_path=babies/hpt_njets${njets}_${version}
version=v2_pt10_10
input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/53X/v12_lowpt
output_path=babies/lpt_njets${njets}_${version}
merge dy       DYJetsToLL_M-50_TuneZ2Star_8TeV-madgraph-tarball_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wjets    WJetsToLNu_TuneZ2Star_8TeV-madgraph-tarball_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wz       WZJetsTo3LNu_TuneZ2_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge zz       ZZJetsTo4L_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ww       WWJetsTo2L2Nu_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ttg      TTGJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ttjets   TTJets_MassiveBinDECAY_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ttw      TTWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ttww     TTWWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ttz      TTZJets_8TeV-madgraph_v2_Summer12_DR53X-PU_S10_START53_V7A-v1
merge tbz      TBZToLL_4F_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7C-v1_Summer12_DR53X-PU_S10_START53_V7C-v1
merge wwg      WWGJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge www      WWWJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wwz      WWZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wzz      WZZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge zzz      ZZZNoGstarJets_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge lm6      SUSY_LM6_sftsht_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1
merge lm9      SUSY_LM9_sftsht_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wmwmqq   WmWmqq_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wpwpqq   WpWpqq_8TeV-madgraph_Summer12_DR53X-PU_S10_START53_V7A-v1
merge ww_ds    WW_DoubleScattering_8TeV-pythia8_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wgstar2e WGstarToLNu2E_TuneZ2star_8TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wgstar2m WGstarToLNu2Mu_TuneZ2star_7TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
merge wgstar2t WGstarToLNu2Tau_TuneZ2star_7TeV-madgraph-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1
#merge ttjets_powheg TT_CT10_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v2 
merge2 t_schan  "${input_path}/Tbar_s-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_s-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"
merge2 t_tchan  "${input_path}/Tbar_t-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_t-channel_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"
merge2 t_tw     "${input_path}/Tbar_tW-channel-DR_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root,${input_path}/T_tW-channel-DR_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v1/*.root"

#input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/53X/v10_lowpt
#output_path=babies/lpt/${njets}
#merge ttjets_powheg TT_CT10_TuneZ2star_8TeV-powheg-tauola_Summer12_DR53X-PU_S10_START53_V7A-v2 
 

#merge sbottomtop SbottomTop_msb450-510_mch140-320_mlsp50_8TeV_FS_v1_fgolf-SbottomTop_msb450-510_mch140-320_mlsp50_8TeV_FS_v1
