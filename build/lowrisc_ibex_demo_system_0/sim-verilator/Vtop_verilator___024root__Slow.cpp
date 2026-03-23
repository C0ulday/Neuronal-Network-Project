// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator___024root.h"

// Parameter definitions for Vtop_verilator___024root
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vtop_verilator___024root___ctor_var_reset(Vtop_verilator___024root* vlSelf);

Vtop_verilator___024root::Vtop_verilator___024root(Vtop_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_verilator___024root___ctor_var_reset(this);
}

void Vtop_verilator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_verilator___024root::~Vtop_verilator___024root() {
}
