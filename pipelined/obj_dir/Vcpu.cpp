// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu.h"
#include "Vcpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcpu::Vcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu::Vcpu(const char* _vcname__)
    : Vcpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu::~Vcpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf);
void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf);
void Vcpu___024root___eval(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu___024root___final(Vcpu___024root* vlSelf);

static void _eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcpu___024root___eval_settle(&(vlSymsp->TOP));
        Vcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcpu::name() const {
    return vlSymsp->name();
}

<<<<<<< HEAD
//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcpu::final() {
    Vcpu___024root___final(&(vlSymsp->TOP));
=======
VL_INLINE_OPT void Vcpu::_sequent__TOP__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_sequent__TOP__1\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6;
    IData/*31:0*/ __Vdly__cpu__DOT__PCF;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6;
    // Body
    __Vdly__cpu__DOT__PCF = vlTOPp->cpu__DOT__PCF;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5 = 0U;
    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6 = 0U;
    if (vlTOPp->cpu__DOT__Drst) {
        vlTOPp->cpu__DOT__ALUControlE = 0U;
        vlTOPp->cpu__DOT__data__DOT__PCE = 0U;
        vlTOPp->cpu__DOT__control__DOT__BranchE = 0U;
        vlTOPp->cpu__DOT__control__DOT__JumpE = 0U;
        vlTOPp->cpu__DOT__control__DOT__funct3E = 0U;
        vlTOPp->cpu__DOT__data__DOT__ExtImmE = 0U;
        vlTOPp->cpu__DOT__ALUSrcE = 0U;
        vlTOPp->cpu__DOT__data__DOT__RD1E = 0U;
        vlTOPp->cpu__DOT__data__DOT__RD2E = 0U;
        vlTOPp->cpu__DOT__Rs1E = 0U;
        vlTOPp->cpu__DOT__Rs2E = 0U;
    } else {
        vlTOPp->cpu__DOT__ALUControlE = (7U & (IData)(vlTOPp->cpu__DOT__control__DOT__ALUControlD));
        vlTOPp->cpu__DOT__data__DOT__PCE = vlTOPp->cpu__DOT__PCD;
        vlTOPp->cpu__DOT__control__DOT__BranchE = (1U 
                                                   & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                      >> 6U));
        vlTOPp->cpu__DOT__control__DOT__JumpE = (1U 
                                                 & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                    >> 7U));
        vlTOPp->cpu__DOT__control__DOT__funct3E = (7U 
                                                   & (vlTOPp->cpu__DOT__InstrD 
                                                      >> 0xcU));
        vlTOPp->cpu__DOT__data__DOT__ExtImmE = vlTOPp->cpu__DOT__ExtImmD;
        vlTOPp->cpu__DOT__ALUSrcE = (1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 5U));
        vlTOPp->cpu__DOT__data__DOT__RD1E = vlTOPp->cpu__DOT__data__DOT__register__DOT__reg_array
            [(0x1fU & (vlTOPp->cpu__DOT__InstrD >> 0xfU))];
        vlTOPp->cpu__DOT__data__DOT__RD2E = vlTOPp->cpu__DOT__data__DOT__register__DOT__reg_array
            [(0x1fU & (vlTOPp->cpu__DOT__InstrD >> 0x14U))];
        vlTOPp->cpu__DOT__Rs1E = (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                           >> 0xfU));
        vlTOPp->cpu__DOT__Rs2E = (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                           >> 0x14U));
    }
    vlTOPp->cpu__DOT__ResultSrcW = vlTOPp->cpu__DOT__control__DOT__ResultSrcM;
    vlTOPp->cpu__DOT__data__DOT__PCPlus4W = vlTOPp->cpu__DOT__data__DOT__PCPlus4M;
    if (vlTOPp->cpu__DOT__PCrst) {
        __Vdly__cpu__DOT__PCF = 0U;
    } else {
        if ((((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
              & ((((IData)(vlTOPp->cpu__DOT__RdE) == 
                   (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                             >> 0xfU))) & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A)) 
                 | (((IData)(vlTOPp->cpu__DOT__RdE) 
                     == (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                  >> 0x14U))) & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__B))))
              ? 0U : 1U)) {
            __Vdly__cpu__DOT__PCF = vlTOPp->cpu__DOT__pc__DOT__next_PC;
        }
    }
    vlTOPp->cpu__DOT__data__DOT__ALUResultW = vlTOPp->cpu__DOT__data__DOT__ALUResultM;
    vlTOPp->cpu__DOT__data__DOT__ReadDataW = ((((0x20000U 
                                                 >= 
                                                 (0x3ffffU 
                                                  & ((IData)(3U) 
                                                     + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))
                                                 ? 
                                                vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register
                                                [(0x3ffffU 
                                                  & ((IData)(3U) 
                                                     + vlTOPp->cpu__DOT__data__DOT__ALUResultM))]
                                                 : 0U) 
                                               << 0x18U) 
                                              | ((((0x20000U 
                                                    >= 
                                                    (0x3ffffU 
                                                     & ((IData)(2U) 
                                                        + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))
                                                    ? 
                                                   vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register
                                                   [
                                                   (0x3ffffU 
                                                    & ((IData)(2U) 
                                                       + vlTOPp->cpu__DOT__data__DOT__ALUResultM))]
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | ((((0x20000U 
                                                       >= 
                                                       (0x3ffffU 
                                                        & ((IData)(1U) 
                                                           + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))
                                                       ? 
                                                      vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register
                                                      [
                                                      (0x3ffffU 
                                                       & ((IData)(1U) 
                                                          + vlTOPp->cpu__DOT__data__DOT__ALUResultM))]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0x20000U 
                                                        >= 
                                                        (0x3ffffU 
                                                         & vlTOPp->cpu__DOT__data__DOT__ALUResultM))
                                                        ? 
                                                       vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register
                                                       [
                                                       (0x3ffffU 
                                                        & vlTOPp->cpu__DOT__data__DOT__ALUResultM)]
                                                        : 0U))));
    vlTOPp->cpu__DOT__RegWriteW = vlTOPp->cpu__DOT__RegWriteM;
    vlTOPp->cpu__DOT__RdW = vlTOPp->cpu__DOT__RdM;
    vlTOPp->cpu__DOT__ImmSrcE = ((IData)(vlTOPp->cpu__DOT__Drst)
                                  ? 0U : (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                >> 2U)));
    if ((1U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound1 
            = (0xffU & vlTOPp->cpu__DOT__data__DOT__WriteDataM);
        if ((0x20000U >= (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM))) {
            __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0 
                = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0 
                = (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM);
        }
        vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound2 
            = (0xffU & (vlTOPp->cpu__DOT__data__DOT__WriteDataM 
                        >> 8U));
        if ((0x20000U >= (0x3ffffU & ((IData)(1U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))) {
            __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1 
                = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound2;
            __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1 
                = (0x3ffffU & ((IData)(1U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM));
        }
        vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound3 
            = (0xffU & (vlTOPp->cpu__DOT__data__DOT__WriteDataM 
                        >> 0x10U));
        if ((0x20000U >= (0x3ffffU & ((IData)(2U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))) {
            __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2 
                = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound3;
            __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2 = 1U;
            __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2 
                = (0x3ffffU & ((IData)(2U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM));
        }
        vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound4 
            = (0xffU & (vlTOPp->cpu__DOT__data__DOT__WriteDataM 
                        >> 0x18U));
        if ((0x20000U >= (0x3ffffU & ((IData)(3U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))) {
            __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3 
                = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound4;
            __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3 = 1U;
            __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3 
                = (0x3ffffU & ((IData)(3U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM));
        }
    } else {
        if ((2U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
            vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound5 
                = (0xffU & vlTOPp->cpu__DOT__data__DOT__WriteDataM);
            if ((0x20000U >= (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM))) {
                __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4 
                    = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound5;
                __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4 = 1U;
                __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4 
                    = (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM);
            }
            vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound6 
                = (0xffU & (vlTOPp->cpu__DOT__data__DOT__WriteDataM 
                            >> 8U));
            if ((0x20000U >= (0x3ffffU & ((IData)(1U) 
                                          + vlTOPp->cpu__DOT__data__DOT__ALUResultM)))) {
                __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5 
                    = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound6;
                __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5 = 1U;
                __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5 
                    = (0x3ffffU & ((IData)(1U) + vlTOPp->cpu__DOT__data__DOT__ALUResultM));
            }
        } else {
            if ((3U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
                vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound7 
                    = (0xffU & vlTOPp->cpu__DOT__data__DOT__WriteDataM);
                if ((0x20000U >= (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM))) {
                    __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6 
                        = vlTOPp->cpu__DOT__data__DOT__data__DOT____Vlvbound7;
                    __Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6 = 1U;
                    __Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6 
                        = (0x3ffffU & vlTOPp->cpu__DOT__data__DOT__ALUResultM);
                }
            }
        }
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v1;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v2;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v3;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v4;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v5;
    }
    if (__Vdlyvset__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6) {
        vlTOPp->cpu__DOT__data__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6] 
            = __Vdlyvval__cpu__DOT__data__DOT__data__DOT__data_mem_register__v6;
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__PCD = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                   ? 1U : 0U) ? 0U : vlTOPp->cpu__DOT__PCF);
    }
    vlTOPp->cpu__DOT__control__DOT__ResultSrcM = vlTOPp->cpu__DOT__control__DOT__ResultSrcE;
    vlTOPp->cpu__DOT__data__DOT__PCPlus4M = vlTOPp->cpu__DOT__data__DOT__PCPlus4E;
    vlTOPp->cpu__DOT__OpcodeE = ((IData)(vlTOPp->cpu__DOT__Drst)
                                  ? 0U : (0x7fU & vlTOPp->cpu__DOT__InstrD));
    vlTOPp->cpu__DOT__data__DOT__ResultW = ((0U == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                             ? vlTOPp->cpu__DOT__data__DOT__ALUResultW
                                             : ((1U 
                                                 == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                                 ? vlTOPp->cpu__DOT__data__DOT__ReadDataW
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                                  ? vlTOPp->cpu__DOT__data__DOT__PCPlus4W
                                                  : 0U)));
    vlTOPp->cpu__DOT__RegWriteM = vlTOPp->cpu__DOT__control__DOT__RegWriteE;
    vlTOPp->cpu__DOT__RdM = vlTOPp->cpu__DOT__RdE;
    vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A 
        = ((4U != (IData)(vlTOPp->cpu__DOT__ImmSrcE)) 
           & (3U != (IData)(vlTOPp->cpu__DOT__ImmSrcE)));
    vlTOPp->cpu__DOT__MemWriteM = vlTOPp->cpu__DOT__control__DOT__MemWriteE;
    vlTOPp->cpu__DOT__data__DOT__WriteDataM = vlTOPp->cpu__DOT__data__DOT__WriteDataE;
    vlTOPp->cpu__DOT__data__DOT__ALUResultM = vlTOPp->cpu__DOT__ALUResultE;
    vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__B 
        = ((IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A) 
           & (0U != (IData)(vlTOPp->cpu__DOT__ImmSrcE)));
    if (vlTOPp->cpu__DOT__Drst) {
        vlTOPp->cpu__DOT__control__DOT__ResultSrcE = 0U;
        vlTOPp->cpu__DOT__data__DOT__PCPlus4E = 0U;
        vlTOPp->cpu__DOT__control__DOT__RegWriteE = 0U;
        vlTOPp->cpu__DOT__RdE = 0U;
    } else {
        vlTOPp->cpu__DOT__control__DOT__ResultSrcE 
            = (3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                     >> 0xaU));
        vlTOPp->cpu__DOT__data__DOT__PCPlus4E = vlTOPp->cpu__DOT__PCPlus4D;
        vlTOPp->cpu__DOT__control__DOT__RegWriteE = 
            (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                   >> 0xcU));
        vlTOPp->cpu__DOT__RdE = (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                          >> 7U));
    }
    vlTOPp->cpu__DOT__FowardAE = ((((0U != (IData)(vlTOPp->cpu__DOT__RegWriteM)) 
                                    | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW))) 
                                   & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A))
                                   ? ((((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                        == (IData)(vlTOPp->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlTOPp->cpu__DOT__Rs1E)))
                                       ? 2U : ((((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                                 == (IData)(vlTOPp->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlTOPp->cpu__DOT__Rs1E)))
                                                ? 1U
                                                : 0U))
                                   : 0U);
    vlTOPp->cpu__DOT__FowardBE = ((((0U != (IData)(vlTOPp->cpu__DOT__RegWriteM)) 
                                    | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW))) 
                                   & ((IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A) 
                                      & (0U != (IData)(vlTOPp->cpu__DOT__ImmSrcE))))
                                   ? ((((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                        == (IData)(vlTOPp->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlTOPp->cpu__DOT__Rs2E)))
                                       ? 2U : ((((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                                 == (IData)(vlTOPp->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlTOPp->cpu__DOT__Rs2E)))
                                                ? 1U
                                                : 0U))
                                   : 0U);
    vlTOPp->cpu__DOT__control__DOT__MemWriteE = ((IData)(vlTOPp->cpu__DOT__Drst)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                     >> 8U)));
    vlTOPp->cpu__DOT__data__DOT__SrcAE = ((0U == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                           ? vlTOPp->cpu__DOT__data__DOT__RD1E
                                           : ((1U == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                               ? vlTOPp->cpu__DOT__data__DOT__ResultW
                                               : ((2U 
                                                   == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                                   ? vlTOPp->cpu__DOT__data__DOT__ALUResultM
                                                   : 0U)));
    vlTOPp->cpu__DOT__data__DOT__WriteDataE = ((0U 
                                                == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                                ? vlTOPp->cpu__DOT__data__DOT__RD2E
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                                    ? vlTOPp->cpu__DOT__data__DOT__ResultW
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                                     ? vlTOPp->cpu__DOT__data__DOT__ALUResultM
                                                     : 0U)));
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__PCPlus4D = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                        ? 1U : 0U) ? 0U
                                       : ((IData)(4U) 
                                          + vlTOPp->cpu__DOT__PCF));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__InstrD = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                      ? 1U : 0U) ? 0U
                                     : ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                         [(0xffU & 
                                           ((IData)(3U) 
                                            + vlTOPp->cpu__DOT__PCF))] 
                                         << 0x18U) 
                                        | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                            [(0xffU 
                                              & ((IData)(2U) 
                                                 + vlTOPp->cpu__DOT__PCF))] 
                                            << 0x10U) 
                                           | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                               [(0xffU 
                                                 & ((IData)(1U) 
                                                    + vlTOPp->cpu__DOT__PCF))] 
                                               << 8U) 
                                              | vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                              [(0xffU 
                                                & vlTOPp->cpu__DOT__PCF)]))));
    }
    vlTOPp->cpu__DOT__data__DOT__SrcBE = ((IData)(vlTOPp->cpu__DOT__ALUSrcE)
                                           ? vlTOPp->cpu__DOT__data__DOT__ExtImmE
                                           : vlTOPp->cpu__DOT__data__DOT__WriteDataE);
    vlTOPp->cpu__DOT__PCF = __Vdly__cpu__DOT__PCF;
    vlTOPp->cpu__DOT__ALUResultE = ((4U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                     ? ((2U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? vlTOPp->cpu__DOT__data__DOT__SrcBE
                                             : 0U) : 
                                        ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                          ? (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                             << (0x1fU 
                                                 & vlTOPp->cpu__DOT__data__DOT__SrcBE))
                                          : (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                             ^ vlTOPp->cpu__DOT__data__DOT__SrcBE)))
                                     : ((2U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                                | vlTOPp->cpu__DOT__data__DOT__SrcBE)
                                             : (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                                & vlTOPp->cpu__DOT__data__DOT__SrcBE))
                                         : ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                                - vlTOPp->cpu__DOT__data__DOT__SrcBE)
                                             : (vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                                + vlTOPp->cpu__DOT__data__DOT__SrcBE))));
    vlTOPp->cpu__DOT__PCSrcE = ((IData)(vlTOPp->cpu__DOT__control__DOT__JumpE)
                                 ? ((IData)(vlTOPp->cpu__DOT__ALUSrcE)
                                     ? 2U : 1U) : (
                                                   ((IData)(vlTOPp->cpu__DOT__control__DOT__BranchE) 
                                                    & ((vlTOPp->cpu__DOT__data__DOT__SrcAE 
                                                        == vlTOPp->cpu__DOT__data__DOT__SrcBE) 
                                                       ^ (IData)(vlTOPp->cpu__DOT__control__DOT__funct3E)))
                                                    ? 1U
                                                    : 0U));
    vlTOPp->cpu__DOT__Fen = (((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
                              & ((((IData)(vlTOPp->cpu__DOT__RdE) 
                                   == (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0xfU))) 
                                  & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A)) 
                                 | (((IData)(vlTOPp->cpu__DOT__RdE) 
                                     == (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0x14U))) 
                                    & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__B))))
                              ? 0U : 1U);
    if ((0x40U & vlTOPp->cpu__DOT__InstrD)) {
        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((0x20U & vlTOPp->cpu__DOT__InstrD) ? 
               ((0x10U & vlTOPp->cpu__DOT__InstrD) ? 0U
                 : ((8U & vlTOPp->cpu__DOT__InstrD)
                     ? ((4U & vlTOPp->cpu__DOT__InstrD)
                         ? ((2U & vlTOPp->cpu__DOT__InstrD)
                             ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                 ? 0x188cU : 0U) : 0U)
                         : 0U) : ((4U & vlTOPp->cpu__DOT__InstrD)
                                   ? ((2U & vlTOPp->cpu__DOT__InstrD)
                                       ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                           ? 0x18a0U
                                           : 0U) : 0U)
                                   : ((2U & vlTOPp->cpu__DOT__InstrD)
                                       ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                           ? 0x49U : 0U)
                                       : 0U)))) : 0U);
    } else {
        if ((0x20U & vlTOPp->cpu__DOT__InstrD)) {
            if ((0x10U & vlTOPp->cpu__DOT__InstrD)) {
                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((8U & vlTOPp->cpu__DOT__InstrD)
                        ? 0U : ((4U & vlTOPp->cpu__DOT__InstrD)
                                 ? ((2U & vlTOPp->cpu__DOT__InstrD)
                                     ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                         ? 0x1033U : 0U)
                                     : 0U) : ((2U & vlTOPp->cpu__DOT__InstrD)
                                               ? ((1U 
                                                   & vlTOPp->cpu__DOT__InstrD)
                                                   ? 0x1002U
                                                   : 0U)
                                               : 0U)));
            } else {
                if ((8U & vlTOPp->cpu__DOT__InstrD)) {
                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                } else {
                    if ((4U & vlTOPp->cpu__DOT__InstrD)) {
                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                    } else {
                        if ((2U & vlTOPp->cpu__DOT__InstrD)) {
                            if ((1U & vlTOPp->cpu__DOT__InstrD)) {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x128U;
                                if ((0U == (7U & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0xcU)))) {
                                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                        = (0x300U | 
                                           (0x7cffU 
                                            & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->cpu__DOT__InstrD 
                                                   >> 0xcU)))) {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = (0x200U 
                                               | (0x7cffU 
                                                  & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                    }
                                }
                            } else {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                            }
                        } else {
                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->cpu__DOT__InstrD)) {
                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((8U & vlTOPp->cpu__DOT__InstrD)
                        ? 0U : ((4U & vlTOPp->cpu__DOT__InstrD)
                                 ? 0U : ((2U & vlTOPp->cpu__DOT__InstrD)
                                          ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                              ? 0x1022U
                                              : 0U)
                                          : 0U)));
            } else {
                if ((8U & vlTOPp->cpu__DOT__InstrD)) {
                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                } else {
                    if ((4U & vlTOPp->cpu__DOT__InstrD)) {
                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                    } else {
                        if ((2U & vlTOPp->cpu__DOT__InstrD)) {
                            if ((1U & vlTOPp->cpu__DOT__InstrD)) {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x1420U;
                                if ((0x4000U & vlTOPp->cpu__DOT__InstrD)) {
                                    if ((1U & (~ (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0xdU)))) {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = ((0x1000U 
                                                & vlTOPp->cpu__DOT__InstrD)
                                                ? (0x6000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                                                : (0x7000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                                    }
                                } else {
                                    if ((1U & (~ (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0xdU)))) {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = ((0x1000U 
                                                & vlTOPp->cpu__DOT__InstrD)
                                                ? (0x2000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                                                : (0x3000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                                    }
                                }
                            } else {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                            }
                        } else {
                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->cpu__DOT__pc__DOT__next_PC = ((0U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                           ? ((IData)(4U) 
                                              + vlTOPp->cpu__DOT__PCF)
                                           : ((1U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                               ? (vlTOPp->cpu__DOT__data__DOT__PCE 
                                                  + vlTOPp->cpu__DOT__data__DOT__ExtImmE)
                                               : ((2U 
                                                   == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                   ? vlTOPp->cpu__DOT__ALUResultE
                                                   : 0U)));
    vlTOPp->cpu__DOT__Drst = (1U & (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                      ? 1U : 0U) | 
                                    (! (((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
                                         & ((((IData)(vlTOPp->cpu__DOT__RdE) 
                                              == (0x1fU 
                                                  & (vlTOPp->cpu__DOT__InstrD 
                                                     >> 0xfU))) 
                                             & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__A)) 
                                            | (((IData)(vlTOPp->cpu__DOT__RdE) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->cpu__DOT__InstrD 
                                                    >> 0x14U))) 
                                               & (IData)(vlTOPp->cpu__DOT__hazard__DOT__StallHazard__DOT__B))))
                                         ? 0U : 1U))));
    if ((0U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                      >> 2U)))) {
        vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->cpu__DOT__InstrD 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U)));
    } else {
        if ((1U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                          >> 2U)))) {
            vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->cpu__DOT__InstrD 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 7U))));
        } else {
            if ((2U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                              >> 2U)))) {
                vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cpu__DOT__InstrD 
                                                                >> 0x1fU)))) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & (vlTOPp->cpu__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->cpu__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->cpu__DOT__InstrD 
                                                         >> 7U)))));
            } else {
                if ((3U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                  >> 2U)))) {
                    vlTOPp->cpu__DOT__ExtImmD = ((0xfff00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->cpu__DOT__InstrD 
                                                                    >> 0x1fU)))) 
                                                     << 0x14U)) 
                                                 | ((0xff000U 
                                                     & vlTOPp->cpu__DOT__InstrD) 
                                                    | ((0x800U 
                                                        & (vlTOPp->cpu__DOT__InstrD 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlTOPp->cpu__DOT__InstrD 
                                                             >> 0x14U)))));
                } else {
                    if ((4U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                      >> 2U)))) {
                        vlTOPp->cpu__DOT__ExtImmD = 
                            (0xfffff000U & vlTOPp->cpu__DOT__InstrD);
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = ((0x20U & ((vlTOPp->cpu__DOT__InstrD 
                                       >> 0x19U) & vlTOPp->cpu__DOT__InstrD)) 
                            | ((0x1cU & (vlTOPp->cpu__DOT__InstrD 
                                         >> 0xaU)) 
                               | (3U & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
    vlTOPp->cpu__DOT__control__DOT__ALUControlD = vlTOPp->__Vtable1_cpu__DOT__control__DOT__ALUControlD
        [vlTOPp->__Vtableidx1];
>>>>>>> d42e32f (test)
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu::hierName() const { return vlSymsp->name(); }
const char* Vcpu::modelName() const { return "Vcpu"; }
unsigned Vcpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
