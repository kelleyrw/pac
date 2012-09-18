#ifndef AT_SAMPLE_H
#define AT_SAMPLE_H

#include "TChain.h"
#include "TColor.h"
#include <string>

namespace at
{
    // list of available samples
    struct Sample
    {
        enum value_type
        {
            data,
            dy,
            ttw,
            ttw_53X,
            ttw_fastsim,
            ttz,
			ttg,
			ttww,
            ttjets,
            zz,
            wz,
			wwg,
			www,
			wwz,
			wzz,
			zzz,
            t1tttt,
            t1tttt_fastsim,
            sbottomtop,
            static_size
        };
    };

    // list of available sample types
    struct SampleType
    {
        enum value_type
        {
            data,
            signal,
            susy,
            rare,
            bkgd,
            static_size
        };
    };

    // Sample Infomation
    struct SampleInfo
    {
        std::string name;
        std::string title;
        std::string ntuple_path;
        SampleType::value_type type;
        Sample::value_type process;
        Color_t color; 
    };

    // list of available ntuples
    struct NtupleType
    {
        enum value_type
        {
            cms2,
            cms2mc,
            cms2mc_53X,
            ss_skim_data,
            ss_skim_mc,
            ss_skim_mc_53X,
            tensor,
            static_size
        };
    };

    // Get the Sample from a string
    Sample::value_type GetSampleFromName(const std::string& sample_name);

    // wrapper function to get the SampleInfo
    SampleInfo GetSampleInfo(const Sample::value_type& sample);
    SampleInfo GetSampleInfo(const std::string& sample_name);

    // get the chain from the Sample
    // NOTE: user in charge of deleting the TChain*
    TChain* GetSampleTChain
    (
        const Sample::value_type& sample, 
        const NtupleType::value_type& ntuple = NtupleType::cms2
    ); 

    // function to filter samples by process
    bool FilterByProcess(const Sample::value_type& sample);

	// check if the sampe is real data
	bool SampleIsData(const Sample::value_type& sample);

    // get path to ntuple
	std::string GetNtuplePath(const std::string& ntuple_type_name);
    std::string GetNtuplePath(const NtupleType::value_type& ntuple);
	NtupleType::value_type GetNtupleTypeFromName(const std::string& ntuple_type_name);

} // namespace at

#endif // AT_SAMPLE_H
