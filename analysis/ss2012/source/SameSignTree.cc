#include "SameSignTree.h"

SameSignTree::SameSignTree ()
{
}

SameSignTree::SameSignTree (const std::string &prefix)
    : DileptonTree(prefix)
{
}

void SameSignTree::Reset()
{
    event_info.Reset();
    DileptonTree::Reset();

    selection        = 0;
    is_good_lumi     = false;
    njets            = -999999;
    njets20          = -999999;
    njets30          = -999999;
    nbtags           = -999999;
    nbtags20         = -999999;
    nbtags30         = -999999;
    vtxw             = -999999.0;
    ht               = -999999.0;
    ht20             = -999999.0;
    ht30             = -999999.0;
    rho              = -999999.0;
    rho_iso          = -999999.0;
	sf_dileptrig	 = 1.0;
	sf_lepeff		 = 1.0;
    trig_mm          = false;
    trig_em          = false;
    trig_ee          = false;
    sparm0           = -999999.0;
    sparm1           = -999999.0;
    sparm2           = -999999.0;
    sparm3           = -999999.0;
    is_pp            = false;
    is_mm            = false;
    is_ss            = false;
    is_sf            = false;
    is_df            = false;
    is_os            = false;
    is_gen_pp        = false;
    is_gen_mm        = false;
    no_extraz        = false;
    gen_nbtags       = -999999;
    gen_njets        = -999999;
    gen_ht           = -999999.0;
    lep1_nearbjet_p4 = LorentzVector(0, 0, 0, 0);
    lep1_nearjet_p4  = LorentzVector(0, 0, 0, 0);
    lep1_wfr         = -999999.0;
    lep1_wflip       = -999999.0;
    lep1_nearbjet_dr = -999999.0;
    lep1_nearjet_dr  = -999999.0;
    lep2_nearbjet_p4 = LorentzVector(0, 0, 0, 0);
    lep2_nearjet_p4  = LorentzVector(0, 0, 0, 0);
    lep2_wfr         = -999999.0;
    lep2_wflip       = -999999.0;
    lep2_nearbjet_dr = -999999.0;
    lep2_nearjet_dr  = -999999.0;
    sf_nbtag         = -999999.0;
    sf_nbtag3        = -999999.0;
    sf_unc_nbtag     = -999999.0;
    sf_unc_nbtag3    = -999999.0;
    jets_dr12        = -999999.0;
    bjets_dr12       = -999999.0;

    vgenb_p4.clear();
    vjets_p4.clear();
    vgenjets_p4.clear();
    vjets_nearjet_p4.clear();
    vbjets_p4.clear();
    vbjets_nearjet_p4.clear();
    vbtags.clear();
    vbjets_nearjet_dr.clear();
}

void SameSignTree::SetBranches(TTree &tree)
{
    event_info.SetBranches(tree);
    DileptonTree::SetBranches(tree);

    tree.Branch("selection"         , &selection                  , "selection/i"        );
    tree.Branch("is_good_lumi"      , &is_good_lumi               , "is_good_lumi/O"     );
    tree.Branch("njets"             , &njets                      , "njets/I"            );
    tree.Branch("njets20"           , &njets20                    , "njets20/I"          );
    tree.Branch("njets30"           , &njets30                    , "njets30/I"          );
    tree.Branch("nbtags"            , &nbtags                     , "nbtags/I"           );
    tree.Branch("nbtags20"          , &nbtags20                   , "nbtags20/I"         );
    tree.Branch("nbtags30"          , &nbtags30                   , "nbtags30/I"         );
    tree.Branch("vtxw"              , &vtxw                       , "vtxw/F"             );
    tree.Branch("ht"                , &ht                         , "ht/F"               );
    tree.Branch("ht20"              , &ht20                       , "ht20/F"             );
    tree.Branch("ht30"              , &ht30                       , "ht30/F"             );
    tree.Branch("rho"               , &rho                        , "rho/F"              );
    tree.Branch("rho_iso"           , &rho_iso                    , "rho_iso/F"          );
    tree.Branch("trig_mm"           , &trig_mm                    , "trig_mm/O"          );
    tree.Branch("trig_em"           , &trig_em                    , "trig_em/O"          );
    tree.Branch("trig_ee"           , &trig_ee                    , "trig_ee/O"          );
    tree.Branch("sf_dileptrig"      , &sf_dileptrig               , "sf_dileptrig/F"     );
    tree.Branch("sf_lepeff"         , &sf_lepeff                  , "sf_lepeff/F"        );
    tree.Branch("sparm0"            , &sparm0                     , "sparm0/F"           );
    tree.Branch("sparm1"            , &sparm1                     , "sparm1/F"           );
    tree.Branch("sparm2"            , &sparm2                     , "sparm2/F"           );
    tree.Branch("sparm3"            , &sparm3                     , "sparm3/F"           );
    tree.Branch("is_pp"             , &is_pp                      , "is_pp/O"            );
    tree.Branch("is_mm"             , &is_mm                      , "is_mm/O"            );
    tree.Branch("is_sf"             , &is_sf                      , "is_sf/O"            );
    tree.Branch("is_df"             , &is_df                      , "is_df/O"            );
    tree.Branch("no_extraz"         , &no_extraz                  , "no_extraz/O"        );
    tree.Branch("is_gen_pp"         , &is_gen_pp                  , "is_gen_pp/O"        );
    tree.Branch("is_gen_mm"         , &is_gen_mm                  , "is_gen_mm/O"        );
    tree.Branch("gen_nbtags"        , &gen_nbtags                 , "gen_nbtags/I"       );
    tree.Branch("gen_njets"         , &gen_njets                  , "gen_njets/I"        );
    tree.Branch("gen_ht"            , &gen_ht                     , "gen_ht/F"           );
    tree.Branch("lep1_nearbjet_p4"  , "LorentzVector"             , &lep1_nearbjet_p4    );
    tree.Branch("lep1_nearjet_p4"   , "LorentzVector"             , &lep1_nearjet_p4     );
    tree.Branch("lep1_wfr"          , &lep1_wfr                   , "lep1_wfr/F"         );
    tree.Branch("lep1_wflip"        , &lep1_wflip                 , "lep1_wflip/F"       );
    tree.Branch("lep1_nearbjet_dr"  , &lep1_nearbjet_dr           , "lep1_nearbjet_dr/F" );
    tree.Branch("lep1_nearjet_dr"   , &lep1_nearjet_dr            , "lep1_nearjet_dr/F"  );
    tree.Branch("lep2_nearbjet_p4"  , "LorentzVector"             , &lep2_nearbjet_p4    );
    tree.Branch("lep2_nearjet_p4"   , "LorentzVector"             , &lep2_nearjet_p4     );
    tree.Branch("lep2_wfr"          , &lep2_wfr                   , "lep2_wfr/F"         );
    tree.Branch("lep2_wflip"        , &lep2_wflip                 , "lep2_wflip/F"       );
    tree.Branch("lep2_nearbjet_dr"  , &lep2_nearbjet_dr           , "lep2_nearbjet_dr/F" );
    tree.Branch("lep2_nearjet_dr"   , &lep2_nearjet_dr            , "lep2_nearjet_dr/F"  );
    tree.Branch("sf_nbtag"          , &sf_nbtag                   , "sf_nbtag/F"         );
    tree.Branch("sf_nbtag3"         , &sf_nbtag3                  , "sf_nbtag3/F"        );
    tree.Branch("sf_unc_nbtag"      , &sf_unc_nbtag               , "sf_unc_nbtag/F"     );
    tree.Branch("sf_unc_nbtag3"     , &sf_unc_nbtag3              , "sf_unc_nbtag3/F"    );
    tree.Branch("jets_dr12"         , &jets_dr12                  , "jets_dr12/F"        );
    tree.Branch("bjets_dr12"        , &bjets_dr12                 , "bjets_dr12/F"       );
    tree.Branch("vgenb_p4"          , "vecLorentzVector"          , &vgenb_p4            );
    tree.Branch("vjets_p4"          , "vecLorentzVector"          , &vjets_p4            );
    tree.Branch("vgenjets_p4"       , "vecLorentzVector"          , &vgenjets_p4         );
    tree.Branch("vjets_nearjet_p4"  , "vecLorentzVector"          , &vjets_nearjet_p4    );
    tree.Branch("vbjets_p4"         , "vecLorentzVector"          , &vbjets_p4           );
    tree.Branch("vbjets_nearjet_p4" , "vecLorentzVector"          , &vbjets_nearjet_p4   );
    tree.Branch("vbtags"            , "std::vector<bool>"         , &vbtags              );
    tree.Branch("vbjets_nearjet_dr" , "vecd"                      , &vbjets_nearjet_dr   );
}

