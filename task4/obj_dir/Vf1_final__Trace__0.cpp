// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_final__Syms.h"


void Vf1_final___024root__trace_chg_sub_0(Vf1_final___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_final___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_final___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_final___024root*>(voidSelf);
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_final___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_final___024root__trace_chg_sub_0(Vf1_final___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)));
        bufp->chgCData(oldp+1,(vlSelf->f1_final__DOT__pseudo_random),7);
        bufp->chgBit(oldp+2,(((0U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                              & ((1U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                                 & (2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)))));
        bufp->chgBit(oldp+3,(vlSelf->f1_final__DOT__tick));
        bufp->chgBit(oldp+4,((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)));
        bufp->chgBit(oldp+5,(((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                               ? (IData)(vlSelf->f1_final__DOT__tick)
                               : ((0U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                                  & ((1U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
                                     & (2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state))))));
        bufp->chgIData(oldp+6,(vlSelf->f1_final__DOT__f1_FSM__DOT__current_state),32);
        bufp->chgIData(oldp+7,(vlSelf->f1_final__DOT__f1_FSM__DOT__next_state),32);
        bufp->chgSData(oldp+8,(vlSelf->f1_final__DOT__f1_clktick__DOT__count),16);
        bufp->chgCData(oldp+9,(vlSelf->f1_final__DOT__f1_delay__DOT__count),7);
        bufp->chgIData(oldp+10,(vlSelf->f1_final__DOT__f1_delay__DOT__current_state),32);
        bufp->chgIData(oldp+11,(((0U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                  ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                      ? 1U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                  : ((1U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                      ? ((0U == (IData)(vlSelf->f1_final__DOT__f1_delay__DOT__count))
                                          ? 2U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                      : ((2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                          ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                              ? 3U : 0U)
                                          : ((3U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                              ? ((8U 
                                                  == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                                  ? vlSelf->f1_final__DOT__f1_delay__DOT__current_state
                                                  : 0U)
                                              : 0U))))),32);
    }
    bufp->chgBit(oldp+12,(vlSelf->clk));
    bufp->chgBit(oldp+13,(vlSelf->rst));
    bufp->chgBit(oldp+14,(vlSelf->fsm_trigger));
    bufp->chgCData(oldp+15,(vlSelf->data_out),8);
}

void Vf1_final___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root__trace_cleanup\n"); );
    // Init
    Vf1_final___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_final___024root*>(voidSelf);
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
