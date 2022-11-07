// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_final.h for the primary calling header

#include "verilated.h"

#include "Vf1_final___024root.h"

VL_INLINE_OPT void Vf1_final___024root___sequent__TOP__0(Vf1_final___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1_final__DOT__f1_clktick__DOT__count;
    IData/*31:0*/ __Vdly__f1_final__DOT__f1_FSM__DOT__current_state;
    CData/*6:0*/ __Vdly__f1_final__DOT__pseudo_random;
    // Body
    __Vdly__f1_final__DOT__pseudo_random = vlSelf->f1_final__DOT__pseudo_random;
    __Vdly__f1_final__DOT__f1_clktick__DOT__count = vlSelf->f1_final__DOT__f1_clktick__DOT__count;
    __Vdly__f1_final__DOT__f1_FSM__DOT__current_state 
        = vlSelf->f1_final__DOT__f1_FSM__DOT__current_state;
    if (vlSelf->rst) {
        __Vdly__f1_final__DOT__pseudo_random = 1U;
        vlSelf->f1_final__DOT__f1_delay__DOT__current_state = 0U;
        vlSelf->f1_final__DOT__tick = 0U;
        __Vdly__f1_final__DOT__f1_clktick__DOT__count = 0x7cU;
        __Vdly__f1_final__DOT__f1_FSM__DOT__current_state = 0U;
    } else {
        __Vdly__f1_final__DOT__pseudo_random = ((0x7eU 
                                                 & ((IData)(vlSelf->f1_final__DOT__pseudo_random) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_8(
                                                                 (0x44U 
                                                                  & (IData)(vlSelf->f1_final__DOT__pseudo_random)))));
        vlSelf->f1_final__DOT__f1_delay__DOT__current_state 
            = vlSelf->f1_final__DOT__f1_delay__DOT__next_state;
        if ((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            if ((0U == (IData)(vlSelf->f1_final__DOT__f1_clktick__DOT__count))) {
                vlSelf->f1_final__DOT__tick = 1U;
                __Vdly__f1_final__DOT__f1_clktick__DOT__count = 0x7cU;
            } else {
                __Vdly__f1_final__DOT__f1_clktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_final__DOT__f1_clktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1_final__DOT__tick = 0U;
            }
        }
        if (((IData)(vlSelf->fsm_trigger) & (0U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state))) {
            __Vdly__f1_final__DOT__f1_FSM__DOT__current_state 
                = vlSelf->f1_final__DOT__f1_FSM__DOT__next_state;
        } else if (((IData)(vlSelf->f1_final__DOT____Vcellinp__f1_FSM__en) 
                    & (0U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state))) {
            __Vdly__f1_final__DOT__f1_FSM__DOT__current_state 
                = vlSelf->f1_final__DOT__f1_FSM__DOT__next_state;
        }
    }
    vlSelf->f1_final__DOT__f1_delay__DOT__count = (0x7fU 
                                                   & ((((IData)(vlSelf->rst) 
                                                        | (8U 
                                                           == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
                                                       | (0U 
                                                          == (IData)(vlSelf->f1_final__DOT__f1_delay__DOT__count)))
                                                       ? 
                                                      ((IData)(vlSelf->f1_final__DOT__pseudo_random) 
                                                       - (IData)(1U))
                                                       : 
                                                      ((IData)(vlSelf->f1_final__DOT__f1_delay__DOT__count) 
                                                       - (IData)(1U))));
    vlSelf->f1_final__DOT__f1_clktick__DOT__count = __Vdly__f1_final__DOT__f1_clktick__DOT__count;
    vlSelf->f1_final__DOT__pseudo_random = __Vdly__f1_final__DOT__pseudo_random;
    vlSelf->f1_final__DOT__f1_FSM__DOT__current_state 
        = __Vdly__f1_final__DOT__f1_FSM__DOT__current_state;
    if (((((((((0U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state) 
               | (1U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
              | (2U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
             | (3U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
            | (4U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
           | (5U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
          | (6U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) 
         | (7U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state))) {
        if ((0U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)) {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->f1_final__DOT__f1_FSM__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                             ? 0xffU : 0U);
    }
    vlSelf->f1_final__DOT____Vcellinp__f1_FSM__en = 
        ((8U != vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
          ? (IData)(vlSelf->f1_final__DOT__tick) : 
         ((0U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
          & ((1U != vlSelf->f1_final__DOT__f1_delay__DOT__current_state) 
             & (2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state))));
    vlSelf->f1_final__DOT__f1_delay__DOT__next_state 
        = ((0U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
            ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                ? 1U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
            : ((1U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_final__DOT__f1_delay__DOT__count))
                    ? 2U : vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                : ((2U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                    ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                        ? 3U : 0U) : ((3U == vlSelf->f1_final__DOT__f1_delay__DOT__current_state)
                                       ? ((8U == vlSelf->f1_final__DOT__f1_FSM__DOT__current_state)
                                           ? vlSelf->f1_final__DOT__f1_delay__DOT__current_state
                                           : 0U) : 0U))));
}

void Vf1_final___024root___eval(Vf1_final___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_final___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1_final___024root___eval_debug_assertions(Vf1_final___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_final__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_final___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->fsm_trigger & 0xfeU))) {
        Verilated::overWidthError("fsm_trigger");}
}
#endif  // VL_DEBUG
