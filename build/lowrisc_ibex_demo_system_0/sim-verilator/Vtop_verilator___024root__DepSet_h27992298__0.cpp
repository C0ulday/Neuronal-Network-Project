// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator___024root.h"

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_num_TOP\n"); );
    // Init
    // Body
    mhpmcounter_num__Vfuncrtn = 0xaU;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__mhpmcounter_get_TOP\n"); );
    // Init
    // Body
    mhpmcounter_get__Vfuncrtn = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
        [(0x1fU & index)];
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP\n"); );
    // Init
    // Body
    simutil_get_scramble_key__Vfuncrtn = 0U;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Init
    // Body
    simutil_get_scramble_nonce__Vfuncrtn = 0U;
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP(Vtop_verilator__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x8000U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x7fffU 
                                                                                & index)] 
            = val[0U];
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vtop_verilator__ConstPool__CONST_hc1613866_0;

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x8000U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vtop_verilator__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x7fffU & index)];
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

extern "C" void* uartdpi_create(const char* name, const char* log_file_path);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP(std::string name, std::string log_file_path, QData/*63:0*/ &uartdpi_create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    const char* log_file_path__Vcvt;
    for (size_t log_file_path__Vidx = 0; log_file_path__Vidx < 1; ++log_file_path__Vidx) log_file_path__Vcvt = log_file_path.c_str();
    void* uartdpi_create__Vfuncrtn__Vcvt;
    uartdpi_create__Vfuncrtn__Vcvt = uartdpi_create(name__Vcvt, log_file_path__Vcvt);
    uartdpi_create__Vfuncrtn = VL_CVT_VP_Q(uartdpi_create__Vfuncrtn__Vcvt);
}

extern "C" void uartdpi_close(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(QData/*63:0*/ ctx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    uartdpi_close(ctx__Vcvt);
}

extern "C" char uartdpi_read(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP(QData/*63:0*/ ctx, CData/*7:0*/ &uartdpi_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    char uartdpi_read__Vfuncrtn__Vcvt;
    uartdpi_read__Vfuncrtn__Vcvt = uartdpi_read(ctx__Vcvt);
    uartdpi_read__Vfuncrtn = (0xffU & uartdpi_read__Vfuncrtn__Vcvt);
}

extern "C" int uartdpi_can_read(void* ctx);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP(QData/*63:0*/ ctx, IData/*31:0*/ &uartdpi_can_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    int uartdpi_can_read__Vfuncrtn__Vcvt;
    uartdpi_can_read__Vfuncrtn__Vcvt = uartdpi_can_read(ctx__Vcvt);
    uartdpi_can_read__Vfuncrtn = uartdpi_can_read__Vfuncrtn__Vcvt;
}

extern "C" void uartdpi_write(void* ctx, int data);

VL_INLINE_OPT void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP(QData/*63:0*/ ctx, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    uartdpi_write(ctx__Vcvt, data__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__ico(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_verilator___024root___eval_triggers__ico(Vtop_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_verilator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__act(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_verilator___024root___eval_triggers__act(Vtop_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req__1)));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n__0))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0))) 
                                     | ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0))));
    vlSelf->__VactTriggered.set(7U, ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux__0))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSelf->clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                       | ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni__0))));
    vlSelf->__VactTriggered.set(0xbU, (((~ (IData)(vlSelf->clk_i)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0)) 
                                       | ((~ (IData)(vlSelf->rst_ni)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req__1 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req__1 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n__0 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux__0 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni__0 
        = vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_verilator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
