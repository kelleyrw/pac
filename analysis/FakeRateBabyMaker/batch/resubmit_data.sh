#!/bin/bash

# double Mu
condor_submit condor_DoubleMu_Run2012B-13Jul2012-v4_AOD_resubmit.cmd
condor_submit condor_DoubleMu_Run2012A-13Jul2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleMu_Run2012A-recover-06Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleMu_Run2012C-PromptReco-v2_AOD_resubmit.cmd
condor_submit condor_DoubleMu_Run2012C-24Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleMu_Run2012D-PromptReco-v1_AOD_resubmit.cmd

# Double El
condor_submit condor_DoubleElectron_Run2012B-13Jul2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleElectron_Run2012A-13Jul2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleElectron_Run2012A-recover-06Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleElectron_Run2012C-PromptReco-v2_AOD_resubmit.cmd
condor_submit condor_DoubleElectron_Run2012C-24Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_DoubleElectron_Run2012D-PromptReco-v1_AOD_resubmit.cmd

# SingleMu
condor_submit condor_SingleMu_Run2012B-13Jul2012-v1_AOD_resubmit.cmd
condor_submit condor_SingleMu_Run2012A-13Jul2012-v1_AOD_resubmit.cmd
condor_submit condor_SingleMu_Run2012A-recover-06Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_SingleMu_Run2012C-PromptReco-v2_AOD_resubmit.cmd
condor_submit condor_SingleMu_Run2012C-24Aug2012-v1_AOD_resubmit.cmd
condor_submit condor_SingleMu_Run2012D-PromptReco-v1_AOD_resubmit.cmd

# MuHad
#condor_submit condor_MuHad_Run2012B-13Jul2012-v1_AOD_resubmit.cmd
#condor_submit condor_MuHad_Run2012A-13Jul2012-v1_AOD_resubmit.cmd
#condor_submit condor_MuHad_Run2012A-recover-06Aug2012-v1_AOD_resubmit.cmd
#condor_submit condor_MuHad_Run2012C-PromptReco-v2_AOD_resubmit.cmd
#condor_submit condor_MuHad_Run2012C-24Aug2012-v1_AOD_resubmit.cmd
#condor_submit condor_MuHad_Run2012D-PromptReco-v1_AOD_resubmit.cmd
#
## ElectronHad
#condor_submit condor_ElectronHad_Run2012B-13Jul2012-v1_AOD_resubmit.cmd
#condor_submit condor_ElectronHad_Run2012A-13Jul2012-v1_AOD_resubmit.cmd
#condor_submit condor_ElectronHad_Run2012A-recover-06Aug2012-v1_AOD_resubmit.cmd
#condor_submit condor_ElectronHad_Run2012C-PromptReco-v2_AOD_resubmit.cmd
#condor_submit condor_ElectronHad_Run2012C-24Aug2012-v1_AOD_resubmit.cmd
#condor_submit condor_ElectronHad_Run2012D-PromptReco-v1_AOD_resubmit.cmd
