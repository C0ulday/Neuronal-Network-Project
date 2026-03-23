// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator.h"
#include "Vtop_verilator___024root.h"
#include "Vtop_verilator___024unit.h"
#include "Vtop_verilator_ibex_pkg.h"

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP(Vtop_verilator__Syms* __restrict vlSymsp, std::string file);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);

// FUNCTIONS
Vtop_verilator__Syms::~Vtop_verilator__Syms()
{
}

Vtop_verilator__Syms::Vtop_verilator__Syms(VerilatedContext* contextp, const char* namep, Vtop_verilator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ibex_pkg{this, Verilated::catName(namep, "ibex_pkg")}
{
        // Check resources
        Verilated::stackCheck(1309);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ibex_pkg = &TOP__ibex_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ibex_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_top_verilator__u_ibex_demo_system.configure(this, name(), "top_verilator.u_ibex_demo_system", "u_ibex_demo_system", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic.configure(this, name(), "top_verilator.u_ibex_demo_system.u_ram.u_ram.gen_generic.u_impl_generic", "u_impl_generic", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic__unnamedblk3.configure(this, name(), "top_verilator.u_ibex_demo_system.u_ram.u_ram.gen_generic.u_impl_generic.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__if_stage_i.configure(this, name(), "top_verilator.u_ibex_demo_system.u_top.u_ibex_core.if_stage_i", "if_stage_i", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top_verilator__u_ibex_demo_system.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP));
        __Vscope_top_verilator__u_ibex_demo_system.exportInsert(__Vfinal, "mhpmcounter_num", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP));
        __Vscope_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP));
        __Vscope_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP));
        __Vscope_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP));
        __Vscope_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP));
        __Vscope_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP));
    }
}
