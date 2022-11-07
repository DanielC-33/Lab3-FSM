// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_final__Syms.h"


VL_ATTR_COLD void Vf1_final___024root__trace_init_sub__TOP__0(Vf1_final___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"fsm_trigger", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_final ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"fsm_trigger", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_delay", false,-1);
    tracep->declBus(c+2,"pseudo_random", false,-1, 6,0);
    tracep->declBit(c+3,"time_out", false,-1);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBit(c+5,"cmd_seq", false,-1);
    tracep->pushNamePrefix("f1_FSM ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBit(c+5,"cmd_seq", false,-1);
    tracep->declBit(c+1,"cmd_delay", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 7,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_clktick ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBus(c+18,"N", false,-1, 15,0);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+9,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_delay ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+1,"trigger", false,-1);
    tracep->declBus(c+2,"n", false,-1, 6,0);
    tracep->declBit(c+3,"time_out", false,-1);
    tracep->declBus(c+10,"count", false,-1, 6,0);
    tracep->declBus(c+11,"current_state", false,-1, 31,0);
    tracep->declBus(c+12,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_lfsr ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+20,"en", false,-1);
    tracep->declBus(c+2,"data_out", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_final___024root__trace_init_top(Vf1_final___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_init_top\n"); );
    // Body
    Vf1_final___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_final___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_final___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_final___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_final___024root__trace_register(Vf1_final___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_final___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_final___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_final___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_final___024root__trace_full_sub_0(Vf1_final___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_final___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_full_top_0\n"); );
    // Init
    Vf1_final___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_final___024root*>(voidSelf);
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_final___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_final___024root__trace_full_sub_0(Vf1_final___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)));
    bufp->fullCData(oldp+2,(vlSelf->f1_final__DOT__pseudo_random),7);
    bufp->fullBit(oldp+3,(((0U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                           & ((1U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                              & (2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)))));
    bufp->fullBit(oldp+4,(vlSelf->f1_final__DOT__tick));
    bufp->fullBit(oldp+5,((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)));
    bufp->fullBit(oldp+6,(((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                            ? (IData)(vlSelf->f1_final__DOT__tick)
                            : ((0U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                               & ((1U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                                  & (2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state))))));
    bufp->fullIData(oldp+7,(vlSelf->f1_final__DOT__f1_FSM__DOT__current_state),32);
    bufp->fullIData(oldp+8,(vlSelf->f1_final__DOT__f1_FSM__DOT__next_state),32);
    bufp->fullSData(oldp+9,(vlSelf->f1_final__DOT__f1_clktick__DOT__count),16);
    bufp->fullCData(oldp+10,(vlSelf->f1_final__DOT__f1_delay__DOT__count),7);
    bufp->fullIData(oldp+11,(vlSelf->f1_final__DOT__f1_delay__DOT__current_state),32);
    bufp->fullIData(oldp+12,(((0U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                               ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                   ? 1U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                               : ((1U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->f1_final__DOT__f1_delay__DOT__count))
                                       ? 2U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                   : ((2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                       ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                           ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                               ? vlSelf->f1_final__DOT__f1_delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullBit(oldp+13,(vlSelf->clk));
    bufp->fullBit(oldp+14,(vlSelf->rst));
    bufp->fullBit(oldp+15,(vlSelf->fsm_trigger));
    bufp->fullCData(oldp+16,(vlSelf->data_out),8);
    bufp->fullIData(oldp+17,(0x10U),32);
    bufp->fullSData(oldp+18,(0x7cU),16);
    bufp->fullIData(oldp+19,(7U),32);
    bufp->fullBit(oldp+20,(1U));
}
