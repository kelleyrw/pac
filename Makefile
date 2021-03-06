# ----------------------------------------------------------------------- #
# Makefile for PAC 
# creates shared libs and executables
# ----------------------------------------------------------------------- #

all:
	$(MAKE) -C externals/build/MiniFWLite
	$(MAKE) -C externals/build/SimpleTable
	$(MAKE) -C packages/cms2
	$(MAKE) -C externals/build/cms2_core
	$(MAKE) -C packages/RootTools
	$(MAKE) -C packages/AnalysisTools
	$(MAKE) -C packages/FGTools
	$(MAKE) -C packages/FakeRateBabyTools
	$(MAKE) -C analysis/ss2012 
	$(MAKE) -C analysis/ttv2012

clean:
	$(MAKE) -C externals/build/MiniFWLite clean
	$(MAKE) -C externals/build/SimpleTable clean
	$(MAKE) -C packages/cms2 clean
	$(MAKE) -C externals/build/cms2_core clean
	$(MAKE) -C packages/RootTools clean
	$(MAKE) -C packages/AnalysisTools clean
	$(MAKE) -C packages/FGTools clean
	$(MAKE) -C packages/FakeRateBabyTools clean
	$(MAKE) -C analysis/ss2012 clean
	$(MAKE) -C analysis/ttv2012 clean

.PHONY: all clean



