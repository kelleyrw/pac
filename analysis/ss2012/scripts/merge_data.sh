#!/bin/bash

verbose=0
njets=2
version=v1
tag=V02-05-01
path=/nfs-7/userdata/rwkelley/babies/ss2012/$tag

# make the output dirs

# do the merging
function merge
{
    local name=$1
    local input=$2
    cmd="ss2012_merge_babies --verbose $verbose --input "$input" --output \"${output_path}/${name}.root\" --njets $njets --run_list $run_list" 
    echo $cmd
    echo $cmd > logs/${name}_baby_merge.log 2>&1 &
    eval $cmd >> logs/${name}_baby_merge.log 2>&1 &
}

run_list=json/final_19p49fb_cms2.txt # 19.49 

# high_pt 
input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/$tag/hpt
output_path=$path/hpt
input_files="${input_path}/DoubleElectron_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleElectron_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleElectron_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleElectron_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleElectron_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/DoubleElectron_Run2012D-PromptReco-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/MuEG_Run2012D-PromptReco-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012B-13Jul2012-v4_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/DoubleMu_Run2012D-PromptReco-v1_AOD/*.root"
merge data_hpt_19p49 $input_files

# low pt 
input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/$tag/lpt
output_path=$path/lpt
input_files="${input_path}/ElectronHad_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012D-PromptReco-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012D-PromptReco-v1_AOD/*.root"
#merge data_lpt_19p49 $input_files

# very low pt 
input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/$tag/vpt
output_path=$path/vpt
input_files="${input_path}/ElectronHad_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/ElectronHad_Run2012D-PromptReco-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012A-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012A-recover-06Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012B-13Jul2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012C-24Aug2012-v1_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012C-PromptReco-v2_AOD/*.root"
input_files="${input_files},${input_path}/MuHad_Run2012D-PromptReco-v1_AOD/*.root"
#merge data_vpt_19p49 $input_files

## high_pt_eth
#input_path=/hadoop/cms/store/user/rwkelley/babies/ss2012/V01-03-02/eth
#output_path=babies/V01-03-02/eth_njets${njets}_${version}/
##input_files="${input_path}/DoubleElectron_Run2012A-13Jul2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/DoubleElectron_Run2012A-recover-06Aug2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/DoubleElectron_Run2012B-13Jul2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/DoubleElectron_Run2012C-24Aug2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/DoubleElectron_Run2012C-PromptReco-v2_AOD/*.root"
##input_files="${input_files},${input_path}/DoubleElectron_Run2012D-PromptReco-v1_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012A-13Jul2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012A-recover-06Aug2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012B-13Jul2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012C-24Aug2012-v1_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012C-PromptReco-v2_AOD/*.root"
##input_files="${input_files},${input_path}/MuEG_Run2012D-PromptReco-v1_AOD/*.root"
#input_files="${input_path}/DoubleMu_Run2012A-13Jul2012-v1_AOD/*.root"
#input_files="${input_files},${input_path}/DoubleMu_Run2012A-recover-06Aug2012-v1_AOD/*.root"
#input_files="${input_files},${input_path}/DoubleMu_Run2012B-13Jul2012-v4_AOD/*.root"
#input_files="${input_files},${input_path}/DoubleMu_Run2012C-24Aug2012-v1_AOD/*.root"
#input_files="${input_files},${input_path}/DoubleMu_Run2012C-PromptReco-v2_AOD/*.root"
#input_files="${input_files},${input_path}/DoubleMu_Run2012D-PromptReco-v1_AOD/*.root"
#merge data $input_files

