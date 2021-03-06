// C++
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// BOOST
#include <boost/program_options.hpp>

// ROOT
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"
#include "TFileMerger.h"

// Tools
#include "at/Sample.h"
#include "rt/MiscTools.h"
#include "SignalBinInfo.h"

/* --------------------------------------------------------------------------------------------- *
 This program is very specific to merge ewkino2012 babies from edm --> baby

 it take SUSY scan babies ROOT files that contain a TTree and a histogram: e.g.
 TFile*		output/t1tttt.root	
  KEY: TH1F	h_count;1	# of events
  KEY: TH2F	h_gen_count;1	# of Generated Events - T1tttt
  KEY: TTree	tree;2	baby tree for SS2012 analysis/

  This will get the xsections from the relavent histogram in data/xsec/susy_xsec.root.
  If the relevant xsec is not found, this will quit.

  It will
  1.  create a histogram that will be the # generated events
  2.  merge the baby chain into one TTree
  3.  add branches for the xsec, # generated events and scale1fb per susy mass point
  4.  add any k factors or efficiencies (defaults are 1.0)
  5.  write a new file with the new TTree and # generated events histogram and xsec histogram
* --------------------------------------------------------------------------------------------- */

using namespace std;
using namespace at;
using namespace ewkino;

int main(int argc, char* argv[])
try
{

    // inputs
    // -------------------------------------------------------------------------------------------------//

    std::string output_file = "";
    std::string input_file  = "";
    std::string xsec_file   = "data/xsec/susy_xsec.root";
    std::string sample_name = "";
    float branching_ratio = 1.;

    // define inputs
    namespace po = boost::program_options;
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help"  , "print this menu")
        ("input" , po::value<std::string>(&input_file)->required()  , "REQUIRED: input ntuple file (or files in a comma sperareted list)")
        ("output", po::value<std::string>(&output_file)->required() , "REQUIRED: output ntuple file"                                     )
        ("sample", po::value<std::string>(&sample_name)->required() , "REQUIRED: sample to post process (at/Sample.h)"                   )
        ("xsec"  , po::value<std::string>(&xsec_file)               , "cross section file path (data/xsec/susy_xsec.root)"               )
        ("br"    , po::value<float>(&branching_ratio)               , "branching ratio, if sample has already been decayed (default: 1.)")
        ;

    // parse it
    try
    {
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);

        if (vm.count("help")) 
        {
            cout << desc << "\n";
            return 1;
        }

        po::notify(vm);
    }
    catch (const std::exception& e)
    {
        cerr << e.what() << "\nexiting" << endl;
        cout << desc << "\n";
        return 1;
    }
    catch (...)
    {
        std::cerr << "Unknown error!" << "\n";
        return false;
    }

    cout << "[ss2012_postprocess_signal_baby] post processing with the following inputs:" << endl;
    cout << "input_file      :\t" << input_file        << endl;
    cout << "output_file     :\t" << output_file       << endl;
    cout << "sample_name     :\t" << sample_name       << endl;
    cout << "xsec_file       :\t" << xsec_file         << endl;
    cout << "branching_ratio :\t" << branching_ratio   << endl;

    // check the sample to post process
    // -------------------------------------------------------------------------------------------------//

    Sample::value_type sample = GetSampleFromName(sample_name);
    switch (sample)
    {
        case Sample::tchiwh:     break;
        default: 
            cout << "[ewkino2012_postprocess_signal_baby] Error: Sample " << sample_name << " is not supported" << endl;
            return 1;
    }
    SampleInfo sample_info = GetSampleInfo(sample);

    // create the # generated events histogram 
    // -------------------------------------------------------------------------------------------------//

    ewkino::SignalBinInfo bin_info = ewkino::GetSignalBinInfo(sample);
    TH2F h_gen_count("h_gen_count", Form("# Generated Events - %s", GetSignalBinHistLabel(sample).c_str()), bin_info.nbinsx, &bin_info.xbins[0], bin_info.nbinsy, &bin_info.ybins[0]);

    vector<string> vdirs = rt::string_split(input_file, ",");
    vector<string> vfile_names;
    for (size_t i = 0; i != vdirs.size(); i++)
    {
        vector<string> tmp_vfiles = rt::ls(vdirs.at(i));
        if (i == 0) vfile_names = tmp_vfiles;
        else vfile_names.insert(vfile_names.end(), tmp_vfiles.begin(), tmp_vfiles.end());
    }

    std::cout << std::endl;
    std::cout << "print list of directories:" << std::endl;
    for (size_t i = 0; i != vdirs.size(); i++)
    {
        std::cout << "\t" << vdirs.at(i) << std::endl;
    }
    std::cout << std::endl;

    for (size_t i = 0; i != vfile_names.size(); i++)
    {
        //cout << vfile_names.at(i) << endl;
        TH2F* h_temp = rt::GetHistFromRootFile<TH2F>(vfile_names.at(i), "h_gen_count");
        h_gen_count.Add(h_temp);
        delete h_temp;
    }

    // create the # scale 1fb histogram 
    // -------------------------------------------------------------------------------------------------//

    TH1F* h_xsec = rt::GetHistFromRootFile<TH1F>(xsec_file, Form("h_xsec_%s", sample_name.c_str()));
    h_xsec->SetName("h_xsec");

    TH2F h_scale1fb("h_scale1fb", Form("# Scale to 1 fb^{-1} - %s", GetSignalBinHistLabel(sample).c_str()), bin_info.nbinsx, &bin_info.xbins[0], bin_info.nbinsy, &bin_info.ybins[0]);
    for (int xbin = 1; xbin != h_scale1fb.GetNbinsX()+1; xbin++)
    {
        const float xsec     = h_xsec->GetBinContent(xbin);
        const float xsec_err = h_xsec->GetBinError(xbin);
        for (int ybin = 1; ybin != h_scale1fb.GetNbinsY()+1; ybin++)
        {
            const float num_gen      = static_cast<float>(h_gen_count.GetBinContent(xbin, ybin));
            const float scale1fb     = (num_gen > 0 ? (xsec * branching_ratio * 1000.0f)/num_gen : 0.0f);
            const float scale1fb_err = (num_gen > 0 ? (xsec_err * branching_ratio * 1000.0f)/num_gen : 0.0f);
            h_scale1fb.SetBinContent(xbin, ybin, scale1fb    );
            h_scale1fb.SetBinError  (xbin, ybin, scale1fb_err);
        }
    }

    // Merge the Chains
    // -------------------------------------------------------------------------------------------------//

    TChain* chain = rt::CreateTChainFromCommaSeperatedList(input_file, "tree");
    // TChain chain("tree");
    // chain.Add(input_file.c_str());
    cout << "Merging TTree(s) for " << sample_name << " -- please wait..." << endl;
    cout << "tree has " << chain->GetEntries() << " entries" << endl;

    // Removes the branches (if they exist) that we want to replace
    chain->SetBranchStatus("*"       , 1);
    chain->SetBranchStatus("xsec"    , 0);
    chain->SetBranchStatus("nevts"   , 0); 
    chain->SetBranchStatus("scale1fb", 0);

    // clone it
    TFile output(output_file.c_str(), "RECREATE");
    TTree* clone = chain->CloneTree(-1, "fast");
    clone->SetDirectory(&output);  // "output" object is in charge of deleting now

    // add the cross section
    // -------------------------------------------------------------------------------------------------//

    unsigned int nevts = 0;
    float xsec = -999999.0; 
    float scale1fb = -999999.0;
    float sparm0;
    float sparm1;
    float sparm2;
    float sparm3;

    // set the branches for the sparms
    clone->SetBranchStatus("sparm*", 1);
    clone->SetBranchAddress("sparm0", &sparm0);
    clone->SetBranchAddress("sparm1", &sparm1);
    clone->SetBranchAddress("sparm2", &sparm2);
    clone->SetBranchAddress("sparm3", &sparm3);
    
    TBranch* b1 = clone->Branch("scale1fb", const_cast<float*>       (&scale1fb), "scale1fb/F"); 
    TBranch* b2 = clone->Branch("xsec"    , const_cast<float*>       (&xsec    ), "xsec/F"    ); 
    TBranch* b3 = clone->Branch("nevts"   , const_cast<unsigned int*>(&nevts   ), "nevts/i"   );
    TBranch* b4 = clone->Branch("br"      , const_cast<float*>(&branching_ratio   ), "br/F"   );

    // counts
    const size_t num_events_chain = clone->GetEntries();
    size_t i_permilleOld          = 0;
    size_t num_events_total       = 0;

    for (size_t i = 0; i != num_events_chain; i++) 
    {
        // get the current TTree entry
        clone->GetEntry(i);
        num_events_total++;

        // set the values
        switch (sample)
        {
            case at::Sample::tchiwh:
                // m_gluino vs m_lsp
                xsec     = rt::GetBinContent1D(h_xsec, sparm0);
                scale1fb = rt::GetBinContent2D(&h_scale1fb, sparm0, sparm1);
                nevts    = static_cast<unsigned int>(rt::GetBinContent2D(&h_gen_count, sparm0, sparm1));
                break;
            default:
            {/* do nothing */}
        }
          
        // progress
        size_t i_permille = static_cast<size_t>(floor(1000 * num_events_total / float(num_events_chain)));
        if (i_permille != i_permilleOld)
        {
            printf("  \015\033[32m ---> \033[1m\033[31m%4.1f%%" "\033[0m\033[32m <---\033[0m\015", i_permille/10.0);
            fflush(stdout);
            i_permilleOld = i_permille;
        }

        // fill the branches
        b1->Fill();
        b2->Fill();
        b3->Fill();
        b4->Fill();
    }

    // save output
    // -------------------------------------------------------------------------------------------------//

    h_gen_count.Write();
    h_scale1fb.Write();
    h_xsec->Write();
    clone->Write();
    output.Close();

    cout << "[ewkino2012_postprocess_signal_baby] complete..." << endl;

    // done
    return 0;
}
catch (std::exception& e)
{
    cerr << "[ewkino2012_postprocess_signal_baby] failed..." << endl;
    cerr << e.what() << endl;
    return 1;
}
