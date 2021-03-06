#include "SignalRegion.h"
#include "AnalysisType.h"
#include "SystematicType.h"
#include "SSB2012.h"
#include <stdexcept>

// inclusive signal regions infos
// ---------------------------------------------------------------------------------------------- //

// high pT, inclusive
const ss::SignalRegionInfo s_HptInclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: # jets #geq 2, # btags #geq 0, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr2",
        // title
        "sr2: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags #geq 0, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: # jets #geq 2, # btags #geq 0, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr6",
        // title
        "sr6: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags #geq 0, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr9",
        // title
        "sr9: not used"
        // latex
        "sr9: not used"
    },
    {
        // name
        "sr10",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: # jets #geq 2, # btags = 1, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr12",
        // title
        "sr12: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: # jets #geq 2, # btags = 1, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr16",
        // title
        "sr16: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr19",
        // title
        "sr19: not used"
        // latex
        "sr19: not used"
    },
    {
        // name
        "sr20",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: # jets #geq 2, # btags #geq 2, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr22",
        // title
        "sr22: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: # jets #geq 2, # btags #geq 2, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr26",
        // title
        "sr26: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>200\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr29",
        // title
        "sr29: not used"
        // latex
        "sr29: not used"
    },
    {
        // name
        "sr30",
        // title
        "SSTop1: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}$"
    },
    {
        // name
        "sr31",
        // title
        "SSTop1++: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, ++",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}, ++$"
    },
    {
        // name
        "sr32",
        // title
        "sr32: # jets #geq 2, # btags #geq 0, H_{T} > 500 GeV, E_{T}^{miss} > 0 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>500\\ \\text{GeV},\\ E_T^{miss}>0\\ \\text{GeV}$"
    },
    {
        // name
        "sr33",
        // title
        "sr33: # jets #geq 2, # btags #geq 2, H_{T} > 500 GeV, E_{T}^{miss} > 0 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>500\\ \\text{GeV},\\ E_T^{miss}>0\\ \\text{GeV}$"
    },
    {
        // name
        "sr34",
        // title
        "SSTop2: # jets #geq 2, # btags = 1, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}$"
    },
    {
        // name
        "sr35",
        // title
        "SSTop2++: # jets #geq 2, # btags = 1, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, ++",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}, ++$"
    }
};

// low pT, inclusive 
const ss::SignalRegionInfo s_LptInclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr2",
        // title
        "sr2: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr6",
        // title
        "sr6: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr9",
        // title
        "sr9: not used"
        // latex
        "sr9: not used"
    },
    {
        // name
        "sr10",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: # jets #geq 2, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr12",
        // title
        "sr12: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: # jets #geq 2, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr16",
        // title
        "sr16: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr19",
        // title
        "sr19: not used"
        // latex
        "sr19: not used"
    },
    {
        // name
        "sr20",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr22",
        // title
        "sr22: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr26",
        // title
        "sr26: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

// very low pT, inclusive (same SRs as low pt)
// const ss::SignalRegionInfo (&s_VptInclSignalRegionInfos)[ss::SignalRegion::static_size] = s_LptInclSignalRegionInfos;
const ss::SignalRegionInfo s_VptInclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr2",
        // title
        "sr2: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr6",
        // title
        "sr6: # jets #geq 2, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags #geq 0, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags #geq 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr9",
        // title
        "sr9: not used"
        // latex
        "sr9: not used"
    },
    {
        // name
        "sr10",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: # jets #geq 2, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr12",
        // title
        "sr12: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: # jets #geq 2, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr16",
        // title
        "sr16: # jets #geq 2, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr19",
        // title
        "sr19: not used"
        // latex
        "sr19: not used"
    },
    {
        // name
        "sr20",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr22",
        // title
        "sr22: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    {
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 50 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>50\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr26",
        // title
        "sr26: # jets #geq 2, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, H_{T} > 250 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>250\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};


// HCP, inclusive
const ss::SignalRegionInfo s_HcpInclSignalRegionInfos[] = 
{
    {
        // name
        "sr0", 
        // ROOT title
        "# jets #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 0 GeV",
        // Latex
        "$\\# jets \\geq 2,\\ H_T > 80\\ \\text{GeV},\\ E_T^{miss} > 0\\ \\text{GeV}$"
    },
    {
        // name
        "sr1", 
        // ROOT title
        "# jets #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV",
        // Latex
        "$\\# jets \\geq 2,\\ H_T > 80\\ \\text{GeV},\\ E_T^{miss} > 30\\ \\text{GeV}$"
    },
    {
        // name
        "sr2", 
        // ROOT title
        "# jets #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, ++",
        // Latex
        "$\\# jets \\geq 2,\\ H_T > 80\\ \\text{GeV},\\ E_T^{miss} > 30\\ \\text{GeV},\\ ++$"
    },
    {
        // name
        "sr3", 
        // ROOT title
        "# jets #geq 4, H_{T} > 200 GeV, E_{T}^{miss} > 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 200\\ \\text{GeV},\\ E_T^{miss} > 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr4", 
        // ROOT title
        "# jets #geq 4, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 200\\ \\text{GeV},\\ E_T^{miss} > 50\\ \\text{GeV}$"
    },
    {
        // name
        "sr5", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, E_{T}^{miss} > 50 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ E_T^{miss} > 50\\ \\text{GeV}$"
    },
    {
        // name
        "sr6", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, E_{T}^{miss} > 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ E_T^{miss} > 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr7", 
        // ROOT title
        "# btags #geq 3, # jets #geq 2, H_{T} > 200 GeV, E_{T}^{miss} > 50 GeV",
        // Latex
        "$\\# btags \\geq 3,\\ \\# jets \\geq 4,\\ H_T > 200\\ \\text{GeV},\\ E_T^{miss} > 50\\ \\text{GeV}$"
    },
    {
        // name
        "sr8", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, E_{T}^{miss} > 0 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ E_T^{miss} > 0\\ \\text{GeV}$"
    },
    {
        // name
        "sr9", 
        // ROOT title
        "# jets #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, --",
        // Latex
        "$\\# jets \\geq 2,\\ H_T > 80\\ \\text{GeV},\\ E_T^{miss} > 30\\ \\text{GeV},\\ --$"
    },
    {"sr10", "not used", "not used"},
    {"sr11", "not used", "not used"},
    {"sr12", "not used", "not used"},
    {"sr13", "not used", "not used"},
    {"sr14", "not used", "not used"},
    {"sr15", "not used", "not used"},
    {"sr16", "not used", "not used"},
    {"sr17", "not used", "not used"},
    {"sr18", "not used", "not used"},
    {"sr19", "not used", "not used"},
    {"sr20", "not used", "not used"},
    {"sr21", "not used", "not used"},
    {"sr22", "not used", "not used"},
    {"sr23", "not used", "not used"},
    {"sr24", "not used", "not used"},
    {"sr25", "not used", "not used"},
    {"sr26", "not used", "not used"},
    {"sr27", "not used", "not used"},
    {"sr28", "not used", "not used"},
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

const ss::SignalRegionInfo s_HiggsinoInclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "baseline: lepton p_{T} #geq 20/10 GeV, #jets #geq 2 (20 GeV)",
        // latex
        "$lepton p_T\\geq20/10 \\text{GeV}, \\#jets\\geq2$"
    },
    {
        // name
        "sr1",
        // title
        "sr1: #jets #geq 2, #btags = 0",
        // latex
        "$\\#jets\\geq2, \\#btags=0$"
    },
    {"sr2" , "not used", "not used"},
    {"sr3" , "not used", "not used"},
    {"sr4" , "not used", "not used"},
    {"sr5" , "not used", "not used"},
    {"sr6" , "not used", "not used"},
    {"sr7" , "not used", "not used"},
    {"sr8" , "not used", "not used"},
    {"sr9" , "not used", "not used"},
    {"sr10", "not used", "not used"},
    {"sr11", "not used", "not used"},
    {"sr12", "not used", "not used"},
    {"sr13", "not used", "not used"},
    {"sr14", "not used", "not used"},
    {"sr15", "not used", "not used"},
    {"sr16", "not used", "not used"},
    {"sr17", "not used", "not used"},
    {"sr18", "not used", "not used"},
    {"sr19", "not used", "not used"},
    {"sr20", "not used", "not used"},
    {"sr21", "not used", "not used"},
    {"sr22", "not used", "not used"},
    {"sr23", "not used", "not used"},
    {"sr24", "not used", "not used"},
    {"sr25", "not used", "not used"},
    {"sr26", "not used", "not used"},
    {"sr27", "not used", "not used"},
    {"sr28", "not used", "not used"},
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

// exclusive signal regions infos
// ---------------------------------------------------------------------------------------------- //

// high pT, exclusive
const ss::SignalRegionInfo s_HptExclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\#btags\\geq 0,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: 2 #leq # jets < 4, # btags = 0, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\#btags\\geq 0,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr2",
        // title
        "sr2: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\#btags\\geq 0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags = 0, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\#btags\\geq 0,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\#btags\\geq 0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: 2 #leq # jets < 4, # btags = 0, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\#btags\\geq 0,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr6",
        // title
        "sr6: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\#btags\\geq 0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags = 0, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\#btags\\geq 0,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\#btags\\geq 0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr9",
        // title
        "sr9: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr10",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: 2 #leq # jets < 4, # btags = 1, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr12",
        // title
        "sr12: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: 2 #leq # jets < 4, # btags = 1, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr16",
        // title
        "sr16: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr19",
        // title
        "sr19: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr20",
        // title
        "high p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq 2,\\ H_T>80\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: 2 #leq # jets < 4, # btags #geq 2, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr22",
        // title
        "sr22: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, 200 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: 2 #leq # jets < 4, # btags #geq 2, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr26",
        // title
        "sr26: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, 200 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 200 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {
        // name
        "sr29",
        // title
        "sr29: not used"
        // latex
        "sr29: not used"
    },
    {
        // name
        "sr30",
        // title
        "SSTop1: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}$"
    },
    {
        // name
        "sr31",
        // title
        "SSTop1++: # jets #geq 2, # btags #geq 2, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, ++",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}, ++$"
    },
    {
        // name
        "sr32",
        // title
        "sr32: # jets #geq 2, # btags #geq 0, H_{T} > 500 GeV, E_{T}^{miss} > 0 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq0,\\ H_T>500\\ \\text{GeV},\\ E_T^{miss}>0\\ \\text{GeV}$"
    },
    {
        // name
        "sr33",
        // title
        "sr33: # jets #geq 2, # btags #geq 2, H_{T} > 500 GeV, E_{T}^{miss} > 0 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq2,\\ H_T>500\\ \\text{GeV},\\ E_T^{miss}>0\\ \\text{GeV}$"
    },
    {
        // name
        "sr34",
        // title
        "SSTop2: # jets #geq 2, # btags = 1, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}$"
    },
    {
        // name
        "sr35",
        // title
        "SSTop2++: # jets #geq 2, # btags = 1, H_{T} > 80 GeV, E_{T}^{miss} > 30 GeV, ++",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>80\\ \\text{GeV},\\ E_T^{miss}>30\\ \\text{GeV}, ++$"
    }
};

// low pT, exclusive
const ss::SignalRegionInfo s_LptExclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags=0,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: 2 #leq # jets < 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr2",
        // title
        "sr2: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: 2 #leq # jets < 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr6",
        // title
        "sr6: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr9",
        // title
        "sr9: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr10",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: 2 #leq # jets < 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr12",
        // title
        "sr12: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: 2 #leq # jets < 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr16",
        // title
        "sr6: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr19",
        // title
        "sr19: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr20",
        // title
        "low p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq 2,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: 2 #leq # jets < 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr22",
        // title
        "sr22: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: 2 #leq # jets < 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr26",
        // title
        "sr6: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

// very low pT, exclusive
// const ss::SignalRegionInfo (&s_VptExclSignalRegionInfos)[ss::SignalRegion::static_size] = s_LptExclSignalRegionInfos;
const ss::SignalRegionInfo s_VptExclSignalRegionInfos[] = 
{
    {
        // name
        "sr0",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags #geq 0, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags=0,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr1",
        // title
        "sr1: 2 #leq # jets < 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr2",
        // title
        "sr2: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr3",
        // title
        "sr3: # jets #geq 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr4",
        // title
        "sr4: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr5",
        // title
        "sr5: 2 #leq # jets < 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr6",
        // title
        "sr6: 2 #leq # jets < 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr7",
        // title
        "sr7: # jets #geq 4, # btags = 0, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr8",
        // title
        "sr8: # jets #geq 4, # btags = 0, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=0,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr9",
        // title
        "sr9: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr10",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags = 1, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags = 1,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr11",
        // title
        "sr11: 2 #leq # jets < 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr12",
        // title
        "sr12: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr13",
        // title
        "sr13: # jets #geq 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr14",
        // title
        "sr14: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr15",
        // title
        "sr15: 2 #leq # jets < 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr16",
        // title
        "sr6: 2 #leq # jets < 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr17",
        // title
        "sr17: # jets #geq 4, # btags = 1, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr18",
        // title
        "sr18: # jets #geq 4, # btags = 1, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags=1,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr19",
        // title
        "sr19: not used", 
        // latex
        "not used"
    },
    {
        // name
        "sr20",
        // title
        "very low p_{T} baseline: # jets #geq 2, # btags #geq 2, H_{T} > 250 GeV (E_{T}^{miss} > 30 GeV if H_{T} < 500 GeV)",
        // latex
        "$\\#jets\\geq2,\\# btags\\geq 2,\\ H_T>250\\ \\text{GeV}\\ (E_T^{miss}>30\\ \\text{GeV}\\ \\text{if} \\ H_T>500\\ \\text{GeV})$"
    },
    { 
        // name
        "sr21",
        // title
        "sr21: 2 #leq # jets < 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr22",
        // title
        "sr22: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr23",
        // title
        "sr23: # jets #geq 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr24",
        // title
        "sr24: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, 50 GeV < E_{T}^{miss} < 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},50\\ \\text{GeV}<E_T^{miss}<120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr25",
        // title
        "sr25: 2 #leq # jets < 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr26",
        // title
        "sr6: 2 #leq # jets < 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} . 120 GeV",
        // latex
        "$2 \\leq #jets<4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr27",
        // title
        "sr27: # jets #geq 4, # btags #geq 2, 250 GeV < H_{T} < 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ 250 \\text{GeV}\\ <H_T<400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    { 
        // name
        "sr28",
        // title
        "sr28: # jets #geq 4, # btags #geq 2, H_{T} > 400 GeV, E_{T}^{miss} > 120 GeV",
        // latex
        "$#jets \\geq 4,\\# btags\\geq 2,\\ H_T>400\\ \\text{GeV},\\ E_T^{miss}>120\\ \\text{GeV}$"
    },
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};


// HCP, exclusive
const ss::SignalRegionInfo s_HcpExclSignalRegionInfos[] = 
{
    {"sr0", "not used", "not used"},
    {
        // name
        "sr1", 
        // ROOT title
        "# jets #geq 4, 200 < H_{T} < 320 GeV, 50 < E_{T}^{miss} < 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ 200 < H_T < 320\\ \\text{GeV},\\ 50 < E_T^{miss} < 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr2", 
        // ROOT title
        "# jets #geq 4, 200 < H_{T} < 320 GeV, E_{T}^{miss} > 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ 200 < H_T < 320\\ \\text{GeV},\\ E_T^{miss} > 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr3", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, 50 < E_{T}^{miss} < 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ 50 < E_T^{miss} < 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr4", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, E_{T}^{miss} > 120 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ E_T^{miss} > 120\\ \\text{GeV}$"
    },
    {
        // name
        "sr5", 
        // ROOT title
        "# jets #geq 4, H_{T} > 320 GeV, E_{T}^{miss} < 50 GeV",
        // Latex
        "$\\# jets \\geq 4,\\ H_T > 320\\ \\text{GeV},\\ E_T^{miss} < 50\\ \\text{GeV}$"
    },
    {"sr6" , "not used", "not used"},
    {"sr7" , "not used", "not used"},
    {"sr8" , "not used", "not used"},
    {"sr9" , "not used", "not used"},
    {"sr10", "not used", "not used"},
    {"sr11", "not used", "not used"},
    {"sr12", "not used", "not used"},
    {"sr13", "not used", "not used"},
    {"sr14", "not used", "not used"},
    {"sr15", "not used", "not used"},
    {"sr16", "not used", "not used"},
    {"sr17", "not used", "not used"},
    {"sr18", "not used", "not used"},
    {"sr19", "not used", "not used"},
    {"sr20", "not used", "not used"},
    {"sr21", "not used", "not used"},
    {"sr22", "not used", "not used"},
    {"sr23", "not used", "not used"},
    {"sr24", "not used", "not used"},
    {"sr25", "not used", "not used"},
    {"sr26", "not used", "not used"},
    {"sr27", "not used", "not used"},
    {"sr28", "not used", "not used"},
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

// HCP, exclusive
const ss::SignalRegionInfo s_HiggsinoExclSignalRegionInfos[] = 
{
    {"sr0", "not used", "not used"},
    {
        // name
        "sr1",
        // title
        "sr1: #jets #geq 2, #btags = 0",
        // latex
        "$\\#jets\\geq2, \\#btags=0$"
    },
    {"sr2" , "not used", "not used"},
    {"sr3" , "not used", "not used"},
    {"sr4" , "not used", "not used"},
    {"sr5" , "not used", "not used"},
    {"sr6" , "not used", "not used"},
    {"sr7" , "not used", "not used"},
    {"sr8" , "not used", "not used"},
    {"sr9" , "not used", "not used"},
    {"sr10", "not used", "not used"},
    {"sr11", "not used", "not used"},
    {"sr12", "not used", "not used"},
    {"sr13", "not used", "not used"},
    {"sr14", "not used", "not used"},
    {"sr15", "not used", "not used"},
    {"sr16", "not used", "not used"},
    {"sr17", "not used", "not used"},
    {"sr18", "not used", "not used"},
    {"sr19", "not used", "not used"},
    {"sr20", "not used", "not used"},
    {"sr21", "not used", "not used"},
    {"sr22", "not used", "not used"},
    {"sr23", "not used", "not used"},
    {"sr24", "not used", "not used"},
    {"sr25", "not used", "not used"},
    {"sr26", "not used", "not used"},
    {"sr27", "not used", "not used"},
    {"sr28", "not used", "not used"},
    {"sr29", "not used", "not used"},
    {"sr30", "not used", "not used"},
    {"sr31", "not used", "not used"},
    {"sr32", "not used", "not used"},
    {"sr33", "not used", "not used"},
    {"sr34", "not used", "not used"},
    {"sr35", "not used", "not used"}
};

// check that the SignalRegionInfoArray is the same size as the enum
// fails at compile time if it does
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
#define STATIC_ASSERT(expr) typedef char my_static_assert[(expr) ? 1 : -1]
STATIC_ASSERT(ARRAY_SIZE(s_HptInclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_LptInclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_VptInclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_HcpInclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_HiggsinoInclSignalRegionInfos) == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_HptExclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_LptExclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_VptExclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_HcpExclSignalRegionInfos)      == ss::SignalRegion::static_size);
STATIC_ASSERT(ARRAY_SIZE(s_HiggsinoExclSignalRegionInfos) == ss::SignalRegion::static_size);

namespace ss
{
    // wrapper function to get the SignalRegionInfo
    SignalRegion::value_type GetSignalRegionFromName
    (
        const std::string& signal_region_name,
        const std::string& analysis_type_name,
        const std::string& signal_region_type_name
    )
    {
        using namespace std;
        const AnalysisType::value_type analysis_type          = GetAnalysisTypeFromName(analysis_type_name); 
        const SignalRegionType::value_type signal_region_type = GetSignalRegionTypeFromName(signal_region_type_name); 
        SignalRegion::value_type signal_region                = SignalRegion::static_size;
        for (size_t i = 0; i != SignalRegion::static_size; i++)
        {
            if (analysis_type==AnalysisType::high_pt && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_HptInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::high_pt_eth && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_HptInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::low_pt && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_LptInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::vlow_pt && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_VptInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::hcp && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_HcpInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::higgsino && signal_region_type==SignalRegionType::inclusive)
            {
                if (string(s_HiggsinoInclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::high_pt && signal_region_type==SignalRegionType::exclusive)
            {
                if (string(s_HptExclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::low_pt && signal_region_type==SignalRegionType::exclusive)
            {
                if (string(s_LptExclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::vlow_pt && signal_region_type==SignalRegionType::exclusive)
            {
                if (string(s_VptExclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::hcp && signal_region_type==SignalRegionType::exclusive)
            {
                if (string(s_HcpExclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
            if (analysis_type==AnalysisType::higgsino && signal_region_type==SignalRegionType::exclusive)
            {
                if (string(s_HiggsinoExclSignalRegionInfos[i].name) == signal_region_name)
                {
                    signal_region = static_cast<SignalRegion::value_type>(i);
                    break;
                }
            }
        }

        // throw if not found
        if (signal_region == SignalRegion::static_size)
        {
            throw std::domain_error(Form("ERROR: ss::GetSignalRegionFromName(): signal_region %s not found!", signal_region_name.c_str()));
        }

        return signal_region; 
    }

    // wrapper function to get the SignalRegionInfo
    SignalRegionInfo GetSignalRegionInfo
    (
        const SignalRegion::value_type& signal_region,
        const AnalysisType::value_type analysis_type,
        const SignalRegionType::value_type& signal_region_type
    )
    {
        if (analysis_type==AnalysisType::high_pt     && signal_region_type==SignalRegionType::inclusive) {return s_HptInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::high_pt_eth && signal_region_type==SignalRegionType::inclusive) {return s_HptInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::low_pt      && signal_region_type==SignalRegionType::inclusive) {return s_LptInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::vlow_pt     && signal_region_type==SignalRegionType::inclusive) {return s_VptInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::hcp         && signal_region_type==SignalRegionType::inclusive) {return s_HcpInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::higgsino    && signal_region_type==SignalRegionType::inclusive) {return s_HiggsinoInclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::high_pt     && signal_region_type==SignalRegionType::exclusive) {return s_HptExclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::low_pt      && signal_region_type==SignalRegionType::exclusive) {return s_LptExclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::vlow_pt     && signal_region_type==SignalRegionType::exclusive) {return s_VptExclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::hcp         && signal_region_type==SignalRegionType::exclusive) {return s_HcpExclSignalRegionInfos[signal_region];}
        if (analysis_type==AnalysisType::higgsino    && signal_region_type==SignalRegionType::exclusive) {return s_HiggsinoExclSignalRegionInfos[signal_region];}

        // if we get here, then the arguments were out of bounds
        throw std::domain_error("ERROR: ss::GetSignalRegionInfo(): arguments out of bounds!");
    }

    SignalRegionInfo GetSignalRegionInfo
    (
        const std::string& signal_region_name,
        const std::string& analysis_type_name,
        const std::string& signal_region_type_name
    )
    {
        const AnalysisType::value_type analysis_type          = GetAnalysisTypeFromName(analysis_type_name); 
        const SignalRegionType::value_type signal_region_type = GetSignalRegionTypeFromName(signal_region_type_name); 
        const SignalRegion::value_type signal_region          = GetSignalRegionFromName(signal_region_name, analysis_type_name, signal_region_type_name); 
        return GetSignalRegionInfo(signal_region, analysis_type, signal_region_type); 
    }

    // passes signal region
    bool PassesSignalRegion
    (
        const float met,
        const float ht,
        const int njets,
        const int nbtags,
        const float l1_pt,
        const float l2_pt,
        const int l1_id,
        const int l2_id,
        const SignalRegion::value_type& signal_region,
        const AnalysisType::value_type& anal_type,
        const SignalRegionType::value_type& signal_region_type
    )
    {
        switch(anal_type)
        {
            case AnalysisType::high_pt:
                if (l1_pt < 20.0) return false;
                if (l2_pt < 20.0) return false;
                break;
            case AnalysisType::high_pt_eth:
                if (l1_pt < 20.0) return false;
                if (l2_pt < 20.0) return false;
                break;
            case AnalysisType::hcp:
                if (l1_pt < 20.0) return false;
                if (l2_pt < 20.0) return false;
                break;
            case AnalysisType::low_pt:
                if (l1_pt < 10.0) return false;
                if (l2_pt < 10.0) return false;
                break;
            case AnalysisType::vlow_pt:
                if (l1_pt < (l1_id==11 ? 10.0 : 5.0)) return false;
                if (l2_pt < (l2_id==11 ? 10.0 : 5.0)) return false;
                break;
            case AnalysisType::higgsino:
                if (std::max(l1_pt, l2_pt) < 20.0) return false;
                if (std::min(l1_pt, l2_pt) < 10.0) return false;
                break;
            default:
                return false;
        }

        // high pt
        if (anal_type==AnalysisType::high_pt_eth || anal_type==AnalysisType::high_pt)
        {
            const float met_cut = (ht < 500.0 ? 30.0 : 0.0); 
            const bool baseline = (njets>=2 && ht>=80.0 && met>met_cut);

            if (signal_region_type==SignalRegionType::inclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (baseline);
                    case SignalRegion::sr1 : return (baseline && nbtags>=0 && njets>=2 && ht>200 && met>50 );
                    case SignalRegion::sr2 : return (baseline && nbtags>=0 && njets>=2 && ht>400 && met>50 );
                    case SignalRegion::sr3 : return (baseline && nbtags>=0 && njets>=4 && ht>200 && met>50 );
                    case SignalRegion::sr4 : return (baseline && nbtags>=0 && njets>=4 && ht>400 && met>50 );
                    case SignalRegion::sr5 : return (baseline && nbtags>=0 && njets>=2 && ht>200 && met>120);
                    case SignalRegion::sr6 : return (baseline && nbtags>=0 && njets>=2 && ht>400 && met>120);
                    case SignalRegion::sr7 : return (baseline && nbtags>=0 && njets>=4 && ht>200 && met>120);
                    case SignalRegion::sr8 : return (baseline && nbtags>=0 && njets>=4 && ht>400 && met>120);
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (baseline && nbtags==1);
                    case SignalRegion::sr11: return (baseline && nbtags==1 && njets>=2 && ht>200 && met>50 );
                    case SignalRegion::sr12: return (baseline && nbtags==1 && njets>=2 && ht>400 && met>50 );
                    case SignalRegion::sr13: return (baseline && nbtags==1 && njets>=4 && ht>200 && met>50 );
                    case SignalRegion::sr14: return (baseline && nbtags==1 && njets>=4 && ht>400 && met>50 );
                    case SignalRegion::sr15: return (baseline && nbtags==1 && njets>=2 && ht>200 && met>120);
                    case SignalRegion::sr16: return (baseline && nbtags==1 && njets>=2 && ht>400 && met>120);
                    case SignalRegion::sr17: return (baseline && nbtags==1 && njets>=4 && ht>200 && met>120);
                    case SignalRegion::sr18: return (baseline && nbtags==1 && njets>=4 && ht>400 && met>120);
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (baseline && nbtags>=2);
                    case SignalRegion::sr21: return (baseline && nbtags>=2 && njets>=2 && ht>200 && met>50 );
                    case SignalRegion::sr22: return (baseline && nbtags>=2 && njets>=2 && ht>400 && met>50 );
                    case SignalRegion::sr23: return (baseline && nbtags>=2 && njets>=4 && ht>200 && met>50 );
                    case SignalRegion::sr24: return (baseline && nbtags>=2 && njets>=4 && ht>400 && met>50 );
                    case SignalRegion::sr25: return (baseline && nbtags>=2 && njets>=2 && ht>200 && met>120);
                    case SignalRegion::sr26: return (baseline && nbtags>=2 && njets>=2 && ht>400 && met>120);
                    case SignalRegion::sr27: return (baseline && nbtags>=2 && njets>=4 && ht>200 && met>120);
                    case SignalRegion::sr28: return (baseline && nbtags>=2 && njets>=4 && ht>400 && met>120);
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (njets>=2 && nbtags>=2 && ht>80  && met>30                );
                    case SignalRegion::sr31: return (njets>=2 && nbtags>=2 && ht>80  && met>30 && ssb::is_pp());
                    case SignalRegion::sr32: return (njets>=2 && nbtags>=0 && ht>500 && met>0                 );
                    case SignalRegion::sr33: return (njets>=2 && nbtags>=2 && ht>500 && met>0                 );
                    case SignalRegion::sr34: return (njets>=2 && nbtags==1 && ht>80  && met>30                );
                    case SignalRegion::sr35: return (njets>=2 && nbtags==1 && ht>80  && met>30 && ssb::is_pp() );
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
            if (signal_region_type==SignalRegionType::exclusive)
            {  
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (baseline);
                    case SignalRegion::sr1 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr2 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr3 : return (baseline && nbtags==0 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr4 : return (baseline && nbtags==0 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr5 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr6 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr7 : return (baseline && nbtags==0 && (njets >= 4             ) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr8 : return (baseline && nbtags==0 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (baseline && nbtags==1);
                    case SignalRegion::sr11: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr12: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr13: return (baseline && nbtags==1 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr14: return (baseline && nbtags==1 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr15: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr16: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr17: return (baseline && nbtags==1 && (njets >= 4             ) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr18: return (baseline && nbtags==1 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (baseline && nbtags>=2);
                    case SignalRegion::sr21: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr22: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr23: return (baseline && nbtags>=2 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr24: return (baseline && nbtags>=2 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr25: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr26: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr27: return (baseline && nbtags>=2 && (njets >= 4             ) && (200 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr28: return (baseline && nbtags>=2 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (njets>=2 && nbtags>=2 && ht>80  && met>30                );
                    case SignalRegion::sr31: return (njets>=2 && nbtags>=2 && ht>80  && met>30 && ssb::is_pp());
                    case SignalRegion::sr32: return (njets>=2 && nbtags>=0 && ht>500 && met>0                 );
                    case SignalRegion::sr33: return (njets>=2 && nbtags>=2 && ht>500 && met>0                 );
                    case SignalRegion::sr34: return (njets>=2 && nbtags==1 && ht>80  && met>30                );
                    case SignalRegion::sr35: return (njets>=2 && nbtags==1 && ht>80  && met>30 && ssb::is_pp() );
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
            return false;
        }
        // low pt (or very low)
        if (anal_type==AnalysisType::low_pt || anal_type==AnalysisType::vlow_pt)
        {
            const float met_cut = (ht < 500.0 ? 30.0 : 0.0); 
            const bool baseline = (njets>=2 && ht>=250.0 && met>met_cut);

            if (signal_region_type==SignalRegionType::inclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (baseline);
                    case SignalRegion::sr1 : return (baseline && njets>=2 && nbtags>=0 && ht>250 && met>50 );
                    case SignalRegion::sr2 : return (baseline && njets>=2 && nbtags>=0 && ht>400 && met>50 );
                    case SignalRegion::sr3 : return (baseline && njets>=4 && nbtags>=0 && ht>250 && met>50 );
                    case SignalRegion::sr4 : return (baseline && njets>=4 && nbtags>=0 && ht>400 && met>50 );
                    case SignalRegion::sr5 : return (baseline && njets>=2 && nbtags>=0 && ht>250 && met>120);
                    case SignalRegion::sr6 : return (baseline && njets>=2 && nbtags>=0 && ht>400 && met>120);
                    case SignalRegion::sr7 : return (baseline && njets>=4 && nbtags>=0 && ht>250 && met>120);
                    case SignalRegion::sr8 : return (baseline && njets>=4 && nbtags>=0 && ht>400 && met>120);
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (baseline && nbtags>=1);
                    case SignalRegion::sr11: return (baseline && njets>=2 && nbtags==1 && ht>250 && met>50 );
                    case SignalRegion::sr12: return (baseline && njets>=2 && nbtags==1 && ht>400 && met>50 );
                    case SignalRegion::sr13: return (baseline && njets>=4 && nbtags==1 && ht>250 && met>50 );
                    case SignalRegion::sr14: return (baseline && njets>=4 && nbtags==1 && ht>400 && met>50 );
                    case SignalRegion::sr15: return (baseline && njets>=2 && nbtags==1 && ht>250 && met>120);
                    case SignalRegion::sr16: return (baseline && njets>=2 && nbtags==1 && ht>400 && met>120);
                    case SignalRegion::sr17: return (baseline && njets>=4 && nbtags==1 && ht>250 && met>120);
                    case SignalRegion::sr18: return (baseline && njets>=4 && nbtags==1 && ht>400 && met>120);
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (baseline && nbtags>=2);
                    case SignalRegion::sr21: return (baseline && njets>=2 && nbtags>=2 && ht>250 && met>50 );
                    case SignalRegion::sr22: return (baseline && njets>=2 && nbtags>=2 && ht>400 && met>50 );
                    case SignalRegion::sr23: return (baseline && njets>=4 && nbtags>=2 && ht>250 && met>50 );
                    case SignalRegion::sr24: return (baseline && njets>=4 && nbtags>=2 && ht>400 && met>50 );
                    case SignalRegion::sr25: return (baseline && njets>=2 && nbtags>=2 && ht>250 && met>120);
                    case SignalRegion::sr26: return (baseline && njets>=2 && nbtags>=2 && ht>400 && met>120);
                    case SignalRegion::sr27: return (baseline && njets>=4 && nbtags>=2 && ht>250 && met>120);
                    case SignalRegion::sr28: return (baseline && njets>=4 && nbtags>=2 && ht>400 && met>120);
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
            if (signal_region_type==SignalRegionType::exclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (baseline);
                    case SignalRegion::sr1 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr2 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr3 : return (baseline && nbtags==0 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr4 : return (baseline && nbtags==0 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr5 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr6 : return (baseline && nbtags==0 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr7 : return (baseline && nbtags==0 && (njets >= 4             ) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr8 : return (baseline && nbtags==0 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (baseline && nbtags==1);
                    case SignalRegion::sr11: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr12: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr13: return (baseline && nbtags==1 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr14: return (baseline && nbtags==1 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr15: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr16: return (baseline && nbtags==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr17: return (baseline && nbtags==1 && (njets >= 4             ) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr18: return (baseline && nbtags==1 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (baseline && nbtags>=2);
                    case SignalRegion::sr21: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr22: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr23: return (baseline && nbtags>=2 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < met && met < 120));
                    case SignalRegion::sr24: return (baseline && nbtags>=2 && (njets >= 4             ) && (ht > 400            ) && (50 < met && met < 120));
                    case SignalRegion::sr25: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr26: return (baseline && nbtags>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr27: return (baseline && nbtags>=2 && (njets >= 4             ) && (250 < ht && ht < 400) && (met > 120            ));
                    case SignalRegion::sr28: return (baseline && nbtags>=2 && (njets >= 4             ) && (ht > 400            ) && (met > 120            ));
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
        }

        if (anal_type==AnalysisType::hcp)
        {
            if (signal_region_type==SignalRegionType::inclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (nbtags >= 2 && njets>= 2 && ht > 80  && met > 0  );
                    case SignalRegion::sr1 : return (nbtags >= 2 && njets>= 2 && ht > 80  && met > 30 );
                    case SignalRegion::sr2 : return (nbtags >= 2 && njets>= 2 && ht > 80  && met > 30 && ssb::is_pp());
                    case SignalRegion::sr3 : return (nbtags >= 2 && njets>= 4 && ht > 200 && met > 120);
                    case SignalRegion::sr4 : return (nbtags >= 2 && njets>= 4 && ht > 200 && met > 50 );
                    case SignalRegion::sr5 : return (nbtags >= 2 && njets>= 4 && ht > 320 && met > 50 );
                    case SignalRegion::sr6 : return (nbtags >= 2 && njets>= 4 && ht > 320 && met > 120);
                    case SignalRegion::sr7 : return (nbtags >= 2 && njets>= 2 && ht > 200 && met > 50);
                    case SignalRegion::sr8 : return (nbtags >= 2 && njets>= 4 && ht > 320 && met > 0  );
                    case SignalRegion::sr9 : return (nbtags >= 2 && njets>= 2 && ht > 80  && met > 30 && ssb::is_mm());
                    case SignalRegion::sr10: return (false); // not used --> default is to fail
                    case SignalRegion::sr11: return (false); // not used --> default is to fail
                    case SignalRegion::sr12: return (false); // not used --> default is to fail
                    case SignalRegion::sr13: return (false); // not used --> default is to fail
                    case SignalRegion::sr14: return (false); // not used --> default is to fail
                    case SignalRegion::sr15: return (false); // not used --> default is to fail
                    case SignalRegion::sr16: return (false); // not used --> default is to fail
                    case SignalRegion::sr17: return (false); // not used --> default is to fail
                    case SignalRegion::sr18: return (false); // not used --> default is to fail
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (false); // not used --> default is to fail
                    case SignalRegion::sr21: return (false); // not used --> default is to fail
                    case SignalRegion::sr22: return (false); // not used --> default is to fail
                    case SignalRegion::sr23: return (false); // not used --> default is to fail
                    case SignalRegion::sr24: return (false); // not used --> default is to fail
                    case SignalRegion::sr25: return (false); // not used --> default is to fail
                    case SignalRegion::sr26: return (false); // not used --> default is to fail
                    case SignalRegion::sr27: return (false); // not used --> default is to fail
                    case SignalRegion::sr28: return (false); // not used --> default is to fail
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                }
            }
            if (signal_region_type==SignalRegionType::exclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (false); // not used --> default is to fail
                    case SignalRegion::sr1 : return (nbtags >= 2 && njets >= 4 && (200 < ht && ht < 320) && (50 < met && met < 120));
                    case SignalRegion::sr2 : return (nbtags >= 2 && njets >= 4 && (200 < ht && ht < 320) && (met > 120            ));
                    case SignalRegion::sr3 : return (nbtags >= 2 && njets >= 4 && (ht > 320            ) && (50 < met && met < 120));
                    case SignalRegion::sr4 : return (nbtags >= 2 && njets >= 4 && (ht > 320            ) && (met > 120            ));
                    case SignalRegion::sr5 : return (nbtags >= 2 && njets >= 4 && (ht > 320            ) && (0  < met && met < 50 ));
                    case SignalRegion::sr6 : return (false); // not used --> default is to fail
                    case SignalRegion::sr7 : return (false); // not used --> default is to fail
                    case SignalRegion::sr8 : return (false); // not used --> default is to fail
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (false); // not used --> default is to fail
                    case SignalRegion::sr11: return (false); // not used --> default is to fail
                    case SignalRegion::sr12: return (false); // not used --> default is to fail
                    case SignalRegion::sr13: return (false); // not used --> default is to fail
                    case SignalRegion::sr14: return (false); // not used --> default is to fail
                    case SignalRegion::sr15: return (false); // not used --> default is to fail
                    case SignalRegion::sr16: return (false); // not used --> default is to fail
                    case SignalRegion::sr17: return (false); // not used --> default is to fail
                    case SignalRegion::sr18: return (false); // not used --> default is to fail
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (false); // not used --> default is to fail
                    case SignalRegion::sr21: return (false); // not used --> default is to fail
                    case SignalRegion::sr22: return (false); // not used --> default is to fail
                    case SignalRegion::sr23: return (false); // not used --> default is to fail
                    case SignalRegion::sr24: return (false); // not used --> default is to fail
                    case SignalRegion::sr25: return (false); // not used --> default is to fail
                    case SignalRegion::sr26: return (false); // not used --> default is to fail
                    case SignalRegion::sr27: return (false); // not used --> default is to fail
                    case SignalRegion::sr28: return (false); // not used --> default is to fail
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                }
            }
            return false;
        }
        if (anal_type==AnalysisType::higgsino)
        {
            const bool baseline = (ssb::njets_pt30()>=2);
            if (signal_region_type==SignalRegionType::inclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (baseline);
                    case SignalRegion::sr1 : return (baseline && ssb::nbtags_pt30() == 0);
                    case SignalRegion::sr2 : return (false); // not used --> default is to fail
                    case SignalRegion::sr3 : return (false); // not used --> default is to fail
                    case SignalRegion::sr4 : return (false); // not used --> default is to fail
                    case SignalRegion::sr5 : return (false); // not used --> default is to fail
                    case SignalRegion::sr6 : return (false); // not used --> default is to fail
                    case SignalRegion::sr7 : return (false); // not used --> default is to fail
                    case SignalRegion::sr8 : return (false); // not used --> default is to fail
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (false); // not used --> default is to fail
                    case SignalRegion::sr11: return (false); // not used --> default is to fail
                    case SignalRegion::sr12: return (false); // not used --> default is to fail
                    case SignalRegion::sr13: return (false); // not used --> default is to fail
                    case SignalRegion::sr14: return (false); // not used --> default is to fail
                    case SignalRegion::sr15: return (false); // not used --> default is to fail
                    case SignalRegion::sr16: return (false); // not used --> default is to fail
                    case SignalRegion::sr17: return (false); // not used --> default is to fail
                    case SignalRegion::sr18: return (false); // not used --> default is to fail
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (false); // not used --> default is to fail
                    case SignalRegion::sr21: return (false); // not used --> default is to fail
                    case SignalRegion::sr22: return (false); // not used --> default is to fail
                    case SignalRegion::sr23: return (false); // not used --> default is to fail
                    case SignalRegion::sr24: return (false); // not used --> default is to fail
                    case SignalRegion::sr25: return (false); // not used --> default is to fail
                    case SignalRegion::sr26: return (false); // not used --> default is to fail
                    case SignalRegion::sr27: return (false); // not used --> default is to fail
                    case SignalRegion::sr28: return (false); // not used --> default is to fail
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
            if (signal_region_type==SignalRegionType::exclusive)
            {
                switch (signal_region)
                {
                    case SignalRegion::sr0 : return (false); // not used --> default is to fail
                    case SignalRegion::sr1 : return (baseline);
                    case SignalRegion::sr2 : return (false); // not used --> default is to fail
                    case SignalRegion::sr3 : return (false); // not used --> default is to fail
                    case SignalRegion::sr4 : return (false); // not used --> default is to fail
                    case SignalRegion::sr5 : return (false); // not used --> default is to fail
                    case SignalRegion::sr6 : return (false); // not used --> default is to fail
                    case SignalRegion::sr7 : return (false); // not used --> default is to fail
                    case SignalRegion::sr8 : return (false); // not used --> default is to fail
                    case SignalRegion::sr9 : return (false); // not used --> default is to fail
                    case SignalRegion::sr10: return (false); // not used --> default is to fail
                    case SignalRegion::sr11: return (false); // not used --> default is to fail
                    case SignalRegion::sr12: return (false); // not used --> default is to fail
                    case SignalRegion::sr13: return (false); // not used --> default is to fail
                    case SignalRegion::sr14: return (false); // not used --> default is to fail
                    case SignalRegion::sr15: return (false); // not used --> default is to fail
                    case SignalRegion::sr16: return (false); // not used --> default is to fail
                    case SignalRegion::sr17: return (false); // not used --> default is to fail
                    case SignalRegion::sr18: return (false); // not used --> default is to fail
                    case SignalRegion::sr19: return (false); // not used --> default is to fail
                    case SignalRegion::sr20: return (false); // not used --> default is to fail
                    case SignalRegion::sr21: return (false); // not used --> default is to fail
                    case SignalRegion::sr22: return (false); // not used --> default is to fail
                    case SignalRegion::sr23: return (false); // not used --> default is to fail
                    case SignalRegion::sr24: return (false); // not used --> default is to fail
                    case SignalRegion::sr25: return (false); // not used --> default is to fail
                    case SignalRegion::sr26: return (false); // not used --> default is to fail
                    case SignalRegion::sr27: return (false); // not used --> default is to fail
                    case SignalRegion::sr28: return (false); // not used --> default is to fail
                    case SignalRegion::sr29: return (false); // not used --> default is to fail
                    case SignalRegion::sr30: return (false); // not used --> default is to fail
                    case SignalRegion::sr31: return (false); // not used --> default is to fail
                    case SignalRegion::sr32: return (false); // not used --> default is to fail
                    case SignalRegion::sr33: return (false); // not used --> default is to fail
                    case SignalRegion::sr34: return (false); // not used --> default is to fail
                    case SignalRegion::sr35: return (false); // not used --> default is to fail
                    case SignalRegion::static_size: {throw std::domain_error("ERROR: ss::PassesSignalRegion(): argument out of bounds!");}
                };
            }
            return false;
        }

        return false;
    }

    // passes signal region
    bool PassesSignalRegion
    (
        const SignalRegion::value_type& signal_region,
        const AnalysisType::value_type& anal_type,
        const SignalRegionType::value_type& signal_region_type,
        const bool do_beff_sf,
        const SystematicType::value_type& syst_type,
        const at::Sample::value_type sample,
        const bool is_fast_sim
    )
    {
        // lepton pt cuts
        const unsigned int l1_id = abs(ssb::lep1_pdgid());
        const unsigned int l2_id = abs(ssb::lep2_pdgid());
        const float l1_pt        = ssb::lep1_p4().pt();
        const float l2_pt        = ssb::lep2_p4().pt();

        // kinematic variables that define the signal region
        float met   = -999999;
        float ht    = -999999;
        int nbtags  = -999999;
        int njets   = -999999;
        ss::GetReweightedKinematicVariables(met, ht, njets, nbtags, do_beff_sf, syst_type);

        // call main fucntion with this ht/met/njets/nbtags
        return PassesSignalRegion(met, ht, njets, nbtags, l1_pt, l2_pt, l1_id, l2_id, signal_region, anal_type, signal_region_type);
    }

    // set aliases for TTree
    void SetSignalRegionAliases(TTree& tree, const AnalysisType::value_type& anal_type, const bool do_btag_sf)
    {
        // for scans
        tree.SetScanField(0);

        // kinematic variable aliases
        tree.SetAlias("l1_id"  , "lep1_pdgid"                 ); 
        tree.SetAlias("l1_num" , "lep1_is_num"                ); 
        tree.SetAlias("l1_fo"  , "lep1_is_fo"                 ); 
        tree.SetAlias("l1_pt"  , "lep1_p4.pt()"               ); 
        tree.SetAlias("l1_eta" , "lep1_p4.eta()"              ); 
        tree.SetAlias("l1_aeta", "fabs(lep1_p4.eta())"        ); 
        tree.SetAlias("l1_d0"  , "fabs(lep1_d0)"              ); 
        tree.SetAlias("l1_dz"  , "fabs(lep1_dz)"              ); 
        tree.SetAlias("fr1"    , "lep1_wfr/(1.0-lep1_wfr)"    ); 
        tree.SetAlias("fl1"    , "lep1_wflip/(1.0-lep1_wflip)"); 

        tree.SetAlias("l2_id"  , "lep2_pdgid"                 ); 
        tree.SetAlias("l2_num" , "lep2_is_num"                ); 
        tree.SetAlias("l2_fo"  , "lep2_is_fo"                 ); 
        tree.SetAlias("l2_pt"  , "lep2_p4.pt()"               ); 
        tree.SetAlias("l2_eta" , "lep2_p4.eta()"              ); 
        tree.SetAlias("l2_aeta", "fabs(lep2_p4.eta())"        ); 
        tree.SetAlias("l2_d0"  , "fabs(lep2_d0)"              ); 
        tree.SetAlias("fr2"    , "lep1_wfr/(1.0-lep2_wfr)"    ); 
        tree.SetAlias("fl2"    , "lep2_wflip/(1.0-lep2_wflip)"); 
        tree.SetAlias("l2_dz"  , "fabs(lep2_dz)"              ); 

        // truth matched
        tree.SetAlias("is_ss_mc3"   , "lep1_mc3id*lep2_mc3id>0"             );
        tree.SetAlias("lep_is_fromw", "lep1_is_fromw==1 && lep2_is_fromw==1");
        tree.SetAlias("mc_matched"  , "is_ss_mc3 && lep_is_fromw"           );

        // fake rates
        tree.SetAlias("sfw", "l1_fo*fr1 + l2_fo*fr2");
        tree.SetAlias("dfw", "fr1*fr2");

        // scale factors
        tree.SetAlias("sf", "sf_dileptrig*sf_dilepeff");

        // 3lep veto 
        tree.SetAlias("3lep_veto", "passes_3lep_veto");

        // do btag scale factor
        if (do_btag_sf)
        {
            tree.SetAlias("nbs"  , "nbtags_reweighted"     );
            tree.SetAlias("nbs30", "nbtags_reweighted_pt30");
        }
        else
        {
            tree.SetAlias("nbs"  , "nbtags"     );
            tree.SetAlias("nbs30", "nbtags_pt30");
        }

        // lepton cuts
        switch (anal_type)
        {
            case AnalysisType::high_pt:
                tree.SetAlias("lep_pt", "lep1_p4.pt()>20 && lep2_p4.pt()>20");
                break;
            case AnalysisType::high_pt_eth:
                tree.SetAlias("lep_pt", "lep1_p4.pt()>20 && lep2_p4.pt()>20");
                break;
            case AnalysisType::hcp:
                tree.SetAlias("lep_pt", "lep1_p4.pt()>20 && lep2_p4.pt()>20");
                break;
            case AnalysisType::low_pt:
                tree.SetAlias("lep_pt", "lep1_p4.pt()>10 && lep2_p4.pt()>10");
                break;
            case AnalysisType::vlow_pt:
                tree.SetAlias("lep_pt", "(abs(lep1_pdgid)==11 ? lep1_p4.pt()>10 : lep1_p4.pt()>5) && (abs(lep2_pdgid)==11 ? lep2_p4.pt()>10 : lep2_p4.pt()>5)");
                break;
            case AnalysisType::higgsino:
                tree.SetAlias("lep_pt", "max(lep1_p4.pt(),lep2_p4.pt())>20 && min(lep1_p4.pt(),lep2_p4.pt())>10");
                break;
            case AnalysisType::static_size:
                /*do nothing*/
                break;
        }
        tree.SetAlias("l1_d0_cut", "(l1_id==11 ? 0.01 : 0.005)"); 
        tree.SetAlias("l2_d0_cut", "(l2_id==11 ? 0.01 : 0.005)"); 
        tree.SetAlias("lep_d0", "((is_ss || is_os) && (l1_d0<l1_d0_cut) && (l2_d0_cut)) || ((is_sf) && (l1_num ? l1_d0<l1_d0_cut : l2_d0<l2_d0_cut)");

        // trigger
        switch (anal_type)
        {
            case AnalysisType::high_pt:
                tree.SetAlias("trig", "((em && trig_em) || (mm && trig_mm) || (ee && trig_ee))");
                break;
            case AnalysisType::high_pt_eth:
                tree.SetAlias("trig", "((em && trig_em) || (mm && trig_mm) || (ee && trig_ee))");
                break;
            case AnalysisType::higgsino:
                tree.SetAlias("trig", "((em && trig_em) || (mm && trig_mm) || (ee && trig_ee))");
                break;
            case AnalysisType::hcp:
                tree.SetAlias("trig", "((em && trig_em) || (mm && trig_mm) || (ee && trig_ee))");
                break;
            case AnalysisType::low_pt:
                tree.SetAlias("trig", "((em && (trig_em_mu8_el8_id_m8_pfnopuht175 || trig_em_mu8_el8_id_m8_pfht175)) || "
                                      "(mm && (trig_mm_dmu8_m8_pfnopuht175 || trig_mm_dmu8_m8_pfht175)) || "
                                      "(ee && (trig_ee_del8_id_m8_pfnopuht175 || trig_ee_del8_id_m8_pfht175)))"); 
                break;
            case AnalysisType::vlow_pt:
                tree.SetAlias("trig", "((em && (trig_em_riso1p0mu5_el8_id_m8_pfnopuht175 || trig_em_riso1p0mu5_el8_id_m8_pfht175)) || "
                                      "(mm && (trig_mm_dreliso1p0mu5_m8_pfnopuht175 || trig_mm_dreliso1p0mu5_m8_pfht175)) || "
                                      "(ee && (trig_ee_del8_id_m8_pfnopuht175 || trig_ee_del8_id_m8_pfht175)))"); 
                break;
            case AnalysisType::static_size:
                /*do nothing*/
                break;
        }

        // inclusive
        switch (anal_type)
        {
            case AnalysisType::high_pt:
            case AnalysisType::high_pt_eth:
                tree.SetAlias("sr0" , " nbs>=0 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : 1)"      ); 
                tree.SetAlias("sr1" , " nbs==0 && njets>=2 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr2" , " nbs==0 && njets>=2 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr3" , " nbs==0 && njets>=4 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr4" , " nbs==0 && njets>=4 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr5" , " nbs==0 && njets>=2 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr6" , " nbs==0 && njets>=2 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr7" , " nbs==0 && njets>=4 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr8" , " nbs==0 && njets>=4 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr9" , "1==0"                                                               ); 
                tree.SetAlias("sr10", " nbs==1 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : 1)"      ); 
                tree.SetAlias("sr11", " nbs==1 && njets>=2 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr12", " nbs==1 && njets>=2 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr13", " nbs==1 && njets>=4 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr14", " nbs==1 && njets>=4 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr15", " nbs==1 && njets>=2 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr16", " nbs==1 && njets>=2 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr17", " nbs==1 && njets>=4 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr18", " nbs==1 && njets>=4 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr19", "1==0"                                                               ); 
                tree.SetAlias("sr20", " nbs>=2 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : 1)"      ); 
                tree.SetAlias("sr21", " nbs>=2 && njets>=2 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr22", " nbs>=2 && njets>=2 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr23", " nbs>=2 && njets>=4 && ht > 200 && pfmet > 50"                      ); 
                tree.SetAlias("sr24", " nbs>=2 && njets>=4 && ht > 400 && pfmet > 50"                      ); 
                tree.SetAlias("sr25", " nbs>=2 && njets>=2 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr26", " nbs>=2 && njets>=2 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr27", " nbs>=2 && njets>=4 && ht > 200 && pfmet > 120"                     ); 
                tree.SetAlias("sr28", " nbs>=2 && njets>=4 && ht > 400 && pfmet > 120"                     ); 
                tree.SetAlias("sr29" , "(0==1)"                                                            ); 
                tree.SetAlias("sr30" , " (nbs>=2 && (njets >= 2) && (ht > 80 ) && (pfmet >= 30))"          ); 
                tree.SetAlias("sr31" , " (nbs>=2 && (njets >= 2) && (ht > 80 ) && (pfmet >= 30) && is_pp)" ); 
                tree.SetAlias("sr32" , " (nbs>=0 && (njets >= 2) && (ht > 500) && (pfmet >= 0 ))"          ); 
                tree.SetAlias("sr33" , " (nbs>=2 && (njets >= 2) && (ht > 500) && (pfmet >= 0 ))"          ); 
                tree.SetAlias("sr34" , " (nbs>=1 && (njets >= 2) && (ht > 80 ) && (pfmet >= 30))"          ); 
                tree.SetAlias("sr35" , " (nbs>=1 && (njets >= 2) && (ht > 80 ) && (pfmet >= 30) && is_pp)" ); 
                break;
            case AnalysisType::low_pt:
            case AnalysisType::vlow_pt:
                tree.SetAlias("sr0" , " nbs>=0 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : 1)"); 
                tree.SetAlias("sr1" , " nbs>=0 && njets>=2 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr2" , " nbs>=0 && njets>=2 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr3" , " nbs>=0 && njets>=4 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr4" , " nbs>=0 && njets>=4 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr5" , " nbs>=0 && njets>=2 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr6" , " nbs>=0 && njets>=2 && ht > 400 && pfmet > 120"                ); 
                tree.SetAlias("sr7" , " nbs>=0 && njets>=4 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr8" , " nbs>=0 && njets>=4 && ht > 400 && pfmet > 120"                ); 
                tree.SetAlias("sr9" , "1==0"                                                          ); 
                tree.SetAlias("sr10", " nbs==1 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : 1)"); 
                tree.SetAlias("sr11", " nbs==1 && njets>=2 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr12", " nbs==1 && njets>=2 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr13", " nbs==1 && njets>=4 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr14", " nbs==1 && njets>=4 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr15", " nbs==1 && njets>=2 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr16", " nbs==1 && njets>=2 && ht > 400 && pfmet > 120"                ); 
                tree.SetAlias("sr17", " nbs==1 && njets>=4 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr18", " nbs==1 && njets>=4 && ht > 400 && pfmet > 120"                ); 
                tree.SetAlias("sr19", "0==1"                                                          ); 
                tree.SetAlias("sr20", " nbs>=2 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : 1)"); 
                tree.SetAlias("sr21", " nbs>=2 && njets>=2 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr22", " nbs>=2 && njets>=2 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr23", " nbs>=2 && njets>=4 && ht > 250 && pfmet > 50"                 ); 
                tree.SetAlias("sr24", " nbs>=2 && njets>=4 && ht > 400 && pfmet > 50"                 ); 
                tree.SetAlias("sr25", " nbs>=2 && njets>=2 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr26", " nbs>=2 && njets>=2 && ht > 400 && pfmet > 120"                ); 
                tree.SetAlias("sr27", " nbs>=2 && njets>=4 && ht > 250 && pfmet > 120"                ); 
                tree.SetAlias("sr28", " nbs>=2 && njets>=4 && ht > 400 && pfmet > 120"                ); 
                break;
            case AnalysisType::hcp:
                tree.SetAlias("sr0", " nbs>=0 && njets>=2 && ht > 80   && pfmet > 0"           ); 
                tree.SetAlias("sr1", " nbs>=0 && njets>=2 && ht > 80   && pfmet > 30"          ); 
                tree.SetAlias("sr2", " nbs>=0 && njets>=2 && ht > 80   && pfmet > 30 && is_pp" ); 
                tree.SetAlias("sr3", " nbs>=0 && njets>=4 && ht > 200  && pfmet > 120"         ); 
                tree.SetAlias("sr4", " nbs>=0 && njets>=4 && ht > 200  && pfmet > 50"          ); 
                tree.SetAlias("sr5", " nbs>=0 && njets>=4 && ht > 320  && pfmet > 50"          ); 
                tree.SetAlias("sr6", " nbs>=0 && njets>=4 && ht > 320  && pfmet > 120"         ); 
                tree.SetAlias("sr7", " nbs>=0 && njets>=2 && ht > 200  && pfmet > 50"          ); 
                tree.SetAlias("sr8", " nbs>=0 && njets>=4 && ht > 320"                         ); 
                tree.SetAlias("sr9", " nbs>=0 && njets>=2 && ht > 80   && pfmet > 30 && is_mm" ); 
                tree.SetAlias("sr10", "0==1"                                                   ); 
                tree.SetAlias("sr11", "0==1"                                                   ); 
                tree.SetAlias("sr12", "0==1"                                                   ); 
                tree.SetAlias("sr13", "0==1"                                                   ); 
                tree.SetAlias("sr14", "0==1"                                                   ); 
                tree.SetAlias("sr15", "0==1"                                                   ); 
                tree.SetAlias("sr16", "0==1"                                                   ); 
                tree.SetAlias("sr17", "0==1"                                                   ); 
                tree.SetAlias("sr18", "0==1"                                                   ); 
                tree.SetAlias("sr19", "0==1"                                                   ); 
                tree.SetAlias("sr20", "0==1"                                                   ); 
                tree.SetAlias("sr21", "0==1"                                                   ); 
                tree.SetAlias("sr22", "0==1"                                                   ); 
                tree.SetAlias("sr23", "0==1"                                                   ); 
                tree.SetAlias("sr24", "0==1"                                                   ); 
                tree.SetAlias("sr25", "0==1"                                                   ); 
                tree.SetAlias("sr26", "0==1"                                                   ); 
                tree.SetAlias("sr27", "0==1"                                                   ); 
                tree.SetAlias("sr28", "0==1"                                                   ); 
                break;
            case AnalysisType::higgsino:
                tree.SetAlias("sr0" , "njets_pt30>=2"            );
                tree.SetAlias("sr1" , "njets_pt30>=2 && nbs30==0");  
                tree.SetAlias("sr2" , "0==1"                     ); 
                tree.SetAlias("sr3" , "0==1"                     ); 
                tree.SetAlias("sr4" , "0==1"                     ); 
                tree.SetAlias("sr5" , "0==1"                     ); 
                tree.SetAlias("sr6" , "0==1"                     ); 
                tree.SetAlias("sr7" , "0==1"                     ); 
                tree.SetAlias("sr8" , "0==1"                     ); 
                tree.SetAlias("sr9" , "0==1"                     ); 
                tree.SetAlias("sr10", "0==1"                     ); 
                tree.SetAlias("sr11", "0==1"                     ); 
                tree.SetAlias("sr12", "0==1"                     ); 
                tree.SetAlias("sr13", "0==1"                     ); 
                tree.SetAlias("sr14", "0==1"                     ); 
                tree.SetAlias("sr15", "0==1"                     ); 
                tree.SetAlias("sr16", "0==1"                     ); 
                tree.SetAlias("sr17", "0==1"                     ); 
                tree.SetAlias("sr18", "0==1"                     ); 
                tree.SetAlias("sr19", "0==1"                     ); 
                tree.SetAlias("sr20", "0==1"                     ); 
                tree.SetAlias("sr21", "0==1"                     ); 
                tree.SetAlias("sr22", "0==1"                     ); 
                tree.SetAlias("sr23", "0==1"                     ); 
                tree.SetAlias("sr24", "0==1"                     ); 
                tree.SetAlias("sr25", "0==1"                     ); 
                tree.SetAlias("sr26", "0==1"                     ); 
                tree.SetAlias("sr27", "0==1"                     ); 
                tree.SetAlias("sr28", "0==1"                     ); 
                break;
            case AnalysisType::static_size:
                /*do nothing*/
                break;
        }

        // exclusive
        switch (anal_type)
        {
            case AnalysisType::high_pt:
            case AnalysisType::high_pt_eth:
                tree.SetAlias("ex_sr0"  , " (nbs>=0 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : pfmet > 0))"                                  ); 
                tree.SetAlias("ex_sr1"  , " (nbs>=0 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr2"  , " (nbs>=0 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr3"  , " (nbs>=0 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr4"  , " (nbs>=0 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr5"  , " (nbs>=0 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr6"  , " (nbs>=0 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr7"  , " (nbs>=0 && (njets >= 4             ) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr8"  , " (nbs>=0 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr9"  , "(0==1)"                                                                                                   ); 
                tree.SetAlias("ex_sr10" , " (nbs==1 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : pfmet > 0))"                                  ); 
                tree.SetAlias("ex_sr11" , " (nbs==1 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr12" , " (nbs==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr13" , " (nbs==1 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr14" , " (nbs==1 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr15" , " (nbs==1 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr16" , " (nbs==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr17" , " (nbs==1 && (njets >= 4             ) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr18" , " (nbs==1 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr19" , "(0==1)"                                                                                                   ); 
                tree.SetAlias("ex_sr20" , " (nbs>=2 && njets>=2 && ht > 80 && (ht < 500 ? pfmet > 30 : pfmet > 0))"                                  ); 
                tree.SetAlias("ex_sr21" , " (nbs>=2 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr22" , " (nbs>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr23" , " (nbs>=2 && (njets >= 4             ) && (200 < ht && ht < 400) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr24" , " (nbs>=2 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120))"          ); 
                tree.SetAlias("ex_sr25" , " (nbs>=2 && (2 <= njets && njets < 4) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr26" , " (nbs>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr27" , " (nbs>=2 && (njets >= 4             ) && (200 < ht && ht < 400) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr28" , " (nbs>=2 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             ))"          ); 
                tree.SetAlias("ex_sr29" , "(0==1)"                                                                                                   ); 
                tree.SetAlias("ex_sr30" , " (nbs>=2 && (njets >= 2             ) && (ht > 80             ) && (pfmet >= 30              ))"          ); 
                tree.SetAlias("ex_sr31" , " (nbs>=2 && (njets >= 2             ) && (ht > 80             ) && (pfmet >= 30              ) && is_pp)" ); 
                tree.SetAlias("ex_sr32" , " (nbs>=0 && (njets >= 2             ) && (ht > 500            ) && (pfmet >= 0               ))"          ); 
                tree.SetAlias("ex_sr33" , " (nbs>=2 && (njets >= 2             ) && (ht > 500            ) && (pfmet >= 0               ))"          ); 
                tree.SetAlias("ex_sr34" , " (nbs>=1 && (njets >= 2             ) && (ht > 80             ) && (pfmet >= 30              ))"          ); 
                tree.SetAlias("ex_sr35" , " (nbs>=1 && (njets >= 2             ) && (ht > 80             ) && (pfmet >= 30              ) && is_pp)" ); 
                break;
            case AnalysisType::low_pt:
            case AnalysisType::vlow_pt:
                tree.SetAlias("ex_sr0"  , " nbs>=0 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : pfmet > 0)"                        ); 
                tree.SetAlias("ex_sr1"  , " nbs>=0 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr2"  , " nbs>=0 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr3"  , " nbs>=0 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr4"  , " nbs>=0 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr5"  , " nbs>=0 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr6"  , " nbs>=0 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr7"  , " nbs>=0 && (njets >= 4             ) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr8"  , " nbs>=0 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr9"  , "0==1"                                                                                          ); 
                tree.SetAlias("ex_sr10" , " nbs==1 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : pfmet > 0)"                        ); 
                tree.SetAlias("ex_sr11" , " nbs==1 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr12" , " nbs==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr13" , " nbs==1 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr14" , " nbs==1 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr15" , " nbs==1 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr16" , " nbs==1 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr17" , " nbs==1 && (njets >= 4             ) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr18" , " nbs==1 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr19" , "0==1"                                                                                          ); 
                tree.SetAlias("ex_sr20" , " nbs>=2 && njets>=2 && ht > 250 && (ht < 500 ? pfmet > 30 : pfmet > 0)"                        ); 
                tree.SetAlias("ex_sr21" , " nbs>=2 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr22" , " nbs>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr23" , " nbs>=2 && (njets >= 4             ) && (250 < ht && ht < 400) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr24" , " nbs>=2 && (njets >= 4             ) && (ht > 400            ) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr25" , " nbs>=2 && (2 <= njets && njets < 4) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr26" , " nbs>=2 && (2 <= njets && njets < 4) && (ht > 400            ) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr27" , " nbs>=2 && (njets >= 4             ) && (250 < ht && ht < 400) && (pfmet >= 120             )" ); 
                tree.SetAlias("ex_sr28" , " nbs>=2 && (njets >= 4             ) && (ht > 400            ) && (pfmet >= 120             )" ); 
                break;
            case AnalysisType::hcp:
                tree.SetAlias("ex_sr0" , "0==1"                                                              ); 
                tree.SetAlias("ex_sr1" , "njets>=4 && (200 < ht && ht < 320) && (50 < pfmet && pfmet < 120)" ); 
                tree.SetAlias("ex_sr2" , "njets>=4 && (200 < ht && ht < 320) && (pfmet > 120)"               ); 
                tree.SetAlias("ex_sr3" , "njets>=4 && (ht > 320) && (50 < pfmet && pfmet < 120)"             ); 
                tree.SetAlias("ex_sr4" , "njets>=4 && (ht > 320) && (pfmet > 120)"                           ); 
                tree.SetAlias("ex_sr5" , "njets>=4 && (ht > 320) && (0 < pfmet && pfmet < 50)"               ); 
                tree.SetAlias("ex_sr6" , "0==1"                                                              ); 
                tree.SetAlias("ex_sr7" , "0==1"                                                              ); 
                tree.SetAlias("ex_sr8" , "0==1"                                                              ); 
                tree.SetAlias("ex_sr9" , "0==1"                                                              ); 
                tree.SetAlias("ex_sr10", "0==1"                                                              ); 
                tree.SetAlias("ex_sr10", "0==1"                                                              ); 
                tree.SetAlias("ex_sr11", "0==1"                                                              ); 
                tree.SetAlias("ex_sr12", "0==1"                                                              ); 
                tree.SetAlias("ex_sr13", "0==1"                                                              ); 
                tree.SetAlias("ex_sr14", "0==1"                                                              ); 
                tree.SetAlias("ex_sr15", "0==1"                                                              ); 
                tree.SetAlias("ex_sr16", "0==1"                                                              ); 
                tree.SetAlias("ex_sr10", "0==1"                                                              ); 
                tree.SetAlias("ex_sr10", "0==1"                                                              ); 
                tree.SetAlias("ex_sr11", "0==1"                                                              ); 
                tree.SetAlias("ex_sr12", "0==1"                                                              ); 
                tree.SetAlias("ex_sr13", "0==1"                                                              ); 
                tree.SetAlias("ex_sr14", "0==1"                                                              ); 
                tree.SetAlias("ex_sr15", "0==1"                                                              ); 
                tree.SetAlias("ex_sr16", "0==1"                                                              ); 
                tree.SetAlias("ex_sr17", "0==1"                                                              ); 
                tree.SetAlias("ex_sr18", "0==1"                                                              ); 
                tree.SetAlias("ex_sr19", "0==1"                                                              ); 
                tree.SetAlias("ex_sr20", "0==1"                                                              ); 
                tree.SetAlias("ex_sr21", "0==1"                                                              ); 
                tree.SetAlias("ex_sr22", "0==1"                                                              ); 
                tree.SetAlias("ex_sr23", "0==1"                                                              ); 
                tree.SetAlias("ex_sr24", "0==1"                                                              ); 
                tree.SetAlias("ex_sr25", "0==1"                                                              ); 
                tree.SetAlias("ex_sr26", "0==1"                                                              ); 
                tree.SetAlias("ex_sr27", "0==1"                                                              ); 
                tree.SetAlias("ex_sr28", "0==1"                                                              ); 
                break;
            case AnalysisType::higgsino:
                tree.SetAlias("ex_sr0" , "0==1"                ); 
                tree.SetAlias("ex_sr1" , "njets>30=2 && nbs==0");  
                tree.SetAlias("ex_sr2" , "0==1"                ); 
                tree.SetAlias("ex_sr3" , "0==1"                ); 
                tree.SetAlias("ex_sr4" , "0==1"                ); 
                tree.SetAlias("ex_sr5" , "0==1"                ); 
                tree.SetAlias("ex_sr6" , "0==1"                ); 
                tree.SetAlias("ex_sr7" , "0==1"                ); 
                tree.SetAlias("ex_sr8" , "0==1"                ); 
                tree.SetAlias("ex_sr9" , "0==1"                ); 
                tree.SetAlias("ex_sr10", "0==1"                ); 
                tree.SetAlias("ex_sr11", "0==1"                ); 
                tree.SetAlias("ex_sr12", "0==1"                ); 
                tree.SetAlias("ex_sr13", "0==1"                ); 
                tree.SetAlias("ex_sr14", "0==1"                ); 
                tree.SetAlias("ex_sr15", "0==1"                ); 
                tree.SetAlias("ex_sr16", "0==1"                ); 
                tree.SetAlias("ex_sr17", "0==1"                ); 
                tree.SetAlias("ex_sr18", "0==1"                ); 
                tree.SetAlias("ex_sr19", "0==1"                ); 
                tree.SetAlias("ex_sr20", "0==1"                ); 
                tree.SetAlias("ex_sr21", "0==1"                ); 
                tree.SetAlias("ex_sr22", "0==1"                ); 
                tree.SetAlias("ex_sr23", "0==1"                ); 
                tree.SetAlias("ex_sr24", "0==1"                ); 
                tree.SetAlias("ex_sr25", "0==1"                ); 
                tree.SetAlias("ex_sr26", "0==1"                ); 
                tree.SetAlias("ex_sr27", "0==1"                ); 
                tree.SetAlias("ex_sr28", "0==1"                ); 
                break;
            case AnalysisType::static_size:
                /*do nothing*/
                break;
        }
    }

    void SetSignalRegionAliases(TTree* tree, const AnalysisType::value_type& anal_type, const bool do_btag_sf)
    {
        SetSignalRegionAliases(*tree, anal_type, do_btag_sf);
    }

    // Get the name of the SignalRegionTyp
    std::string GetSignalRegionTypeName(const SignalRegionType::value_type& signal_region_type)
    {
        switch(signal_region_type)
        {
            case SignalRegionType::inclusive: return "inclusive"; break;
            case SignalRegionType::exclusive: return "exclusive"; break;
            default: {/*do nothing*/}
        };
        throw std::domain_error("ERROR: ss::GetSignalRegionTypeName(): arguments out of bounds!");
    }

    // Get the SignalRegionType from a string
    SignalRegionType::value_type GetSignalRegionTypeFromName(const std::string& signal_region_type_name)
    {
        if (signal_region_type_name == "inclusive") {return SignalRegionType::inclusive;}
        if (signal_region_type_name == "exclusive") {return SignalRegionType::exclusive;}
        throw std::domain_error("ERROR: ss::GetSignalRegionTypeFromName(): arguments out of bounds!");
    }

} // namespace ss
