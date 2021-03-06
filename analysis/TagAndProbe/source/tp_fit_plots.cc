// C++
#include <iostream>
#include <fstream>

// ROOT
#include "TCanvas.h" 
#include "TFile.h" 
//#include "TF1.h" 
//#include "TMath.h" 
//#include "TROOT.h" 
#include "TROOT.h"
#include "TH1D.h"
#include "TTree.h"

// RooFit
#include "RooDataHist.h"
#include "RooDataSet.h"
#include "RooRealVar.h"
#include "RooAbsPdf.h"
#include "RooBreitWigner.h"
#include "RooCBShape.h"
#include "RooGaussian.h"
#include "RooFFTConvPdf.h"
#include "RooDataHist.h"
#include "RooHistPdf.h"
#include "RooKeysPdf.h"
#include "RooCategory.h"
#include "RooFormulaVar.h"
#include "RooSimultaneous.h"
#include "RooAddPdf.h"
#include "RooFitResult.h"
#include "RooExtendPdf.h"
#include "RooAbsPdf.h"
#include "RooAddPdf.h"
#include "RooRealVar.h"
#include "RooExponential.h"
#include "RooGenericPdf.h"
#include "RooPlot.h"

// BOOST
#include <boost/program_options.hpp>

// Tools
#include "PerformFits.h"
#include "CTable.h"
#include "rt/RootTools.h" 
#include "Measurement.h"
 
using namespace std;
using namespace tp;

// needs to be automated somehowe
const float mlow  = 60.0;
const float mhigh = 120.0;

// electron binning
const size_t el_npt_bins  = 6; const float el_pt_bins [] = {10, 15, 20, 30, 40, 50, 200};
const size_t el_neta_bins = 5; const float el_eta_bins[] = {0, 0.8, 1.4442, 1.566, 2.0, 2.5};

// mu binning
const size_t mu_npt_bins  = 6; const float mu_pt_bins [] = {10, 15, 20, 30, 40, 50, 200};
const size_t mu_neta_bins = 2; const float mu_eta_bins[] = {0, 1.2, 2.5};

// Electrons
// --------------------------------------------------------------------------------- //

// models for the ID
const tp::Model::value_type el_id_models[el_npt_bins][el_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta2, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}, // not used, electron crack
        /*eta3, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta4, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta2, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}, // not used, electron crack
        /*eta3, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta4, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    }, 
    {
        /*eta0, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      },
        /*eta1, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      }, 
        /*eta2, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, // not used, electron crack
        /*eta3, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta4, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      },
        /*eta2, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, // not used, electron crack
        /*eta3, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta4, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

// models for the Iso
const tp::Model::value_type el_iso_models[el_npt_bins][el_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta2, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}, // not used, electron crack
        /*eta3, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta4, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta2, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}, // not used, electron crack
        /*eta3, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta4, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    }, 
    {
        /*eta0, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, 
        /*eta2, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, // not used, electron crack
        /*eta3, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      },
        /*eta4, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta2, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, // not used, electron crack
        /*eta3, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta4, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

// models for the Iso+iso
const tp::Model::value_type el_both_models[el_npt_bins][el_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta2, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}, // not used, electron crack
        /*eta3, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta4, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta1, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta2, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta3, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta4, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
    },
    {
        /*eta0, pt2 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::ErfExp      , Model::ErfExp    },
        /*eta1, pt2 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::ErfExp      , Model::ErfExp    },
        /*eta2, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp      , Model::ErfExp    }, // not used, electron crack
        /*eta3, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp      , Model::ErfExp    },
        /*eta4, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp      , Model::ErfExp    }
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      },
        /*eta2, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }, // not used, electron crack
        /*eta3, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      },
        /*eta4, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta2, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }, // not used, electron crack
        /*eta3, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta4, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

// Muons
// --------------------------------------------------------------------------------- //

// models for the ID
const tp::Model::value_type mu_id_models[mu_npt_bins][mu_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    }, 
    {
        /*eta0, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      } 
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

// models for the Iso
const tp::Model::value_type mu_iso_models[mu_npt_bins][mu_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential},
        /*eta1, pt1 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    }, 
    {
        /*eta0, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      } 
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

// models for the Iso+iso
const tp::Model::value_type mu_both_models[mu_npt_bins][mu_neta_bins][4] =
{
    {                  //           sig pass,             sig fail,           bkg pass,            bkg fail,
        /*eta0, pt0 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential},
        /*eta1, pt0 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential, Model::Exponential}
    },
    {
        /*eta0, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt1 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Exponential, Model::Exponential}
    }, 
    {
        /*eta0, pt2 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp      , Model::ErfExp    },
        /*eta1, pt2 =*/{Model::BreitWignerCB, Model::BreitWignerCB, Model::Exponential , Model::Exponential} 
    },
    {
        /*eta0, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::ErfExp     , Model::ErfExp     },
        /*eta1, pt3 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Poly3      , Model::Poly3      }
    },
    {
        /*eta0, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt4 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    },
    {
        /*eta0, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  },
        /*eta1, pt5 =*/{Model::MCTemplate   , Model::MCTemplate   , Model::Chebychev  , Model::Chebychev  }
    }
};

void PrintCanvas(TCanvas* const canvas, const std::string& filename, const std::string& suffix = "png")
{
    const std::string dirname  = rt::dirname(filename);
    const std::string basename = rt::basename(filename);
    if (suffix == "all")
    {
        rt::mkdir(dirname + "/png", /*force=*/true);
        rt::mkdir(dirname + "/eps", /*force=*/true);
        rt::mkdir(dirname + "/pdf", /*force=*/true);
        rt::CopyIndexPhp(dirname + "/png");
        rt::CopyIndexPhp(dirname + "/eps");
        rt::CopyIndexPhp(dirname + "/pdf");
        canvas->Print(Form("%s/eps/%s.eps", dirname.c_str(), basename.c_str()));
        canvas->Print(Form("%s/png/%s.png", dirname.c_str(), basename.c_str()));
        canvas->Print(Form("%s/pdf/%s.pdf", dirname.c_str(), basename.c_str()));
    }
    else
    {
        rt::mkdir(dirname + "/" + suffix, /*force=*/true);
        rt::CopyIndexPhp(dirname + "/" + suffix);
        canvas->Print(Form("%s/%s/%s.%s", dirname.c_str(), suffix.c_str(), filename.c_str(), suffix.c_str()));
    }
}

// returns the num/den hists
template <typename ModelArray>
rt::TH1Container FitMassPlots(const bool do_electrons, const std::string& data_filename, const std::string& mc_filename, const ModelArray& models, const string& output_path = "test", const std::string& suffix = "eps")
{
    // histograms
    rt::TH1Container hc_data(data_filename); 
    rt::TH1Container hc_mc(mc_filename); 

    // ugly but does the job...
    const size_t npt_bins       = (do_electrons ? el_npt_bins  : mu_npt_bins );
    const size_t neta_bins      = (do_electrons ? el_neta_bins : mu_neta_bins);
    const float* const pt_bins  = (do_electrons ? el_pt_bins   : mu_pt_bins );
    const float* const eta_bins = (do_electrons ? el_eta_bins  : mu_eta_bins);

    // hist for num counts
    rt::TH1Container hc;
    hc.Add(new TH2F("h_data_num", "Numerator Counts;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));
    hc.Add(new TH2F("h_mc_num"  , "Numerator Counts;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));

    // hist for den counts
    hc.Add(new TH2F("h_data_den", "Denominator Counts;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));
    hc.Add(new TH2F("h_mc_den"  , "Denominator Counts;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));

    // hist for eff
    hc.Add(new TH2F("h_data_eff", "Efficiency;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));
    hc.Add(new TH2F("h_mc_eff"  , "Efficiency;|#eta|;p_{T} (GeV)", neta_bins, eta_bins, npt_bins, pt_bins));


//     size_t pt_bin = 0;
//     size_t eta_bin = 0;
    for (size_t pt_bin = 0; pt_bin != npt_bins; pt_bin++)
    {
        const float pt_min = pt_bins[pt_bin];
        const float pt_max = pt_bins[pt_bin+1];
        const string pt_label = Form("%1.0f GeV < p_{T} < %1.0f GeV", pt_min, pt_max); 
        cout << pt_label << endl;

        for (size_t eta_bin = 0; eta_bin != neta_bins; eta_bin++)
        {
            // set the models
            const tp::Model::value_type sig_pass_model = models[pt_bin][eta_bin][0];
            const tp::Model::value_type sig_fail_model = models[pt_bin][eta_bin][1];
            const tp::Model::value_type bkg_pass_model = models[pt_bin][eta_bin][2];
            const tp::Model::value_type bkg_fail_model = models[pt_bin][eta_bin][3];

            const float eta_min = eta_bins[eta_bin];
            const float eta_max = eta_bins[eta_bin+1];
            const string eta_label = Form("%1.2f < |\\eta| < %1.2f", eta_min, eta_max); 
            cout << eta_label << endl;

            cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << Form("fitting for bin: %s %s -- pt%lu_eta%lu", pt_label.c_str(), eta_label.c_str(), pt_bin, eta_bin) << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << endl;

            const string hist_pass_name = Form("h_pass_pt%lu_eta%lu", pt_bin, eta_bin);
            const string hist_fail_name = Form("h_fail_pt%lu_eta%lu", pt_bin, eta_bin);

            TH1F* h_data_pass = dynamic_cast<TH1F*>(hc_data[hist_pass_name]);
            TH1F* h_data_fail = dynamic_cast<TH1F*>(hc_data[hist_fail_name]);
            TH1F* h_mc_pass   = dynamic_cast<TH1F*>(hc_mc  [hist_pass_name]);
            TH1F* h_mc_fail   = dynamic_cast<TH1F*>(hc_mc  [hist_fail_name]);

            if (eta_bin != 2) // skip crack
            {
                // do the fit
                tp::Result dr = tp::PerformSimultaneousFit(sig_pass_model, sig_fail_model, bkg_pass_model, bkg_fail_model, h_data_pass, h_data_fail, pt_label, eta_label, mlow, mhigh, h_mc_pass, h_mc_fail);
                dr.cpass->cd();
                dr.cpass->Draw();
                PrintCanvas(dr.cpass, Form("plots/%s/p_data_pass_pt%lu_eta%lu", output_path.c_str(), pt_bin, eta_bin), "all");
                dr.cfail->cd();
                dr.cfail->Draw();
                PrintCanvas(dr.cfail, Form("plots/%s/p_data_fail_pt%lu_eta%lu", output_path.c_str(), pt_bin, eta_bin), "all");

                // count the MC
                tp::Result mr = tp::PerformSimpleCount(h_mc_pass, h_mc_fail, pt_label, eta_label, mlow, mhigh);
                mr.cpass->cd();
                mr.cpass->Draw();
                PrintCanvas(mr.cpass, Form("plots/%s/p_mc_pass_pt%lu_eta%lu", output_path.c_str(), pt_bin, eta_bin), "all");
                mr.cfail->cd();
                mr.cfail->Draw();
                PrintCanvas(mr.cfail, Form("plots/%s/p_mc_fail_pt%lu_eta%lu", output_path.c_str(), pt_bin, eta_bin), "all");

                // ROOT counts bins from 1-N not 0-(N-1) like C++ 
                hc["h_data_num"]->SetBinContent(eta_bin+1, pt_bin+1, dr.num.value);
                hc["h_data_num"]->SetBinError  (eta_bin+1, pt_bin+1, dr.num.error);
                hc["h_data_den"]->SetBinContent(eta_bin+1, pt_bin+1, dr.den.value);
                hc["h_data_den"]->SetBinError  (eta_bin+1, pt_bin+1, dr.den.error);
                hc["h_data_eff"]->SetBinContent(eta_bin+1, pt_bin+1, dr.eff.value);
                hc["h_data_eff"]->SetBinError  (eta_bin+1, pt_bin+1, dr.eff.error);
                hc["h_mc_num"  ]->SetBinContent(eta_bin+1, pt_bin+1, mr.num.value);
                hc["h_mc_num"  ]->SetBinError  (eta_bin+1, pt_bin+1, mr.num.error);
                hc["h_mc_den"  ]->SetBinContent(eta_bin+1, pt_bin+1, mr.den.value);
                hc["h_mc_den"  ]->SetBinError  (eta_bin+1, pt_bin+1, mr.den.error);
                hc["h_mc_eff"  ]->SetBinContent(eta_bin+1, pt_bin+1, mr.eff.value);
                hc["h_mc_eff"  ]->SetBinError  (eta_bin+1, pt_bin+1, mr.eff.error);
            }
            else
            {
                // ROOT counts bins from 1-N not 0-(N-1) like C++
                cout << "skipping electron crack bin" << endl;
                hc["h_data_num"]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_data_num"]->SetBinError  (eta_bin+1, pt_bin+1, 0);
                hc["h_data_den"]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_data_den"]->SetBinError  (eta_bin+1, pt_bin+1, 0);
                hc["h_data_eff"]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_data_eff"]->SetBinError  (eta_bin+1, pt_bin+1, 0);
                hc["h_mc_num"  ]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_mc_num"  ]->SetBinError  (eta_bin+1, pt_bin+1, 0);
                hc["h_mc_den"  ]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_mc_den"  ]->SetBinError  (eta_bin+1, pt_bin+1, 0);
                hc["h_mc_eff"  ]->SetBinContent(eta_bin+1, pt_bin+1, 0);
                hc["h_mc_eff"  ]->SetBinError  (eta_bin+1, pt_bin+1, 0);
            }
        }
    }

    // make eff projection plots
    for (size_t pt_bin = 0; pt_bin != npt_bins; pt_bin++)
    {
        const float pt_min = pt_bins[pt_bin];
        const float pt_max = pt_bins[pt_bin+1];
        const string title = Form("Efficiency (%1.0f GeV < p_{T} < %1.0f GeV);|#eta|;#varepsilon", pt_min, pt_max);
        TH1D* h_data_proj = dynamic_cast<TH2*>(hc["h_data_eff"])->ProjectionX(Form("h_data_eff_vs_eta_pt%lu", pt_bin), pt_bin+1, pt_bin+1);
        TH1D* h_mc_proj   = dynamic_cast<TH2*>(hc["h_mc_eff"  ])->ProjectionX(Form("h_mc_eff_vs_eta_pt%lu"  , pt_bin), pt_bin+1, pt_bin+1);
        h_data_proj->SetTitle(("Data " + title).c_str());
        h_mc_proj->SetTitle(("MC " + title).c_str());
        hc.Add(h_data_proj);
        hc.Add(h_mc_proj);

        const string sf_title = Form("Data/MC scalefactor (%1.0f GeV < p_{T} < %1.0f GeV);|#eta|;#varepsilon", pt_min, pt_max);
        hc.Add(rt::DivideHists(h_data_proj, h_mc_proj, Form("h_sf_vs_eta_pt%lu", pt_bin), sf_title));
    }
    for (size_t eta_bin = 0; eta_bin != neta_bins; eta_bin++)
    {
        const float eta_min = eta_bins[eta_bin];
        const float eta_max = eta_bins[eta_bin+1];
        const string title  = Form("Efficiency (%1.2f < |\\eta| < %1.2f);p_{T} (GeV);#varepsilon", eta_min, eta_max);
        TH1D* h_data_proj = dynamic_cast<TH2*>(hc["h_data_eff"])->ProjectionY(Form("h_data_eff_vs_pt_eta%lu", eta_bin), eta_bin+1, eta_bin+1);
        TH1D* h_mc_proj   = dynamic_cast<TH2*>(hc["h_mc_eff"  ])->ProjectionY(Form("h_mc_eff_vs_pt_eta%lu" , eta_bin), eta_bin+1, eta_bin+1);
        h_data_proj->SetTitle(("Data " + title).c_str());
        h_mc_proj->SetTitle(("MC " + title).c_str());
        hc.Add(h_data_proj);
        hc.Add(h_mc_proj);

        const string sf_title = Form("Data/MC scalefactor (%1.2f < |\\eta| < %1.2f);p_{T} (GeV);#varepsilon", eta_min, eta_max);
        hc.Add(rt::DivideHists(h_data_proj, h_mc_proj, Form("h_sf_vs_pt_eta%lu", eta_bin), sf_title));
    }

    // make scale factor plots
    hc.Add(rt::DivideHists(hc["h_data_eff"], hc["h_mc_eff"], "h_sf", "data/MC scale Factor"));

    return hc;
}


int main(int argc, char* argv[])
try
{
    std::string output_label = "";
    std::string input_path   = "";
    std::string mode_name    = "";

    namespace po = boost::program_options;
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help"  , "print this menu")
        ("mode"  , po::value<std::string>(&mode_name)->required()   , "REQUIRED: which channel are we analysising (Muon, Electron)"      )
        ("label" , po::value<std::string>(&output_label)->required(), "REQUIRED: output label for the fits (e.g. plots/fits/<label>/id/)")
        ("input" , po::value<std::string>(&input_path)->required()  , "REQUIRED: input path to the plots to fit"                         )
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

    // mode
    tp::Mode::value_type mode = tp::GetModeFromString(mode_name);
    if (not (mode == tp::Mode::Electron or mode == tp::Mode::Muon))
    {
        cerr << "[tp_fit_plots] ERROR: mode is invalid.  Must be electron or muon" << endl;
        cout << desc << endl;
        return 1;
    }

    cout << "inputs:" << endl;
    cout << "output_label     :\t" << output_label     << endl; 
    cout << "input_path       :\t" << input_path       << endl; 
    cout << "mode_name        :\t" << mode_name        << endl; 

    // do it
    // ------------------------------------------------------------------ //

    const bool do_electrons = (mode == tp::Mode::Electron);
    output_label = Form("fits/%s", output_label.c_str());

    // do the fits
    rt::TH1Container hc_id   = (do_electrons ? FitMassPlots(/*do_electrons=*/true , input_path +"/id/data/plots.root"  , input_path + "/id/mc/plots.root"  , el_id_models  , output_label + "/id"  , "all") :
                                               FitMassPlots(/*do_electrons=*/false, input_path +"/id/data/plots.root"  , input_path + "/id/mc/plots.root"  , mu_id_models  , output_label + "/id"  , "all"));
    rt::TH1Container hc_iso  = (do_electrons ? FitMassPlots(/*do_electrons=*/true , input_path +"/iso/data/plots.root" , input_path + "/iso/mc/plots.root" , el_iso_models , output_label + "/iso" , "all") :
                                               FitMassPlots(/*do_electrons=*/false, input_path +"/iso/data/plots.root" , input_path + "/iso/mc/plots.root" , mu_iso_models , output_label + "/iso" , "all"));
    rt::TH1Container hc_both = (do_electrons ? FitMassPlots(/*do_electrons=*/true , input_path +"/both/data/plots.root", input_path + "/both/mc/plots.root", el_both_models, output_label + "/both", "all") :
                                               FitMassPlots(/*do_electrons=*/false, input_path +"/both/data/plots.root", input_path + "/both/mc/plots.root", mu_both_models, output_label + "/both", "all"));

    TH1* h_sf_prod = rt::MultiplyHists(hc_id["h_sf"], hc_iso["h_sf"], "h_sf_prod", "data/MC scale Factor (ID*Iso)");
    h_sf_prod->SetDirectory(NULL);
    hc_both.Add(h_sf_prod);

    TH1* h_sf_diff = rt::SubtractHists(hc_both["h_sf"], hc_both["h_sf_prod"], "h_sf_diff", "data/MC scale Factor difference (ID+Iso - ID*Iso)");
    h_sf_diff->SetDirectory(NULL);
    hc_both.Add(h_sf_diff);

    // make the tables
    CTable t_id   = rt::CreateTableFromHist(hc_id  ["h_sf"     ], "Data/MC ScaleFactor ID"             , "p_{T}", "\\eta", "GeV", "", "1.3", "1.0", "1.2", true);
    CTable t_iso  = rt::CreateTableFromHist(hc_iso ["h_sf"     ], "Data/MC ScaleFactor ISO"            , "p_{T}", "\\eta", "GeV", "", "1.3", "1.0", "1.2", true);
    CTable t_prod = rt::CreateTableFromHist(h_sf_prod           , "Data/MC ScaleFactor ID*ISO"         , "p_{T}", "\\eta", "GeV", "", "1.3", "1.0", "1.2", true);
    CTable t_both = rt::CreateTableFromHist(hc_both["h_sf"     ], "Data/MC ScaleFactor ID+ISO"         , "p_{T}", "\\eta", "GeV", "", "1.3", "1.0", "1.2", true);
    CTable t_diff = rt::CreateTableFromHist(hc_both["h_sf_diff"], "Data/MC ScaleFactor ID+ISO - ID*Iso", "p_{T}", "\\eta", "GeV", "", "1.3", "1.0", "1.2", true);

    // print to screen
    t_id.print();
    t_iso.print();
    t_prod.print();
    t_both.print();
    t_diff.print();

    //hc_id.SetMinMax(0, 1.1);
    //hc_iso.SetMinMax(0, 1.1);
    //hc_both.SetMinMax(0, 1.1);

    hc_id.Write  (Form("plots/%s/id/results.root"  , output_label.c_str()));
    hc_iso.Write (Form("plots/%s/iso/results.root" , output_label.c_str()));
    hc_both.Write(Form("plots/%s/both/results.root", output_label.c_str()));

    rt::mkdir("tables/" + output_label + "/id"  , /*force=*/true);
    rt::mkdir("tables/" + output_label + "/iso" , /*force=*/true);
    rt::mkdir("tables/" + output_label + "/prod", /*force=*/true);
    rt::mkdir("tables/" + output_label + "/both", /*force=*/true);
    t_id.saveAs   ("tables/" + output_label + "/id/sf.txt"  ); t_id.print();
    t_iso.saveAs  ("tables/" + output_label + "/iso/sf.txt" ); t_iso.print();
    t_prod.saveAs ("tables/" + output_label + "/prod/sf.txt" ); t_iso.print();
    t_both.saveAs ("tables/" + output_label + "/both/sf.txt"); t_both.print();
    t_diff.saveAs ("tables/" + output_label + "/prod/sf_dff.txt"); t_diff.print();
    t_id.print();
    t_iso.print();
    t_prod.print();
    t_both.print();
    cout << "\nDifference between product and simultaneous" << endl;
    t_diff.print();

    return 0;
}
catch(std::exception& e)
{
    cout << e.what() << endl;
}

