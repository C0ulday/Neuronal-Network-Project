// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator___024unit.h"

void Vtop_verilator___024unit___ctor_var_reset(Vtop_verilator___024unit* vlSelf);

Vtop_verilator___024unit::Vtop_verilator___024unit(Vtop_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_verilator___024unit___ctor_var_reset(this);
}

void Vtop_verilator___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_verilator___024unit::~Vtop_verilator___024unit() {
}
