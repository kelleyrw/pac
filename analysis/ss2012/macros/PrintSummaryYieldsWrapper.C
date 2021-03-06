void PrintSummaryYieldsWrapper(const std::string& out_path, int charge_option = 0, bool latex = false)
{
    if (out_path.empty())
    {
        cout << "no outpath given, quiting" << endl;
    }

    gROOT->ProcessLine(".L macros/PrintYields.C+");
    PrintSummaryYields(out_path, charge_option, latex);
}
