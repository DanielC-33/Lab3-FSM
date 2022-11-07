// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_final.h for the primary calling header

#ifndef VERILATED_VF1_FINAL___024ROOT_H_
#define VERILATED_VF1_FINAL___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_final__Syms;

class Vf1_final___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(fsm_trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*6:0*/ f1_final__DOT__pseudo_random;
    CData/*0:0*/ f1_final__DOT__tick;
    CData/*0:0*/ f1_final__DOT____Vcellinp__f1_FSM__en;
    CData/*6:0*/ f1_final__DOT__f1_delay__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ f1_final__DOT__f1_clktick__DOT__count;
    IData/*31:0*/ f1_final__DOT__f1_delay__DOT__current_state;
    IData/*31:0*/ f1_final__DOT__f1_delay__DOT__next_state;
    IData/*31:0*/ f1_final__DOT__f1_FSM__DOT__current_state;
    IData/*31:0*/ f1_final__DOT__f1_FSM__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_final__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_final___024root(Vf1_final__Syms* symsp, const char* name);
    ~Vf1_final___024root();
    VL_UNCOPYABLE(Vf1_final___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
