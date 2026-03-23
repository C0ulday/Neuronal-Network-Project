// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator_ibex_pkg.h"

// Parameter definitions for Vtop_verilator_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator_ibex_pkg::__PVT__PmpAddrRst;


void Vtop_verilator_ibex_pkg___ctor_var_reset(Vtop_verilator_ibex_pkg* vlSelf);

Vtop_verilator_ibex_pkg::Vtop_verilator_ibex_pkg(Vtop_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_verilator_ibex_pkg___ctor_var_reset(this);
}

void Vtop_verilator_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_verilator_ibex_pkg::~Vtop_verilator_ibex_pkg() {
}
