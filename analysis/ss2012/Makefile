# ----------------------------------------------------------------------- #
# Makefile for ss2012 
# creates an shared lib and executables
# ----------------------------------------------------------------------- #

all:
	$(MAKE) -f build/ss2012_tools.mk
	$(MAKE) -f build/ss2012_analysis.mk
	$(MAKE) -f build/ss2012_create_fakerate.mk
	$(MAKE) -f build/ss2012_create_fakerate_eth.mk
	$(MAKE) -f build/ss2012_merge_babies.mk
	$(MAKE) -f build/ss2012_skim.mk
	$(MAKE) -f build/ss2012_plots.mk
	$(MAKE) -f build/ss2012_quick_check.mk
	$(MAKE) -f build/ss2012_outreach.mk
	$(MAKE) -f build/ss2012_outreach_closure.mk
	$(MAKE) -f build/ss2012_closure_test.mk
#	$(MAKE) -f build/ss2012_event_list.mk  
#	$(MAKE) -f build/ss2012_event_list_eth.mk 
	$(MAKE) -f build/ss2012_make_fr_from_hists.mk
	$(MAKE) -f build/ss2012_closure_test_eth.mk

clean:
	$(MAKE) -f build/ss2012_tools.mk clean
	$(MAKE) -f build/ss2012_analysis.mk clean
	$(MAKE) -f build/ss2012_create_fakerate.mk clean
	$(MAKE) -f build/ss2012_create_fakerate_eth.mk clean
	$(MAKE) -f build/ss2012_skim.mk clean
	$(MAKE) -f build/ss2012_plots.mk clean
	$(MAKE) -f build/ss2012_merge_babies.mk clean
	$(MAKE) -f build/ss2012_quick_check.mk clean
	$(MAKE) -f build/ss2012_outreach.mk clean
	$(MAKE) -f build/ss2012_outreach_closure.mk clean
	$(MAKE) -f build/ss2012_closure_test.mk clean
	$(MAKE) -f build/ss2012_event_list.mk clean
	$(MAKE) -f build/ss2012_event_list_eth.mk clean
	$(MAKE) -f build/ss2012_make_fr_from_hists.mk clean
	$(MAKE) -f build/ss2012_closure_test_eth.mk clean

.PHONY: all clean
