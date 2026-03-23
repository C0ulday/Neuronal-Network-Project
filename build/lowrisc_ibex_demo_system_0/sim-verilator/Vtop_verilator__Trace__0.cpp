// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop_verilator__Syms.h"


void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop_verilator___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0\n"); );
    // Init
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_verilator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7]),32);
        bufp->chgBit(oldp+16,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset));
        bufp->chgBit(oldp+17,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_clear));
        bufp->chgBit(oldp+18,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr));
        bufp->chgBit(oldp+19,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr));
        bufp->chgBit(oldp+20,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr));
        bufp->chgBit(oldp+21,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select));
        bufp->chgSData(oldp+22,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                 >> 0x12U)),14);
        bufp->chgBit(oldp+23,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0x11U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0x10U))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0xfU))));
        bufp->chgCData(oldp+26,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+27,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+28,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                          >> 4U))),6);
        bufp->chgCData(oldp+29,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d)),4);
        bufp->chgBit(oldp+30,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select));
        bufp->chgBit(oldp+31,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready));
        bufp->chgBit(oldp+32,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
        bufp->chgCData(oldp+33,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d),7);
        bufp->chgBit(oldp+34,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                               | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q))));
        bufp->chgBit(oldp+36,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_ack));
        bufp->chgBit(oldp+37,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_ack)) 
                               & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_ready)) 
                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)))));
        bufp->chgBit(oldp+38,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
        bufp->chgBit(oldp+39,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req));
        bufp->chgCData(oldp+40,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        bufp->chgCData(oldp+41,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        bufp->chgCData(oldp+42,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        bufp->chgBit(oldp+43,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        bufp->chgBit(oldp+44,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        bufp->chgBit(oldp+45,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        bufp->chgIData(oldp+46,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        bufp->chgBit(oldp+47,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        bufp->chgBit(oldp+48,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        bufp->chgBit(oldp+49,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                      ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                      : ((1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                          ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                          : ((0x10U 
                                              == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                              ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q
                                              : ((0x11U 
                                                  == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)
                                                  : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        bufp->chgCData(oldp+51,((0xffU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                  >> 0x18U)))),8);
        bufp->chgCData(oldp+52,((0xfU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x14U)))),4);
        bufp->chgCData(oldp+53,((7U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                               >> 0x11U)))),3);
        bufp->chgBit(oldp+54,((1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                             >> 0x10U)))));
        bufp->chgCData(oldp+55,((0xfU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0xcU)))),4);
        bufp->chgSData(oldp+56,((0xfffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
        bufp->chgCData(oldp+57,((0xffU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                  >> 0x38U)))),8);
        bufp->chgCData(oldp+58,((0xfU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x34U)))),4);
        bufp->chgCData(oldp+59,((7U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                               >> 0x31U)))),3);
        bufp->chgBit(oldp+60,((1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                             >> 0x30U)))));
        bufp->chgCData(oldp+61,((0xfU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x2cU)))),4);
        bufp->chgSData(oldp+62,((0xfffU & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x20U)))),12);
        bufp->chgIData(oldp+63,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask),32);
        bufp->chgCData(oldp+64,((((IData)((0xffU == 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                            >> 0x18U))) 
                                  << 3U) | (((IData)(
                                                     (0xffU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                                          >> 0x10U)))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0xffU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                                             >> 8U)))) 
                                                << 1U) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_wmask)))))),4);
        bufp->chgBit(oldp+65,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
        bufp->chgIData(oldp+66,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd),32);
        bufp->chgIData(oldp+67,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0]),22);
        bufp->chgIData(oldp+68,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1]),22);
        bufp->chgQData(oldp+69,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0]),64);
        bufp->chgQData(oldp+71,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1]),64);
        bufp->chgQData(oldp+73,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+75,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+77,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+79,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+81,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 5U))));
        bufp->chgCData(oldp+82,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [0U] >> 3U))),2);
        bufp->chgBit(oldp+83,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 2U))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 1U))));
        bufp->chgBit(oldp+85,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [0U])));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 5U))));
        bufp->chgCData(oldp+87,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [1U] >> 3U))),2);
        bufp->chgBit(oldp+88,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 2U))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+90,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [1U])));
        bufp->chgBit(oldp+91,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 5U))));
        bufp->chgCData(oldp+92,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [2U] >> 3U))),2);
        bufp->chgBit(oldp+93,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 2U))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+95,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [2U])));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 5U))));
        bufp->chgCData(oldp+97,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [3U] >> 3U))),2);
        bufp->chgBit(oldp+98,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 2U))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 1U))));
        bufp->chgBit(oldp+100,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                [3U])));
        bufp->chgBit(oldp+101,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
        bufp->chgBit(oldp+102,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
        bufp->chgBit(oldp+103,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
        bufp->chgIData(oldp+104,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        bufp->chgIData(oldp+109,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        bufp->chgIData(oldp+110,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        bufp->chgIData(oldp+111,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        bufp->chgIData(oldp+112,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        bufp->chgIData(oldp+113,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        bufp->chgIData(oldp+114,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        bufp->chgIData(oldp+115,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        bufp->chgIData(oldp+116,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        bufp->chgIData(oldp+117,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        bufp->chgIData(oldp+118,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        bufp->chgIData(oldp+119,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        bufp->chgCData(oldp+120,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        bufp->chgCData(oldp+121,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        bufp->chgCData(oldp+122,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        bufp->chgCData(oldp+123,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        bufp->chgCData(oldp+124,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        bufp->chgCData(oldp+125,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        bufp->chgCData(oldp+126,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        bufp->chgCData(oldp+127,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        bufp->chgCData(oldp+128,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        bufp->chgCData(oldp+129,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        bufp->chgCData(oldp+130,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        bufp->chgCData(oldp+131,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        bufp->chgCData(oldp+132,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        bufp->chgCData(oldp+133,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        bufp->chgCData(oldp+134,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        bufp->chgCData(oldp+135,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        bufp->chgIData(oldp+136,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        bufp->chgIData(oldp+139,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        bufp->chgIData(oldp+140,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        bufp->chgIData(oldp+141,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        bufp->chgIData(oldp+142,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        bufp->chgIData(oldp+143,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        bufp->chgIData(oldp+144,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        bufp->chgIData(oldp+145,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        bufp->chgIData(oldp+146,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        bufp->chgIData(oldp+147,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        bufp->chgIData(oldp+148,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        bufp->chgIData(oldp+149,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        bufp->chgIData(oldp+150,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        bufp->chgIData(oldp+151,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        bufp->chgIData(oldp+152,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        bufp->chgIData(oldp+153,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        bufp->chgIData(oldp+154,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        bufp->chgIData(oldp+155,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        bufp->chgIData(oldp+156,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        bufp->chgIData(oldp+157,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        bufp->chgIData(oldp+158,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        bufp->chgIData(oldp+159,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        bufp->chgIData(oldp+160,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        bufp->chgIData(oldp+161,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        bufp->chgIData(oldp+162,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        bufp->chgIData(oldp+163,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        bufp->chgIData(oldp+164,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        bufp->chgIData(oldp+165,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        bufp->chgIData(oldp+166,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        bufp->chgIData(oldp+167,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        bufp->chgIData(oldp+168,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        bufp->chgIData(oldp+169,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        bufp->chgQData(oldp+170,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+172,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+174,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+176,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+178,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 5U))));
        bufp->chgCData(oldp+179,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 3U))),2);
        bufp->chgBit(oldp+180,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+181,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+182,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [0U])));
        bufp->chgBit(oldp+183,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 5U))));
        bufp->chgCData(oldp+184,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 3U))),2);
        bufp->chgBit(oldp+185,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+186,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+187,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [1U])));
        bufp->chgBit(oldp+188,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 5U))));
        bufp->chgCData(oldp+189,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 3U))),2);
        bufp->chgBit(oldp+190,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+192,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [2U])));
        bufp->chgBit(oldp+193,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 5U))));
        bufp->chgCData(oldp+194,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 3U))),2);
        bufp->chgBit(oldp+195,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+196,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+197,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [3U])));
        bufp->chgBit(oldp+198,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
        bufp->chgIData(oldp+199,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
        bufp->chgIData(oldp+200,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
        bufp->chgQData(oldp+201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
        bufp->chgQData(oldp+203,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
        bufp->chgQData(oldp+205,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+207,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req));
        bufp->chgCData(oldp+208,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d),3);
        bufp->chgBit(oldp+209,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
        bufp->chgBit(oldp+210,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d),2);
        bufp->chgQData(oldp+212,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d),41);
        bufp->chgIData(oldp+214,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d),32);
        bufp->chgBit(oldp+215,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy));
        bufp->chgBit(oldp+216,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack));
        bufp->chgBit(oldp+218,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid));
        bufp->chgBit(oldp+219,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid));
        bufp->chgBit(oldp+220,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid));
        bufp->chgSData(oldp+221,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                  >> 0x17U)),9);
        bufp->chgBit(oldp+222,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x16U))));
        bufp->chgCData(oldp+223,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                        >> 0x14U))),2);
        bufp->chgBit(oldp+224,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x13U))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x12U))));
        bufp->chgBit(oldp+226,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x11U))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x10U))));
        bufp->chgBit(oldp+228,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xfU))));
        bufp->chgBit(oldp+229,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xeU))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xdU))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xcU))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xbU))));
        bufp->chgBit(oldp+233,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0xaU))));
        bufp->chgBit(oldp+234,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 9U))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 8U))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 7U))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 6U))));
        bufp->chgBit(oldp+238,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 5U))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 4U))));
        bufp->chgCData(oldp+240,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)),4);
        bufp->chgBit(oldp+241,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                >> 0x1fU)));
        bufp->chgBit(oldp+242,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+244,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+245,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+246,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x1aU))));
        bufp->chgSData(oldp+247,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+248,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 6U))),10);
        bufp->chgCData(oldp+249,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                        >> 4U))),2);
        bufp->chgBit(oldp+250,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 3U))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 2U))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 1U))));
        bufp->chgBit(oldp+253,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        bufp->chgCData(oldp+254,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+255,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                           >> 0x18U))),5);
        bufp->chgSData(oldp+256,((0x7ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0xdU))),11);
        bufp->chgBit(oldp+257,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                      >> 0xbU))));
        bufp->chgCData(oldp+259,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                        >> 8U))),3);
        bufp->chgCData(oldp+260,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 4U))),4);
        bufp->chgCData(oldp+261,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)),4);
        bufp->chgCData(oldp+262,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+263,((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d)),24);
        bufp->chgBit(oldp+264,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
        bufp->chgSData(oldp+265,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+266,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                          >> 0xcU))),4);
        bufp->chgSData(oldp+267,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        bufp->chgCData(oldp+268,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+269,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+270,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x16U))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x15U))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x14U))));
        bufp->chgCData(oldp+273,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                        >> 0x11U))),3);
        bufp->chgBit(oldp+274,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x10U))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0xfU))));
        bufp->chgCData(oldp+276,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+277,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                           >> 5U))),7);
        bufp->chgBit(oldp+278,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 4U))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 3U))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 2U))));
        bufp->chgBit(oldp+281,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 1U))));
        bufp->chgBit(oldp+282,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d)));
        bufp->chgQData(oldp+283,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
        bufp->chgBit(oldp+285,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        bufp->chgIData(oldp+286,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        bufp->chgIData(oldp+287,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        bufp->chgIData(oldp+288,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        bufp->chgIData(oldp+289,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        bufp->chgIData(oldp+290,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        bufp->chgIData(oldp+291,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        bufp->chgIData(oldp+292,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        bufp->chgIData(oldp+293,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        bufp->chgIData(oldp+294,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                          >> 2U))),32);
        bufp->chgCData(oldp+295,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp))),2);
        bufp->chgCData(oldp+296,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        bufp->chgCData(oldp+297,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+298,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+299,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x16U))));
        bufp->chgBit(oldp+300,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x15U))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x14U))));
        bufp->chgCData(oldp+302,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                        >> 0x11U))),3);
        bufp->chgBit(oldp+303,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+304,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0xfU))));
        bufp->chgCData(oldp+305,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+306,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                           >> 5U))),7);
        bufp->chgBit(oldp+307,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 4U))));
        bufp->chgBit(oldp+308,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 3U))));
        bufp->chgBit(oldp+309,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 2U))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 1U))));
        bufp->chgBit(oldp+311,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs)));
        bufp->chgQData(oldp+312,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp),34);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgCData(oldp+314,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
        bufp->chgIData(oldp+315,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d)),32);
        bufp->chgIData(oldp+316,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                                          >> 0x20U))),32);
        bufp->chgCData(oldp+317,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+318,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 0x18U))),5);
        bufp->chgSData(oldp+319,((0x7ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 0xdU))),11);
        bufp->chgBit(oldp+320,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+321,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                      >> 0xbU))));
        bufp->chgCData(oldp+322,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                        >> 8U))),3);
        bufp->chgCData(oldp+323,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                          >> 4U))),4);
        bufp->chgCData(oldp+324,((0xfU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
        bufp->chgBit(oldp+325,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned))));
        bufp->chgCData(oldp+326,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        bufp->chgCData(oldp+327,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+328,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset));
        bufp->chgBit(oldp+329,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive));
        bufp->chgIData(oldp+330,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount),32);
        bufp->chgIData(oldp+331,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount),32);
        bufp->chgCData(oldp+332,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+333,(vlSelf->top_verilator__DOT__uart_sys_tx));
        bufp->chgSData(oldp+334,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o),16);
        bufp->chgSData(oldp+335,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o) 
                                   << 0xbU) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o))))))))))))),12);
        bufp->chgBit(oldp+336,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o));
        bufp->chgBit(oldp+337,(((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck))));
        bufp->chgBit(oldp+338,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q));
        bufp->chgBit(oldp+339,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0]));
        bufp->chgBit(oldp+340,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1]));
        bufp->chgBit(oldp+341,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0]));
        bufp->chgBit(oldp+342,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1]));
        bufp->chgBit(oldp+343,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2]));
        bufp->chgBit(oldp+344,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3]));
        bufp->chgBit(oldp+345,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4]));
        bufp->chgBit(oldp+346,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5]));
        bufp->chgBit(oldp+347,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6]));
        bufp->chgBit(oldp+348,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7]));
        bufp->chgBit(oldp+349,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg));
        bufp->chgBit(oldp+350,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid));
        bufp->chgBit(oldp+351,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 1U))));
        bufp->chgBit(oldp+352,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        bufp->chgBit(oldp+353,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req));
        bufp->chgIData(oldp+354,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
        bufp->chgBit(oldp+355,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we));
        bufp->chgIData(oldp+356,(VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q), 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))),32);
        bufp->chgCData(oldp+357,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be),4);
        bufp->chgBit(oldp+358,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                               [1U]));
        bufp->chgBit(oldp+359,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
        bufp->chgBit(oldp+360,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q));
        bufp->chgBit(oldp+361,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
        bufp->chgCData(oldp+362,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+363,((0xffffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
        bufp->chgBit(oldp+364,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy));
        bufp->chgIData(oldp+365,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
        bufp->chgIData(oldp+366,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
        bufp->chgIData(oldp+367,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
        bufp->chgIData(oldp+368,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
        bufp->chgIData(oldp+369,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
        bufp->chgIData(oldp+370,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
        bufp->chgIData(oldp+371,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
        bufp->chgIData(oldp+372,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
        bufp->chgIData(oldp+373,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q)),32);
        bufp->chgIData(oldp+374,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+375,(((0xffc00U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               << 4U)) 
                                  | (0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               >> 0x10U)))),20);
        bufp->chgIData(oldp+376,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                                  + ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                      ? ((IData)(1U) 
                                         << (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))
                                      : 0U))),32);
        bufp->chgBit(oldp+377,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x14U))));
        bufp->chgBit(oldp+378,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x10U))));
        bufp->chgCData(oldp+379,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x11U))),3);
        bufp->chgBit(oldp+380,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0xfU))));
        bufp->chgIData(oldp+381,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
        bufp->chgBit(oldp+382,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))));
        bufp->chgBit(oldp+383,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid));
        bufp->chgCData(oldp+384,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror),3);
        bufp->chgIData(oldp+385,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
        bufp->chgIData(oldp+386,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
        bufp->chgIData(oldp+387,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
        bufp->chgIData(oldp+388,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3),32);
        bufp->chgIData(oldp+389,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted),32);
        bufp->chgIData(oldp+390,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        bufp->chgIData(oldp+391,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        bufp->chgIData(oldp+392,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        bufp->chgIData(oldp+393,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
        bufp->chgIData(oldp+394,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
        bufp->chgIData(oldp+395,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3),32);
        bufp->chgSData(oldp+396,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        bufp->chgSData(oldp+397,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        bufp->chgCData(oldp+398,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        bufp->chgBit(oldp+399,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                >> 0x1fU)));
        bufp->chgBit(oldp+400,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+401,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+402,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+404,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x1aU))));
        bufp->chgSData(oldp+405,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+406,((0x3ffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 6U))),10);
        bufp->chgCData(oldp+407,((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                        >> 4U))),2);
        bufp->chgBit(oldp+408,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 3U))));
        bufp->chgBit(oldp+409,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 2U))));
        bufp->chgCData(oldp+410,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
        bufp->chgSData(oldp+411,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+412,((0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                          >> 0xcU))),4);
        bufp->chgSData(oldp+413,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
        bufp->chgCData(oldp+414,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+415,((0x3fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+416,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x16U))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x15U))));
        bufp->chgCData(oldp+418,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x11U))),3);
        bufp->chgCData(oldp+419,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+420,((0x7fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 5U))),7);
        bufp->chgBit(oldp+421,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 4U))));
        bufp->chgBit(oldp+422,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 3U))));
        bufp->chgBit(oldp+423,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 2U))));
        bufp->chgBit(oldp+424,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 1U))));
        bufp->chgBit(oldp+425,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)));
        bufp->chgQData(oldp+426,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
        bufp->chgQData(oldp+428,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
        bufp->chgBit(oldp+430,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
        bufp->chgCData(oldp+431,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
        bufp->chgCData(oldp+432,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
        bufp->chgCData(oldp+433,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
        bufp->chgQData(oldp+434,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
        bufp->chgQData(oldp+436,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
        bufp->chgQData(oldp+438,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
        bufp->chgQData(oldp+440,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
        bufp->chgQData(oldp+442,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        bufp->chgQData(oldp+444,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        bufp->chgQData(oldp+446,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        bufp->chgQData(oldp+448,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        bufp->chgQData(oldp+450,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        bufp->chgQData(oldp+452,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
        bufp->chgQData(oldp+454,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
        bufp->chgQData(oldp+456,((((QData)((IData)(
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
        bufp->chgBit(oldp+458,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume));
        bufp->chgBit(oldp+459,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go));
        bufp->chgBit(oldp+460,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
        bufp->chgQData(oldp+461,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
        bufp->chgBit(oldp+463,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
        bufp->chgBit(oldp+464,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+465,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
        bufp->chgBit(oldp+466,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x17U))));
        bufp->chgCData(oldp+467,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U))),3);
        bufp->chgBit(oldp+468,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x13U))));
        bufp->chgBit(oldp+469,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x12U))));
        bufp->chgBit(oldp+470,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x11U))));
        bufp->chgBit(oldp+471,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x10U))));
        bufp->chgSData(oldp+472,((0xffffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),16);
        bufp->chgCData(oldp+473,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q),2);
        bufp->chgCData(oldp+474,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q),3);
        bufp->chgCData(oldp+475,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
        bufp->chgCData(oldp+476,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
        bufp->chgIData(oldp+477,(((IData)(0xffffffffU) 
                                  << (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x11U)))),32);
        bufp->chgBit(oldp+478,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en));
        bufp->chgIData(oldp+479,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                   ? ((IData)(1U) << 
                                      (7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x11U)))
                                   : 0U)),32);
        bufp->chgCData(oldp+480,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked),2);
        bufp->chgBit(oldp+481,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp));
        bufp->chgBit(oldp+482,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp));
        bufp->chgCData(oldp+483,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp),3);
        bufp->chgBit(oldp+484,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o));
        bufp->chgIData(oldp+485,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
                                   ? (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
                                       << 7U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q))))))))
                                   : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                                       ? (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                   >> 0x10U))
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o)))),32);
        bufp->chgCData(oldp+486,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q)),8);
        bufp->chgCData(oldp+487,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 8U))),8);
        bufp->chgCData(oldp+488,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+489,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
                                   << 7U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q))))))))),8);
        bufp->chgBit(oldp+490,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q));
        bufp->chgBit(oldp+491,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q));
        bufp->chgBit(oldp+492,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+493,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+494,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x10U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+495,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+496,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x10U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+497,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x11U))));
        bufp->chgBit(oldp+498,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+499,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x11U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+500,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+501,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x11U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+502,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x12U))));
        bufp->chgBit(oldp+503,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+504,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x12U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+505,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+506,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x12U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+507,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x13U))));
        bufp->chgBit(oldp+508,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+509,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x13U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+510,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+511,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x13U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+512,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x14U))));
        bufp->chgBit(oldp+513,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+514,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x14U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+515,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+516,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x14U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+517,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x15U))));
        bufp->chgBit(oldp+518,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+519,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x15U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+520,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+521,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x15U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+522,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x16U))));
        bufp->chgBit(oldp+523,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+524,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x16U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+525,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+526,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x16U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+527,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                      >> 0x17U))));
        bufp->chgBit(oldp+528,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+529,(((((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x17U)) 
                                    == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
                                   | (0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+530,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+531,((1U & ((0x1f4U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                                       ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                          >> 0x17U)
                                       : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+532,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o));
        bufp->chgCData(oldp+533,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+534,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+535,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+536,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+537,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+538,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+539,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+540,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+541,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+542,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+543,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+544,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+545,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+546,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+547,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+548,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+549,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+550,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+551,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+552,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+553,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+554,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+555,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+556,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+557,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+558,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+559,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+560,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+561,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+562,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+563,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+564,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+565,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+566,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+567,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+568,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+569,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+570,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+571,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+572,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+573,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+574,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+575,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+576,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+577,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+578,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+579,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+580,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgBit(oldp+581,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o));
        bufp->chgBit(oldp+582,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o));
        bufp->chgBit(oldp+583,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o));
        bufp->chgCData(oldp+584,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish),3);
        bufp->chgBit(oldp+585,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o));
        bufp->chgCData(oldp+586,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o),8);
        bufp->chgBit(oldp+587,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q));
        bufp->chgBit(oldp+588,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d));
        bufp->chgBit(oldp+589,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q));
        bufp->chgBit(oldp+590,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d))));
        bufp->chgBit(oldp+591,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
        bufp->chgBit(oldp+592,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
        bufp->chgBit(oldp+593,((1U <= (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count))));
        bufp->chgBit(oldp+594,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos));
        bufp->chgBit(oldp+595,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg));
        bufp->chgCData(oldp+596,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q),2);
        bufp->chgBit(oldp+597,((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))));
        bufp->chgCData(oldp+598,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q),3);
        bufp->chgCData(oldp+599,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d),3);
        bufp->chgCData(oldp+600,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q),8);
        bufp->chgCData(oldp+601,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d),8);
        bufp->chgCData(oldp+602,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q),8);
        bufp->chgCData(oldp+603,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+604,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+605,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+606,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 7U)) 
                                           << 7U))),8);
        bufp->chgBit(oldp+607,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 7U))));
        bufp->chgBit(oldp+608,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q));
        bufp->chgQData(oldp+609,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q),64);
        bufp->chgQData(oldp+611,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)),64);
        bufp->chgQData(oldp+613,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q),64);
        bufp->chgBit(oldp+615,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid
                               [0U]));
        bufp->chgBit(oldp+616,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q));
        bufp->chgIData(oldp+617,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q),32);
        bufp->chgCData(oldp+618,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q),2);
        bufp->chgCData(oldp+619,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q),3);
        bufp->chgCData(oldp+620,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d),3);
        bufp->chgCData(oldp+621,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q),3);
        bufp->chgBit(oldp+622,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid));
        bufp->chgSData(oldp+623,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q),9);
        bufp->chgSData(oldp+624,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
                                   ? 0U : (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))))),9);
        bufp->chgBit(oldp+625,((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
        bufp->chgCData(oldp+626,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q),2);
        bufp->chgCData(oldp+627,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q),3);
        bufp->chgCData(oldp+628,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d),3);
        bufp->chgCData(oldp+629,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q),8);
        bufp->chgBit(oldp+630,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte));
        bufp->chgBit(oldp+631,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))));
        bufp->chgCData(oldp+632,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+633,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+634,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+635,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 7U)) 
                                           << 7U))),8);
        bufp->chgBit(oldp+636,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 7U))));
        bufp->chgCData(oldp+637,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+638,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+639,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+640,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 7U)) 
                                           << 7U))),8);
        bufp->chgBit(oldp+641,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+642,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q)
                                   ? (((0U == ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                                ? 0x7fU
                                                : (0x7fU 
                                                   & (((1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                           >> 7U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           >> 7U)))
                                                       ? 
                                                      ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                       : 
                                                      (((IData)(0x7fU) 
                                                        - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                       + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                                       << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full))
                                   : 0U)),32);
        bufp->chgBit(oldp+643,((0U == ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                        ? 0x7fU : (0x7fU 
                                                   & (((1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                           >> 7U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           >> 7U)))
                                                       ? 
                                                      ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                       : 
                                                      (((IData)(0x7fU) 
                                                        - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                       + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))));
        bufp->chgCData(oldp+644,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)
                                   ? 0x7fU : (0x7fU 
                                              & (((1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                      >> 7U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 7U)))
                                                  ? 
                                                 ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                  - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                  : 
                                                 (((IData)(0x7fU) 
                                                   - (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                  + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))),7);
        bufp->chgBit(oldp+645,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full)) 
                                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgBit(oldp+646,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x7eU == (0x7fU 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+647,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+648,((1U & ((0xffffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)) 
                                      | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+649,((1U & ((0x1fffeU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q) 
                                                   << 1U)) 
                                      | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+650,((0x7fffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq))),15);
        bufp->chgBit(oldp+651,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid))));
        bufp->chgBit(oldp+652,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)) 
                                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgCData(oldp+653,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)
                                   ? 0x80U : (0xffU 
                                              & (((1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                      >> 7U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 7U)))
                                                  ? 
                                                 ((0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 (((IData)(0x80U) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
        bufp->chgBit(oldp+654,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full)) 
                                      & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgCData(oldp+655,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full)
                                   ? 0x80U : (0xffU 
                                              & (((1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                      >> 7U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 7U)))
                                                  ? 
                                                 ((0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 (((IData)(0x80U) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
        bufp->chgBit(oldp+656,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x7fU == (0x7fU 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+657,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0]));
        bufp->chgBit(oldp+658,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1]));
        bufp->chgIData(oldp+659,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0]),32);
        bufp->chgIData(oldp+660,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1]),32);
        bufp->chgBit(oldp+661,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0]));
        bufp->chgBit(oldp+662,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1]));
        bufp->chgCData(oldp+663,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0]),4);
        bufp->chgCData(oldp+664,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1]),4);
        bufp->chgIData(oldp+665,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0]),32);
        bufp->chgIData(oldp+666,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgSData(oldp+667,(((0xff00U & (((2U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                [1U])
                                                ? (
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                   [1U] 
                                                   >> 8U)
                                                : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o) 
                                                   >> 8U)) 
                                              << 8U)) 
                                  | (0xffU & ((1U & 
                                               vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                               [1U])
                                               ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                              [1U] : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o))))),16);
        bufp->chgIData(oldp+668,(((((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                     [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                              [4U] 
                                              >> 0x18U)
                                     : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                >> 0x18U))) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((4U 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                      [4U])
                                                      ? 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                      [4U] 
                                                      >> 0x10U)
                                                      : (IData)(
                                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                         [4U])
                                                         ? 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U] 
                                                         >> 8U)
                                                         : (IData)(
                                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                          [4U])
                                                          ? 
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U]
                                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q))))))),32);
        bufp->chgIData(oldp+669,(((((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                     [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                              [4U] 
                                              >> 0x18U)
                                     : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                >> 0x38U))) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((4U 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                      [4U])
                                                      ? 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                      [4U] 
                                                      >> 0x10U)
                                                      : (IData)(
                                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                 >> 0x30U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                         [4U])
                                                         ? 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U] 
                                                         >> 8U)
                                                         : (IData)(
                                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                    >> 0x28U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                          [4U])
                                                          ? 
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U]
                                                          : (IData)(
                                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                     >> 0x20U)))))))),32);
        bufp->chgIData(oldp+670,(((((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                     [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                              [4U] 
                                              >> 0x18U)
                                     : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                >> 0x18U))) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((4U 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                      [4U])
                                                      ? 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                      [4U] 
                                                      >> 0x10U)
                                                      : (IData)(
                                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                         [4U])
                                                         ? 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U] 
                                                         >> 8U)
                                                         : (IData)(
                                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                          [4U])
                                                          ? 
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U]
                                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q))))))),32);
        bufp->chgIData(oldp+671,(((((8U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                     [4U]) ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                              [4U] 
                                              >> 0x18U)
                                     : (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                >> 0x38U))) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((4U 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                      [4U])
                                                      ? 
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                      [4U] 
                                                      >> 0x10U)
                                                      : (IData)(
                                                                (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                 >> 0x30U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                         [4U])
                                                         ? 
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U] 
                                                         >> 8U)
                                                         : (IData)(
                                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                    >> 0x28U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                          [4U])
                                                          ? 
                                                         vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                                         [4U]
                                                          : (IData)(
                                                                    (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                     >> 0x20U)))))))),32);
        bufp->chgBit(oldp+672,(((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))) 
                                & ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                    >= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)))));
        bufp->chgBit(oldp+673,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x7fU == (0x7fU 
                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+674,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_ready));
        bufp->chgBit(oldp+675,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
        bufp->chgBit(oldp+676,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req));
        bufp->chgBit(oldp+677,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq));
        bufp->chgBit(oldp+678,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q));
        bufp->chgBit(oldp+679,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
        bufp->chgBit(oldp+680,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
        bufp->chgBit(oldp+681,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack));
        bufp->chgBit(oldp+682,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq));
        bufp->chgBit(oldp+683,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+684,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[0]));
        bufp->chgBit(oldp+685,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[1]));
        bufp->chgBit(oldp+686,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[2]));
        bufp->chgBit(oldp+687,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[3]));
        bufp->chgBit(oldp+688,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4]));
        bufp->chgBit(oldp+689,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[5]));
        bufp->chgBit(oldp+690,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[6]));
        bufp->chgBit(oldp+691,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[7]));
        bufp->chgIData(oldp+692,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata),32);
        bufp->chgIData(oldp+693,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
                                          >> 2U))),32);
        bufp->chgCData(oldp+694,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))),2);
        bufp->chgQData(oldp+695,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q),34);
        bufp->chgQData(oldp+697,((0x3ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),34);
        bufp->chgQData(oldp+699,((0x3ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 2U)))),34);
        bufp->chgQData(oldp+701,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata),64);
        bufp->chgCData(oldp+703,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        bufp->chgIData(oldp+704,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o),32);
        bufp->chgIData(oldp+705,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+706,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+707,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+708,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+709,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+710,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+711,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+712,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+713,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+714,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+715,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+716,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+717,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+718,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+719,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+720,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+721,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+722,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+723,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+724,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+725,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+726,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+727,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+728,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+729,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+730,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+731,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+732,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+733,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+734,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+735,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+736,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+737,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+738,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+739,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+740,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+741,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+742,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+743,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+744,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+745,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+746,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
        bufp->chgCData(oldp+747,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+748,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+749,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+750,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
        bufp->chgCData(oldp+751,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+752,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+753,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+754,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
        bufp->chgCData(oldp+755,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+756,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+757,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+758,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
        bufp->chgCData(oldp+759,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+760,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+761,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+762,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
        bufp->chgCData(oldp+763,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+764,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+765,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+766,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
        bufp->chgCData(oldp+767,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+768,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+769,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+770,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
        bufp->chgCData(oldp+771,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+772,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+773,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+774,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
        bufp->chgCData(oldp+775,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+776,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+777,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+778,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
        bufp->chgCData(oldp+779,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+780,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+781,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+782,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
        bufp->chgCData(oldp+783,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+784,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+785,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+786,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
        bufp->chgCData(oldp+787,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+788,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+789,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+790,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
        bufp->chgCData(oldp+791,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+792,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+793,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+794,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
        bufp->chgCData(oldp+795,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+796,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+797,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+798,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
        bufp->chgCData(oldp+799,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+800,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+801,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+802,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
        bufp->chgCData(oldp+803,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+804,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+805,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+806,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
        bufp->chgCData(oldp+807,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+808,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+809,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+810,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
        bufp->chgCData(oldp+811,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+812,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+813,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+814,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
        bufp->chgCData(oldp+815,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+816,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+817,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+818,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
        bufp->chgCData(oldp+819,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+820,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+821,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+822,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
        bufp->chgCData(oldp+823,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+824,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+825,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+826,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
        bufp->chgCData(oldp+827,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+828,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+829,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+830,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
        bufp->chgCData(oldp+831,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+832,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+833,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q),32);
        bufp->chgBit(oldp+834,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q));
        bufp->chgCData(oldp+835,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+836,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+837,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+838,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+839,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+840,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+841,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+842,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+843,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+844,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+845,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+846,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+847,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+848,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+849,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+850,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+851,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+852,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+853,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+854,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+855,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+856,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+857,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+858,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+859,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+860,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+861,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+862,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+863,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+864,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+865,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+866,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+867,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+868,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+869,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+870,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+871,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+872,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+873,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+874,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+875,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
        bufp->chgCData(oldp+876,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+877,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+878,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+879,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
        bufp->chgCData(oldp+880,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+881,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+882,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+883,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
        bufp->chgCData(oldp+884,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+885,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+886,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+887,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
        bufp->chgCData(oldp+888,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+889,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+890,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+891,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
        bufp->chgCData(oldp+892,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+893,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+894,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+895,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
        bufp->chgCData(oldp+896,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+897,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+898,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+899,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
        bufp->chgCData(oldp+900,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+901,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+902,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+903,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
        bufp->chgCData(oldp+904,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+905,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+906,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+907,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
        bufp->chgCData(oldp+908,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+909,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+910,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+911,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
        bufp->chgCData(oldp+912,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+913,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+914,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+915,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
        bufp->chgCData(oldp+916,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+917,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+918,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+919,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
        bufp->chgCData(oldp+920,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+921,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+922,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+923,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
        bufp->chgCData(oldp+924,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+925,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+926,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+927,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
        bufp->chgCData(oldp+928,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+929,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+930,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+931,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
        bufp->chgCData(oldp+932,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+933,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+934,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+935,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
        bufp->chgCData(oldp+936,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+937,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+938,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+939,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
        bufp->chgCData(oldp+940,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+941,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+942,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+943,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
        bufp->chgCData(oldp+944,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+945,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+946,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+947,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
        bufp->chgCData(oldp+948,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+949,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+950,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+951,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
        bufp->chgCData(oldp+952,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+953,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+954,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+955,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
        bufp->chgCData(oldp+956,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+957,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+958,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+959,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
        bufp->chgCData(oldp+960,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+961,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+962,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+963,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+964,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+965,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+966,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+967,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+968,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+969,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+970,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+971,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+972,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+973,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+974,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+975,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+976,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+977,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+978,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+979,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+980,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+981,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+982,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+983,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+984,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+985,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+986,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+987,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+988,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+989,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+990,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+991,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+992,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+993,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+994,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+995,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+996,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+997,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+998,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+999,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+1000,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1001,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1002,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1003,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
        bufp->chgCData(oldp+1004,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1005,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1006,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1007,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
        bufp->chgCData(oldp+1008,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1009,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1010,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1011,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
        bufp->chgCData(oldp+1012,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1013,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1014,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1015,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
        bufp->chgCData(oldp+1016,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1017,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1018,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1019,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
        bufp->chgCData(oldp+1020,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1021,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1022,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1023,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
        bufp->chgCData(oldp+1024,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1025,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1026,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1027,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
        bufp->chgCData(oldp+1028,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1029,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1030,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1031,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
        bufp->chgCData(oldp+1032,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1033,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1034,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1035,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
        bufp->chgCData(oldp+1036,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1037,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1038,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1039,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
        bufp->chgCData(oldp+1040,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1041,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1042,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1043,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
        bufp->chgCData(oldp+1044,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1045,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1046,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1047,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
        bufp->chgCData(oldp+1048,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1049,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1050,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1051,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
        bufp->chgCData(oldp+1052,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1053,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1054,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1055,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
        bufp->chgCData(oldp+1056,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1057,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1058,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1059,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
        bufp->chgCData(oldp+1060,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1061,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1062,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1063,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
        bufp->chgCData(oldp+1064,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1065,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1066,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1067,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
        bufp->chgCData(oldp+1068,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1069,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1070,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1071,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
        bufp->chgCData(oldp+1072,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1073,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1074,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1075,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
        bufp->chgCData(oldp+1076,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1077,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1078,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1079,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
        bufp->chgCData(oldp+1080,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1081,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1082,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1083,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
        bufp->chgCData(oldp+1084,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1085,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1086,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1087,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
        bufp->chgCData(oldp+1088,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1089,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1090,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                   >> 0x18U)),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+1091,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        bufp->chgIData(oldp+1092,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1093,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1094,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
        bufp->chgIData(oldp+1095,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
        bufp->chgIData(oldp+1096,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
        bufp->chgIData(oldp+1097,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
        bufp->chgIData(oldp+1098,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
        bufp->chgIData(oldp+1099,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
        bufp->chgIData(oldp+1100,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
        bufp->chgIData(oldp+1101,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
        bufp->chgIData(oldp+1102,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
        bufp->chgIData(oldp+1103,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
        bufp->chgIData(oldp+1104,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
        bufp->chgIData(oldp+1105,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
        bufp->chgIData(oldp+1106,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
        bufp->chgIData(oldp+1107,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
        bufp->chgIData(oldp+1108,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
        bufp->chgIData(oldp+1109,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
        bufp->chgIData(oldp+1110,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
        bufp->chgIData(oldp+1111,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
        bufp->chgIData(oldp+1112,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
        bufp->chgIData(oldp+1113,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
        bufp->chgIData(oldp+1114,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
        bufp->chgIData(oldp+1115,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
        bufp->chgIData(oldp+1116,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
        bufp->chgIData(oldp+1117,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
        bufp->chgIData(oldp+1118,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
        bufp->chgIData(oldp+1119,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
        bufp->chgIData(oldp+1120,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
        bufp->chgIData(oldp+1121,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
        bufp->chgIData(oldp+1122,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
        bufp->chgIData(oldp+1123,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
        bufp->chgIData(oldp+1124,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
        bufp->chgIData(oldp+1125,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
        bufp->chgIData(oldp+1126,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1127,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1128,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1129,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1130,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1131,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1132,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1133,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1134,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1135,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1136,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1137,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1138,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1139,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1140,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1141,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1142,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1143,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1144,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1145,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1146,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1147,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1148,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1149,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1150,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1151,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1152,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1153,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1154,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1155,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1156,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
        bufp->chgBit(oldp+1157,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        bufp->chgQData(oldp+1158,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
        bufp->chgQData(oldp+1160,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
        bufp->chgBit(oldp+1162,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1163,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1164,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1165,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        bufp->chgBit(oldp+1166,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgIData(oldp+1167,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1168,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1169,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        bufp->chgCData(oldp+1170,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        bufp->chgCData(oldp+1171,((3U & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                          ? ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 2U)
                                          : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        bufp->chgBit(oldp+1172,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgCData(oldp+1173,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+1174,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 2U))));
        bufp->chgBit(oldp+1175,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1176,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1177,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 4U))));
        bufp->chgCData(oldp+1178,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1179,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1180,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1181,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1182,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0xfU))));
        bufp->chgSData(oldp+1183,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
        bufp->chgIData(oldp+1184,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1187,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
        bufp->chgCData(oldp+1188,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0x1cU)),4);
        bufp->chgSData(oldp+1189,((0xfffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0x10U))),12);
        bufp->chgBit(oldp+1190,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1191,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1192,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1193,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1194,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 9U))));
        bufp->chgCData(oldp+1195,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 6U))),3);
        bufp->chgBit(oldp+1196,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 5U))));
        bufp->chgBit(oldp+1197,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 4U))));
        bufp->chgBit(oldp+1198,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 3U))));
        bufp->chgCData(oldp+1199,((3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        bufp->chgIData(oldp+1200,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1202,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1203,((3U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        bufp->chgCData(oldp+1204,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),2);
        bufp->chgIData(oldp+1205,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1206,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1207,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1208,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
        bufp->chgIData(oldp+1209,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgSData(oldp+1210,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
        bufp->chgQData(oldp+1211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        bufp->chgQData(oldp+1213,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        bufp->chgQData(oldp+1215,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        bufp->chgQData(oldp+1217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        bufp->chgQData(oldp+1219,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        bufp->chgQData(oldp+1221,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        bufp->chgQData(oldp+1223,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        bufp->chgQData(oldp+1225,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        bufp->chgQData(oldp+1227,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        bufp->chgQData(oldp+1229,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        bufp->chgQData(oldp+1231,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        bufp->chgQData(oldp+1233,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        bufp->chgQData(oldp+1235,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        bufp->chgQData(oldp+1237,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        bufp->chgQData(oldp+1239,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        bufp->chgQData(oldp+1241,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        bufp->chgQData(oldp+1243,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        bufp->chgQData(oldp+1245,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        bufp->chgQData(oldp+1247,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        bufp->chgQData(oldp+1249,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        bufp->chgQData(oldp+1251,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        bufp->chgQData(oldp+1253,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        bufp->chgQData(oldp+1255,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        bufp->chgQData(oldp+1257,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        bufp->chgQData(oldp+1259,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        bufp->chgQData(oldp+1261,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        bufp->chgQData(oldp+1263,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        bufp->chgQData(oldp+1265,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        bufp->chgQData(oldp+1267,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        bufp->chgQData(oldp+1269,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        bufp->chgQData(oldp+1271,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        bufp->chgQData(oldp+1273,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        bufp->chgQData(oldp+1275,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+1277,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        bufp->chgIData(oldp+1279,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1280,((0x28001048U | (4U 
                                                  & (((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q)) 
                                                      >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                     << 2U)))),32);
        bufp->chgIData(oldp+1281,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                  [vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1283,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1284,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
        bufp->chgQData(oldp+1285,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1287,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1289,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1291,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1293,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1295,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1297,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1299,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1301,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1303,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1305,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1307,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1309,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1311,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1313,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1315,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1317,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1319,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1321,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1323,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1325,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1327,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1329,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),64);
        bufp->chgQData(oldp+1331,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1333,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1335,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1337,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1339,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1341,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1343,((0xffffffffffULL 
                                   & (1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1345,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgBit(oldp+1347,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
        bufp->chgCData(oldp+1348,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                    << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q))),2);
        bufp->chgIData(oldp+1349,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
        bufp->chgIData(oldp+1350,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
        bufp->chgBit(oldp+1351,((1U & ((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                         << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q)) 
                                       >> (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)))));
        bufp->chgBit(oldp+1352,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        bufp->chgIData(oldp+1353,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1354,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        bufp->chgIData(oldp+1355,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        bufp->chgQData(oldp+1356,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1358,((1ULL + vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
        bufp->chgCData(oldp+1360,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
        bufp->chgIData(oldp+1361,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+1362,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+1363,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        bufp->chgCData(oldp+1364,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
        bufp->chgCData(oldp+1365,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),3);
        bufp->chgCData(oldp+1366,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        bufp->chgCData(oldp+1367,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        bufp->chgQData(oldp+1368,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        bufp->chgIData(oldp+1370,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        bufp->chgIData(oldp+1371,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        bufp->chgIData(oldp+1372,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+1373,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        bufp->chgIData(oldp+1374,(((IData)(1U) << (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+1375,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                          [1U])),32);
        bufp->chgIData(oldp+1376,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+1377,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+1378,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        bufp->chgCData(oldp+1379,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        bufp->chgBit(oldp+1380,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        bufp->chgBit(oldp+1381,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        bufp->chgBit(oldp+1382,((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+1383,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        bufp->chgCData(oldp+1384,((3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgCData(oldp+1385,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        bufp->chgBit(oldp+1386,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
        bufp->chgBit(oldp+1387,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        bufp->chgBit(oldp+1388,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        bufp->chgQData(oldp+1389,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        bufp->chgQData(oldp+1391,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        bufp->chgBit(oldp+1393,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
        bufp->chgBit(oldp+1394,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        bufp->chgBit(oldp+1395,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        bufp->chgBit(oldp+1396,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        bufp->chgBit(oldp+1397,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+1398,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        bufp->chgBit(oldp+1399,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        bufp->chgBit(oldp+1400,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        bufp->chgBit(oldp+1401,((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
        bufp->chgCData(oldp+1402,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        bufp->chgBit(oldp+1403,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        bufp->chgBit(oldp+1404,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        bufp->chgCData(oldp+1405,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        bufp->chgIData(oldp+1406,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        bufp->chgCData(oldp+1407,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+1408,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgBit(oldp+1409,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        bufp->chgBit(oldp+1410,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgBit(oldp+1411,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        bufp->chgBit(oldp+1412,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        bufp->chgBit(oldp+1413,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        bufp->chgBit(oldp+1414,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
        bufp->chgBit(oldp+1415,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgIData(oldp+1416,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                    ? (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                              [0U])
                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        bufp->chgBit(oldp+1417,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
        bufp->chgQData(oldp+1418,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                    ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                    : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                        ? (1ULL | ((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                   << 2U))
                                        : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                            : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                ? (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                      << 4U))
                                                : (1ULL 
                                                   | ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                      << 1U))))))),33);
        bufp->chgBit(oldp+1420,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
        bufp->chgBit(oldp+1421,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec))));
        bufp->chgBit(oldp+1422,(((3U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                    | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1423,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 3U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 3U)))));
        bufp->chgBit(oldp+1424,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 4U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 4U)))));
        bufp->chgBit(oldp+1425,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 5U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 5U)))));
        bufp->chgBit(oldp+1426,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 6U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 6U)))));
        bufp->chgBit(oldp+1427,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 7U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 7U)))));
        bufp->chgBit(oldp+1428,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 8U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 8U)))));
        bufp->chgBit(oldp+1429,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 9U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 9U)))));
        bufp->chgBit(oldp+1430,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 0xaU)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1431,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 0xbU)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1432,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 0xcU)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1433,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                                       & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr))));
        bufp->chgBit(oldp+1434,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                           >> 2U)) 
                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1435,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id),32);
        bufp->chgIData(oldp+1436,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                   << 1U)),32);
        bufp->chgCData(oldp+1437,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1438,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1439,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1440,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
        bufp->chgSData(oldp+1441,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        bufp->chgBit(oldp+1442,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
        bufp->chgBit(oldp+1443,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err));
        bufp->chgBit(oldp+1444,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        bufp->chgBit(oldp+1445,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
        bufp->chgSData(oldp+1446,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+1447,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
        bufp->chgBit(oldp+1448,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        bufp->chgCData(oldp+1449,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x19U))),3);
        bufp->chgIData(oldp+1450,((((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+1451,((((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1452,((((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xdU) | ((0x1000U 
                                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 7U))))))),32);
        bufp->chgIData(oldp+1453,((0xfffff000U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+1454,((((- (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                                 | ((0x800U 
                                                     & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x14U)))))),32);
        bufp->chgIData(oldp+1455,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU))),32);
        bufp->chgBit(oldp+1456,(((0x340U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U)) 
                                 | (0x341U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)))));
        bufp->chgSData(oldp+1457,(((0x3e0U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xaU)) 
                                   | (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U)))),10);
        bufp->chgCData(oldp+1458,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x1bU)),5);
        bufp->chgIData(oldp+1459,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+1460,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        bufp->chgIData(oldp+1461,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
        bufp->chgIData(oldp+1462,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
        bufp->chgIData(oldp+1463,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
        bufp->chgCData(oldp+1464,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        bufp->chgIData(oldp+1465,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+1466,(vlSelf->top_verilator__DOT__uart_sys_rx));
        bufp->chgBit(oldp+1467,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive));
        bufp->chgIData(oldp+1468,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount),32);
        bufp->chgIData(oldp+1469,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount),32);
        bufp->chgSData(oldp+1470,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol),10);
        bufp->chgIData(oldp+1471,(vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+1472,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq));
        bufp->chgBit(oldp+1473,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq));
        bufp->chgBit(oldp+1474,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq));
        bufp->chgBit(oldp+1475,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart));
        bufp->chgCData(oldp+1476,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq),2);
        bufp->chgCData(oldp+1477,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq),2);
        bufp->chgBit(oldp+1478,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid));
        bufp->chgBit(oldp+1479,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__tx_fifo_full));
        bufp->chgCData(oldp+1480,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d),2);
        bufp->chgCData(oldp+1481,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1482,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+1483,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1484,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1485,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                            << 7U))),8);
        bufp->chgBit(oldp+1486,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgSData(oldp+1487,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq),15);
        bufp->chgSData(oldp+1488,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q),9);
        bufp->chgSData(oldp+1489,(((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
                                    ? 0U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start)
                                             ? 0xd9U
                                             : (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))))),9);
        bufp->chgBit(oldp+1490,((0x1b1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))));
        bufp->chgCData(oldp+1491,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d),2);
        bufp->chgCData(oldp+1492,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q),8);
        bufp->chgCData(oldp+1493,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d),8);
        bufp->chgBit(oldp+1494,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start));
        bufp->chgBit(oldp+1495,((1U & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__uart_irq)))));
        bufp->chgCData(oldp+1496,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d),2);
        bufp->chgBit(oldp+1497,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid));
        bufp->chgBit(oldp+1498,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_fifo_full));
        bufp->chgBit(oldp+1499,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o));
        bufp->chgCData(oldp+1500,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1501,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+1502,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1503,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1504,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                            << 7U))),8);
        bufp->chgBit(oldp+1505,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1506,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 & (0x7fU == (0x7fU 
                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgCData(oldp+1507,((0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1508,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+1509,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1510,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1511,((0x80U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                            << 7U))),8);
        bufp->chgBit(oldp+1512,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+1513,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready));
        bufp->chgBit(oldp+1514,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid));
        bufp->chgBit(oldp+1515,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en));
        bufp->chgBit(oldp+1516,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack));
        bufp->chgBit(oldp+1517,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
        bufp->chgBit(oldp+1518,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_req));
        bufp->chgBit(oldp+1519,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o));
        bufp->chgCData(oldp+1520,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)
                                    ? 2U : (3U & ((
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 1U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                   : 
                                                  (((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),2);
        bufp->chgBit(oldp+1521,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+1522,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
        bufp->chgBit(oldp+1523,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+1524,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1525,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+1526,((2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 1U)) 
                                         << 1U))),2);
        bufp->chgCData(oldp+1527,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+1528,((2U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             >> 1U)) 
                                         << 1U))),2);
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1530,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1531,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgIData(oldp+1532,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0]),32);
        bufp->chgIData(oldp+1533,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1]),32);
        bufp->chgBit(oldp+1534,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0]));
        bufp->chgBit(oldp+1535,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1]));
        bufp->chgIData(oldp+1536,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__instr_rdata_core),32);
        bufp->chgIData(oldp+1537,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                  [1U]),32);
        bufp->chgQData(oldp+1538,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
        bufp->chgCData(oldp+1540,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d),8);
        bufp->chgIData(oldp+1541,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                  [0U]),32);
        bufp->chgBit(oldp+1542,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                                [0U]));
        bufp->chgCData(oldp+1543,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+1544,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        bufp->chgBit(oldp+1545,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
        bufp->chgCData(oldp+1546,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
        bufp->chgBit(oldp+1547,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        bufp->chgBit(oldp+1548,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        bufp->chgBit(oldp+1549,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int));
        bufp->chgBit(oldp+1550,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering));
        bufp->chgBit(oldp+1551,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+1552,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        bufp->chgCData(oldp+1553,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        bufp->chgBit(oldp+1554,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        bufp->chgCData(oldp+1555,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+1556,(((2U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          >> 1U)))),2);
        bufp->chgBit(oldp+1557,((1U & (~ (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                       >> 1U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                               >> 1U)))))))))));
        bufp->chgCData(oldp+1558,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U))),2);
        bufp->chgCData(oldp+1559,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+1560,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h88c42b44__0) 
                                    << 2U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h077f4b9b__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
        bufp->chgCData(oldp+1561,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+1562,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)) 
                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))));
        bufp->chgBit(oldp+1563,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                  & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
        bufp->chgCData(oldp+1564,((0x1fU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                             ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b
                                             : (- vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        bufp->chgBit(oldp+1565,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
        bufp->chgIData(oldp+1566,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                    ? ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 2U) : (IData)(
                                                        (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))),32);
        bufp->chgBit(oldp+1567,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                 & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        bufp->chgBit(oldp+1568,(((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                 & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1569,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready))));
        bufp->chgBit(oldp+1570,(((7U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                 & (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+1571,(((8U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                 & (8U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+1572,(((9U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                 & (9U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+1573,(((6U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                 & (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+1574,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out));
        bufp->chgBit(oldp+1575,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
        bufp->chgCData(oldp+1576,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
        bufp->chgIData(oldp+1577,(((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 3U)) 
                                   << 2U)),32);
        bufp->chgIData(oldp+1578,(((1U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))
                                        ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                            << 0x18U) 
                                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                              >> 8U))
                                        : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                            << 0x10U) 
                                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                              >> 0x10U)))
                                    : ((1U & (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))
                                        ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                            << 8U) 
                                           | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                              >> 0x18U))
                                        : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
        bufp->chgIData(oldp+1579,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
        bufp->chgIData(oldp+1580,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
        bufp->chgQData(oldp+1581,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
        bufp->chgQData(oldp+1583,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
        bufp->chgCData(oldp+1585,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
        bufp->chgBit(oldp+1586,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval));
        bufp->chgCData(oldp+1587,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
        bufp->chgIData(oldp+1588,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1589,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        bufp->chgBit(oldp+1590,((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)) 
                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgTmp_h97dc7a37__0)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        bufp->chgBit(oldp+1591,((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)) 
                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgTmp_h97dc7a37__0)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        bufp->chgBit(oldp+1592,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_id));
        bufp->chgCData(oldp+1593,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgIData(oldp+1594,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        bufp->chgIData(oldp+1595,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        bufp->chgIData(oldp+1596,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex),32);
        bufp->chgBit(oldp+1597,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        bufp->chgBit(oldp+1598,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        bufp->chgBit(oldp+1599,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
        bufp->chgBit(oldp+1600,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
        bufp->chgCData(oldp+1601,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        bufp->chgCData(oldp+1602,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        bufp->chgBit(oldp+1603,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access));
        bufp->chgCData(oldp+1604,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op),2);
        bufp->chgBit(oldp+1605,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
        bufp->chgCData(oldp+1606,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
        bufp->chgBit(oldp+1607,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        bufp->chgBit(oldp+1608,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
        bufp->chgBit(oldp+1609,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
        bufp->chgBit(oldp+1610,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id));
        bufp->chgBit(oldp+1611,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+1612,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        bufp->chgIData(oldp+1613,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval),32);
        bufp->chgBit(oldp+1614,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
        bufp->chgBit(oldp+1615,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump));
        bufp->chgBit(oldp+1616,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch));
        bufp->chgBit(oldp+1617,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch));
        bufp->chgBit(oldp+1618,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load));
        bufp->chgBit(oldp+1619,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store));
        bufp->chgBit(oldp+1620,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id));
        bufp->chgBit(oldp+1621,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        bufp->chgCData(oldp+1622,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
        bufp->chgIData(oldp+1623,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        bufp->chgQData(oldp+1624,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        bufp->chgQData(oldp+1626,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        bufp->chgBit(oldp+1628,((0U == (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U)))));
        bufp->chgBit(oldp+1629,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
        bufp->chgQData(oldp+1630,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        bufp->chgQData(oldp+1632,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        bufp->chgCData(oldp+1634,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                    << 1U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))),2);
        bufp->chgIData(oldp+1635,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgQData(oldp+1636,((0x1ffffffffULL & 
                                   (~ ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                       << 1U)))),33);
        bufp->chgBit(oldp+1638,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+1639,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+1640,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+1641,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgQData(oldp+1642,((0x1ffffffffULL & 
                                   ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                     : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                         ? (~ ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U))
                                         : ((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U))))),33);
        bufp->chgBit(oldp+1644,((1U & (((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b) 
                                        >> 0x1fU) ? 
                                       ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         >> 0x1fU) 
                                        ^ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))))));
        bufp->chgBit(oldp+1645,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        bufp->chgBit(oldp+1646,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+1647,((8U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgCData(oldp+1648,((0x3fU & ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        bufp->chgIData(oldp+1649,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        bufp->chgQData(oldp+1650,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        bufp->chgQData(oldp+1652,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        bufp->chgBit(oldp+1654,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        bufp->chgIData(oldp+1655,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+1656,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+1657,(((0x10U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0xfU 
                                                          & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                             >> 0x18U))))) 
                                             << 4U)) 
                                   | (0xfU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                              >> 0x18U)))),5);
        bufp->chgCData(oldp+1658,((0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                            >> 0x10U))),5);
        bufp->chgBit(oldp+1659,(((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (6U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgBit(oldp+1660,(((4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (7U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgIData(oldp+1661,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        bufp->chgIData(oldp+1662,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        bufp->chgIData(oldp+1663,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   ^ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        bufp->chgIData(oldp+1664,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        bufp->chgBit(oldp+1665,((1U & (((IData)(0x20U) 
                                        - (0x1fU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                       >> 5U))));
        bufp->chgQData(oldp+1666,((0x7ffffffffULL & 
                                   (VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                    + VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        bufp->chgQData(oldp+1668,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        bufp->chgBit(oldp+1670,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        bufp->chgBit(oldp+1671,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        bufp->chgBit(oldp+1672,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        bufp->chgBit(oldp+1673,((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        bufp->chgQData(oldp+1674,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        bufp->chgQData(oldp+1676,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        bufp->chgQData(oldp+1678,((0x3ffffffffULL & 
                                   ((0x7ffffffffULL 
                                     & VL_MULS_QQQ(35, 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                    + (0x7ffffffffULL 
                                       & VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        bufp->chgBit(oldp+1680,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        bufp->chgBit(oldp+1681,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        bufp->chgBit(oldp+1682,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        bufp->chgIData(oldp+1683,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+1684,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+1685,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        bufp->chgIData(oldp+1686,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        bufp->chgQData(oldp+1687,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        bufp->chgCData(oldp+1689,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        bufp->chgBit(oldp+1690,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        bufp->chgBit(oldp+1691,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        bufp->chgBit(oldp+1692,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        bufp->chgBit(oldp+1693,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        bufp->chgBit(oldp+1694,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        bufp->chgCData(oldp+1695,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        bufp->chgBit(oldp+1696,((1U & (IData)((1ULL 
                                               & ((VL_MULS_QQQ(35, 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                   + 
                                                   VL_EXTENDS_QQ(35,34, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                  >> 0x22U))))));
        bufp->chgCData(oldp+1697,(((2U & ((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 0x21U)) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        bufp->chgSData(oldp+1698,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+1699,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+1700,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        bufp->chgBit(oldp+1701,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        bufp->chgBit(oldp+1702,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+1703,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+1704,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+1705,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+1706,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+1707,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        bufp->chgBit(oldp+1708,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
        bufp->chgBit(oldp+1709,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        bufp->chgBit(oldp+1710,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+1711,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
        bufp->chgBit(oldp+1712,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
        bufp->chgBit(oldp+1713,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
        bufp->chgBit(oldp+1714,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
        bufp->chgBit(oldp+1715,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        bufp->chgIData(oldp+1716,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
        bufp->chgBit(oldp+1717,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        bufp->chgBit(oldp+1718,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        bufp->chgBit(oldp+1719,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        bufp->chgBit(oldp+1720,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        bufp->chgBit(oldp+1721,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        bufp->chgCData(oldp+1722,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+1723,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        bufp->chgBit(oldp+1724,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        bufp->chgBit(oldp+1725,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+1726,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        bufp->chgCData(oldp+1727,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        bufp->chgBit(oldp+1728,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
        bufp->chgBit(oldp+1729,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
        bufp->chgBit(oldp+1730,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        bufp->chgBit(oldp+1731,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
        bufp->chgBit(oldp+1732,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgTmp_h7c15196d__0) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
        bufp->chgBit(oldp+1733,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgTmp_h7c15196d__0))));
        bufp->chgBit(oldp+1734,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        bufp->chgBit(oldp+1735,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        bufp->chgBit(oldp+1736,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        bufp->chgBit(oldp+1737,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        bufp->chgBit(oldp+1738,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        bufp->chgBit(oldp+1739,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        bufp->chgBit(oldp+1740,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        bufp->chgBit(oldp+1741,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        bufp->chgBit(oldp+1742,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        bufp->chgBit(oldp+1743,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        bufp->chgBit(oldp+1744,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        bufp->chgBit(oldp+1745,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        bufp->chgBit(oldp+1746,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        bufp->chgBit(oldp+1747,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+1748,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        bufp->chgBit(oldp+1749,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgCData(oldp+1750,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgCData(oldp+1751,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        bufp->chgCData(oldp+1752,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        bufp->chgCData(oldp+1753,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        bufp->chgBit(oldp+1754,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        bufp->chgCData(oldp+1755,((3U & (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))),2);
        bufp->chgBit(oldp+1756,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        bufp->chgIData(oldp+1757,((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd)),32);
        bufp->chgIData(oldp+1758,((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgBit(oldp+1759,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0]));
        bufp->chgBit(oldp+1760,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1]));
        bufp->chgBit(oldp+1761,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0]));
        bufp->chgBit(oldp+1762,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1]));
        bufp->chgBit(oldp+1763,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2]));
        bufp->chgBit(oldp+1764,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3]));
        bufp->chgBit(oldp+1765,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4]));
        bufp->chgBit(oldp+1766,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5]));
        bufp->chgBit(oldp+1767,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6]));
        bufp->chgBit(oldp+1768,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7]));
        bufp->chgIData(oldp+1769,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0]),32);
        bufp->chgIData(oldp+1770,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1]),32);
        bufp->chgIData(oldp+1771,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2]),32);
        bufp->chgIData(oldp+1772,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3]),32);
        bufp->chgIData(oldp+1773,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4]),32);
        bufp->chgIData(oldp+1774,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5]),32);
        bufp->chgIData(oldp+1775,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6]),32);
        bufp->chgIData(oldp+1776,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7]),32);
        bufp->chgBit(oldp+1777,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0]));
        bufp->chgBit(oldp+1778,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1]));
        bufp->chgBit(oldp+1779,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2]));
        bufp->chgBit(oldp+1780,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3]));
        bufp->chgBit(oldp+1781,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4]));
        bufp->chgBit(oldp+1782,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5]));
        bufp->chgBit(oldp+1783,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6]));
        bufp->chgBit(oldp+1784,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7]));
        bufp->chgCData(oldp+1785,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0]),4);
        bufp->chgCData(oldp+1786,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1]),4);
        bufp->chgCData(oldp+1787,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2]),4);
        bufp->chgCData(oldp+1788,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3]),4);
        bufp->chgCData(oldp+1789,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4]),4);
        bufp->chgCData(oldp+1790,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5]),4);
        bufp->chgCData(oldp+1791,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6]),4);
        bufp->chgCData(oldp+1792,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7]),4);
        bufp->chgIData(oldp+1793,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0]),32);
        bufp->chgIData(oldp+1794,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1]),32);
        bufp->chgIData(oldp+1795,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2]),32);
        bufp->chgIData(oldp+1796,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3]),32);
        bufp->chgIData(oldp+1797,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4]),32);
        bufp->chgIData(oldp+1798,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5]),32);
        bufp->chgIData(oldp+1799,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6]),32);
        bufp->chgIData(oldp+1800,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7]),32);
        bufp->chgBit(oldp+1801,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_we));
        bufp->chgCData(oldp+1802,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [7U]),4);
        bufp->chgIData(oldp+1803,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [7U]),32);
        bufp->chgBit(oldp+1804,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                                [1U]));
        bufp->chgBit(oldp+1805,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                 [7U])));
        bufp->chgBit(oldp+1806,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid));
        bufp->chgBit(oldp+1807,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid));
        bufp->chgBit(oldp+1808,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req));
        bufp->chgCData(oldp+1809,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req),3);
        bufp->chgBit(oldp+1810,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [1U]));
        bufp->chgIData(oldp+1811,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [1U]),32);
        bufp->chgBit(oldp+1812,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [1U]));
        bufp->chgCData(oldp+1813,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [1U]),4);
        bufp->chgIData(oldp+1814,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [1U]),32);
        bufp->chgSData(oldp+1815,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [1U])),12);
        bufp->chgBit(oldp+1816,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                 [1U] & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [1U] & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                  [1U]))))));
        bufp->chgBit(oldp+1817,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgTmp_h41b654d0__0) 
                                 & (4U == (0xfffU & 
                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                           [1U])))));
        bufp->chgBit(oldp+1818,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgTmp_h41b654d0__0) 
                                 & (8U == (0xfffU & 
                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                           [1U])))));
        bufp->chgCData(oldp+1819,((0xcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                   [1U])),4);
        bufp->chgIData(oldp+1820,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [1U] >> 0xcU)),20);
        bufp->chgSData(oldp+1821,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [1U] >> 0x10U)),16);
        bufp->chgBit(oldp+1822,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [2U]));
        bufp->chgIData(oldp+1823,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [2U]),32);
        bufp->chgBit(oldp+1824,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [2U]));
        bufp->chgCData(oldp+1825,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [2U]),4);
        bufp->chgIData(oldp+1826,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [2U]),32);
        bufp->chgCData(oldp+1827,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [2U])),8);
        bufp->chgBit(oldp+1828,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h266441f5__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1829,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h266441f5__0))));
        bufp->chgBit(oldp+1830,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h20fc7a7d__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1831,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h20fc7a7d__0))));
        bufp->chgBit(oldp+1832,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21180f38__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1833,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21180f38__0))));
        bufp->chgBit(oldp+1834,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h20c646f0__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1835,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h20c646f0__0))));
        bufp->chgBit(oldp+1836,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h262ce4f1__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1837,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h262ce4f1__0))));
        bufp->chgBit(oldp+1838,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h266baff5__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1839,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h266baff5__0))));
        bufp->chgBit(oldp+1840,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h27114e12__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1841,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h27114e12__0))));
        bufp->chgBit(oldp+1842,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h26336d33__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1843,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h26336d33__0))));
        bufp->chgBit(oldp+1844,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21444600__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1845,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21444600__0))));
        bufp->chgBit(oldp+1846,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21209cfa__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1847,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h21209cfa__0))));
        bufp->chgBit(oldp+1848,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h214fd7ca__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1849,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h214fd7ca__0))));
        bufp->chgBit(oldp+1850,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h2170c163__0) 
                                 & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                    [2U] >> 2U))));
        bufp->chgBit(oldp+1851,(((~ (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                     [2U] >> 2U)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgTmp_h2170c163__0))));
        bufp->chgBit(oldp+1852,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [0U]));
        bufp->chgBit(oldp+1853,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [0U]));
        bufp->chgCData(oldp+1854,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [0U]),4);
        bufp->chgIData(oldp+1855,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [0U]),32);
        bufp->chgIData(oldp+1856,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [0U]),32);
        bufp->chgSData(oldp+1857,((0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                              [0U] 
                                              >> 2U))),15);
        bufp->chgIData(oldp+1858,(((0x1fffcU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                [0U] 
                                                >> 0xfU)) 
                                   | (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                      [0U]))),17);
        bufp->chgIData(oldp+1859,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__a_wmask),32);
        bufp->chgCData(oldp+1860,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
        bufp->chgBit(oldp+1861,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [6U]));
        bufp->chgBit(oldp+1862,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [6U]));
        bufp->chgCData(oldp+1863,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [6U]),4);
        bufp->chgIData(oldp+1864,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [6U]),32);
        bufp->chgIData(oldp+1865,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [6U]),32);
        bufp->chgCData(oldp+1866,((0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                            [6U] >> 2U))),8);
        bufp->chgBit(oldp+1867,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [5U]));
        bufp->chgIData(oldp+1868,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [5U]),32);
        bufp->chgBit(oldp+1869,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [5U]));
        bufp->chgCData(oldp+1870,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [5U]),4);
        bufp->chgIData(oldp+1871,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [5U]),32);
        bufp->chgSData(oldp+1872,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [5U])),12);
        bufp->chgBit(oldp+1873,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                 [5U] & ((~ vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                          [5U]) & (4U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                    [5U]))))));
        bufp->chgBit(oldp+1874,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                 [5U] & ((0U == (0xfffU 
                                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                                 [5U])) 
                                         & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                            [5U] & 
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                            [5U])))));
        bufp->chgIData(oldp+1875,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [5U] >> 0xcU)),20);
        bufp->chgCData(oldp+1876,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [5U] >> 1U))),3);
        bufp->chgIData(oldp+1877,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [5U] >> 8U)),24);
        bufp->chgCData(oldp+1878,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [5U])),8);
        bufp->chgBit(oldp+1879,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+1880,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [4U]));
        bufp->chgIData(oldp+1881,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [4U]),32);
        bufp->chgBit(oldp+1882,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [4U]));
        bufp->chgCData(oldp+1883,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [4U]),4);
        bufp->chgIData(oldp+1884,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [4U]),32);
        bufp->chgBit(oldp+1885,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we));
        bufp->chgBit(oldp+1886,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                           [4U])))));
        bufp->chgBit(oldp+1887,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                 & (4U == (0x3ffU & 
                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                           [4U])))));
        bufp->chgBit(oldp+1888,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we));
        bufp->chgBit(oldp+1889,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we));
        bufp->chgQData(oldp+1890,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d),64);
        bufp->chgQData(oldp+1892,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d),64);
        bufp->chgBit(oldp+1894,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d));
        bufp->chgIData(oldp+1895,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d),32);
        bufp->chgBit(oldp+1896,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt
                                [0U]));
        bufp->chgIData(oldp+1897,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_id),32);
        bufp->chgIData(oldp+1898,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+1899,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 3U))));
        bufp->chgBit(oldp+1900,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 7U))));
        bufp->chgBit(oldp+1901,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0xbU))));
        bufp->chgSData(oldp+1902,((0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                              >> 0x10U))),15);
        bufp->chgBit(oldp+1903,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 6U))));
        bufp->chgCData(oldp+1904,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1905,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 2U))));
        bufp->chgBit(oldp+1906,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 1U))));
        bufp->chgBit(oldp+1907,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        bufp->chgIData(oldp+1908,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+1909,((1U & ((2U <= vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                       | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))));
        bufp->chgIData(oldp+1910,(((0x20000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 0xeU)) 
                                   | ((0x10000U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   << 9U)) 
                                      | ((0x8000U & 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           << 4U)) 
                                         | (0x7fffU 
                                            & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x10U)))))),18);
        bufp->chgBit(oldp+1911,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgBit(oldp+1912,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        bufp->chgBit(oldp+1913,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        bufp->chgCData(oldp+1914,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        bufp->chgBit(oldp+1915,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                [3U]));
        bufp->chgIData(oldp+1916,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                  [3U]),32);
        bufp->chgBit(oldp+1917,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                [3U]));
        bufp->chgCData(oldp+1918,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                  [3U]),4);
        bufp->chgIData(oldp+1919,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                  [3U]),32);
        bufp->chgBit(oldp+1920,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d));
        bufp->chgSData(oldp+1921,((0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [3U])),12);
        bufp->chgBit(oldp+1922,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready));
        bufp->chgBit(oldp+1923,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                 [3U] & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [3U] & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                         [3U]))));
        bufp->chgBit(oldp+1924,(((4U == (0xfffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                         [3U])) & (
                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req
                                                   [3U] 
                                                   & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                                      [3U] 
                                                      & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we
                                                      [3U])))));
        bufp->chgIData(oldp+1925,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr
                                   [3U] >> 0xcU)),20);
        bufp->chgCData(oldp+1926,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be
                                         [3U] >> 1U))),3);
        bufp->chgIData(oldp+1927,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [3U] >> 8U)),24);
        bufp->chgBit(oldp+1928,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgCData(oldp+1929,((0xffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata
                                   [3U])),8);
        bufp->chgBit(oldp+1930,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+1931,((0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
        bufp->chgBit(oldp+1932,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy));
        bufp->chgBit(oldp+1933,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
        bufp->chgBit(oldp+1934,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1935,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1936,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                       >> 0xfU))));
        bufp->chgSData(oldp+1937,((0x7fffU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)),15);
        bufp->chgBit(oldp+1938,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if));
        bufp->chgBit(oldp+1939,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        bufp->chgBit(oldp+1940,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        bufp->chgCData(oldp+1941,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
        bufp->chgBit(oldp+1942,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        bufp->chgBit(oldp+1943,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
        bufp->chgBit(oldp+1944,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+1945,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
        bufp->chgBit(oldp+1946,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
        bufp->chgIData(oldp+1947,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        bufp->chgBit(oldp+1948,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_lsu));
        bufp->chgBit(oldp+1949,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
        bufp->chgIData(oldp+1950,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
        bufp->chgIData(oldp+1951,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext),32);
        bufp->chgBit(oldp+1952,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgIData(oldp+1953,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+1954,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
        bufp->chgBit(oldp+1955,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)));
        bufp->chgIData(oldp+1956,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        bufp->chgIData(oldp+1957,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+1958,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgBit(oldp+1959,((3U != (3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
        bufp->chgIData(oldp+1960,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
        bufp->chgIData(oldp+1961,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
        bufp->chgIData(oldp+1962,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
        bufp->chgIData(oldp+1963,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        bufp->chgBit(oldp+1964,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+1965,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+1966,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgBit(oldp+1967,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        bufp->chgBit(oldp+1968,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        bufp->chgIData(oldp+1969,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+1970,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
        bufp->chgBit(oldp+1971,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt));
        bufp->chgIData(oldp+1972,((0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
        bufp->chgBit(oldp+1973,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_req));
        bufp->chgBit(oldp+1974,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req));
        bufp->chgBit(oldp+1975,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_req));
        bufp->chgIData(oldp+1976,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr),32);
        bufp->chgBit(oldp+1977,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror_valid));
        bufp->chgCData(oldp+1978,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmderror),3);
        bufp->chgIData(oldp+1979,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs)),32);
        bufp->chgIData(oldp+1980,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs 
                                           >> 0x20U))),32);
        bufp->chgBit(oldp+1981,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid));
        bufp->chgBit(oldp+1982,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned))));
        bufp->chgBit(oldp+1983,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going));
        bufp->chgBit(oldp+1984,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception));
        bufp->chgQData(oldp+1985,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
        bufp->chgCData(oldp+1987,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
        bufp->chgCData(oldp+1988,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
        bufp->chgBit(oldp+1989,((0x800U <= (0xfffU 
                                            & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))));
        bufp->chgCData(oldp+1990,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d),2);
        bufp->chgIData(oldp+1991,((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits)),32);
        bufp->chgIData(oldp+1992,((IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                           >> 0x20U))),32);
        bufp->chgCData(oldp+1993,((0xffU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata))),8);
        bufp->chgCData(oldp+1994,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1995,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1996,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1997,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1998,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1999,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+2000,((0xffU & (IData)(
                                                   (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                    >> 0x38U)))),8);
        bufp->chgQData(oldp+2001,((QData)((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_addr))),64);
        bufp->chgIData(oldp+2003,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc),32);
        bufp->chgIData(oldp+2004,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2005,((0x7fffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                              >> 2U))),15);
        bufp->chgIData(oldp+2006,((0x1fffcU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                               >> 0xfU))),17);
        bufp->chgBit(oldp+2007,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o));
        bufp->chgBit(oldp+2008,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
        bufp->chgBit(oldp+2009,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                       >> 6U))));
        bufp->chgBit(oldp+2010,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                       >> 5U))));
        bufp->chgCData(oldp+2011,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))),5);
        bufp->chgBit(oldp+2012,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en));
        bufp->chgBit(oldp+2013,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
        bufp->chgBit(oldp+2014,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+2015,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
        bufp->chgIData(oldp+2016,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+2017,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        bufp->chgBit(oldp+2018,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 5U))));
        bufp->chgBit(oldp+2019,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 4U))));
        bufp->chgCData(oldp+2020,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+2021,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 1U))));
        bufp->chgBit(oldp+2022,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
        bufp->chgBit(oldp+2023,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        bufp->chgBit(oldp+2024,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        bufp->chgBit(oldp+2025,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        bufp->chgIData(oldp+2026,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        bufp->chgBit(oldp+2027,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        bufp->chgBit(oldp+2028,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                       >> 6U))));
        bufp->chgBit(oldp+2029,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                       >> 5U))));
        bufp->chgCData(oldp+2030,((0x1fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
        bufp->chgBit(oldp+2031,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        bufp->chgIData(oldp+2032,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        bufp->chgBit(oldp+2033,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        bufp->chgBit(oldp+2034,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        bufp->chgCData(oldp+2035,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                   >> 0x1cU)),4);
        bufp->chgSData(oldp+2036,((0xfffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0x10U))),12);
        bufp->chgBit(oldp+2037,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2038,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2039,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2040,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2041,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2042,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2043,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 9U))));
        bufp->chgCData(oldp+2044,((7U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                         >> 6U))),3);
        bufp->chgBit(oldp+2045,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 5U))));
        bufp->chgBit(oldp+2046,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 4U))));
        bufp->chgBit(oldp+2047,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 3U))));
        bufp->chgBit(oldp+2048,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 2U))));
        bufp->chgCData(oldp+2049,((3U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
        bufp->chgBit(oldp+2050,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        bufp->chgIData(oldp+2051,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        bufp->chgBit(oldp+2052,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        bufp->chgBit(oldp+2053,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        bufp->chgBit(oldp+2054,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        bufp->chgBit(oldp+2055,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        bufp->chgBit(oldp+2056,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        bufp->chgIData(oldp+2057,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        bufp->chgIData(oldp+2058,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        bufp->chgBit(oldp+2059,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 1U))));
        bufp->chgBit(oldp+2060,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 1U))));
        bufp->chgBit(oldp+2061,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 7U))));
        bufp->chgBit(oldp+2062,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 6U))));
        bufp->chgCData(oldp+2063,((7U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+2064,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 2U))));
        bufp->chgBit(oldp+2065,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 1U))));
        bufp->chgBit(oldp+2066,((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
        bufp->chgBit(oldp+2067,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
        bufp->chgBit(oldp+2068,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+2069,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                   >> 0xdU)),19);
        bufp->chgIData(oldp+2070,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+2071,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 3U))));
        bufp->chgBit(oldp+2072,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 3U))));
        bufp->chgBit(oldp+2073,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 4U))));
        bufp->chgBit(oldp+2074,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 4U))));
        bufp->chgBit(oldp+2075,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 5U))));
        bufp->chgBit(oldp+2076,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 5U))));
        bufp->chgBit(oldp+2077,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 6U))));
        bufp->chgBit(oldp+2078,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 6U))));
        bufp->chgBit(oldp+2079,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 7U))));
        bufp->chgBit(oldp+2080,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 7U))));
        bufp->chgBit(oldp+2081,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 8U))));
        bufp->chgBit(oldp+2082,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 8U))));
        bufp->chgBit(oldp+2083,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 9U))));
        bufp->chgBit(oldp+2084,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 9U))));
        bufp->chgBit(oldp+2085,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2086,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2087,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2088,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2089,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2090,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 0xcU))));
        bufp->chgCData(oldp+2091,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__wr_en_i) 
                                    << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__wr_en_i))),2);
        bufp->chgCData(oldp+2092,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__wr_en_i) 
                                    << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__wr_en_i))),2);
        bufp->chgBit(oldp+2093,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__wr_en_i));
        bufp->chgBit(oldp+2094,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__wr_en_i));
        bufp->chgBit(oldp+2095,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__wr_en_i));
        bufp->chgBit(oldp+2096,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__wr_en_i));
        bufp->chgBit(oldp+2097,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        bufp->chgBit(oldp+2098,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        bufp->chgBit(oldp+2099,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 2U))));
        bufp->chgBit(oldp+2100,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 2U))));
        bufp->chgCData(oldp+2101,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
        bufp->chgIData(oldp+2102,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        bufp->chgCData(oldp+2103,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
        bufp->chgCData(oldp+2104,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        bufp->chgBit(oldp+2105,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        bufp->chgBit(oldp+2106,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        bufp->chgBit(oldp+2107,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        bufp->chgBit(oldp+2108,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
        bufp->chgBit(oldp+2109,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
        bufp->chgBit(oldp+2110,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        bufp->chgBit(oldp+2111,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
        bufp->chgIData(oldp+2112,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
        bufp->chgIData(oldp+2113,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
        bufp->chgCData(oldp+2114,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
        bufp->chgBit(oldp+2115,((IData)((0U != (0x60U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))))));
        bufp->chgBit(oldp+2116,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        bufp->chgBit(oldp+2117,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        bufp->chgBit(oldp+2118,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        bufp->chgCData(oldp+2119,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+2120,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        bufp->chgIData(oldp+2121,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
        bufp->chgBit(oldp+2122,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_gnt)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0))));
        bufp->chgBit(oldp+2123,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0))));
        bufp->chgBit(oldp+2124,((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+2125,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        bufp->chgCData(oldp+2126,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0) 
                                    << 2U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h91d85a72__0)))),3);
        bufp->chgBit(oldp+2127,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgBit(oldp+2128,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear));
        bufp->chgBit(oldp+2129,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready));
        bufp->chgBit(oldp+2130,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
        bufp->chgIData(oldp+2131,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        bufp->chgBit(oldp+2132,((1U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 1U))));
        bufp->chgIData(oldp+2133,((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                   >> 0xdU)),19);
        bufp->chgQData(oldp+2134,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2136,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2137,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2139,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2140,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2142,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2143,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2145,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2146,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2148,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2149,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2151,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2152,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2154,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2155,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2157,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2158,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2160,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2161,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2163,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2164,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2166,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2167,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2169,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2170,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2172,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2173,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2175,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2176,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2178,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2179,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2181,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2182,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2184,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2185,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2187,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2188,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2190,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+2191,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+2193,((0xffffffU & (IData)(
                                                       (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                        >> 0x28U)))),24);
        bufp->chgQData(oldp+2194,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2196,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        bufp->chgQData(oldp+2197,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        bufp->chgQData(oldp+2199,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+2201,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        bufp->chgQData(oldp+2202,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        bufp->chgCData(oldp+2204,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        bufp->chgBit(oldp+2205,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        bufp->chgBit(oldp+2206,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        bufp->chgBit(oldp+2207,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        bufp->chgBit(oldp+2208,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        bufp->chgBit(oldp+2209,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
        bufp->chgCData(oldp+2210,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d1f386f__0) 
                                    << 2U) | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h2b0e8186__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hc11c213a__0)))),3);
        bufp->chgCData(oldp+2211,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        bufp->chgBit(oldp+2212,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
    }
    bufp->chgBit(oldp+2213,(vlSelf->clk_i));
    bufp->chgBit(oldp+2214,(vlSelf->rst_ni));
    bufp->chgIData(oldp+2215,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0]),32);
    bufp->chgIData(oldp+2216,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1]),32);
    bufp->chgIData(oldp+2217,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[2]),32);
    bufp->chgIData(oldp+2218,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3]),32);
    bufp->chgIData(oldp+2219,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4]),32);
    bufp->chgIData(oldp+2220,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5]),32);
    bufp->chgIData(oldp+2221,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[6]),32);
    bufp->chgIData(oldp+2222,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7]),32);
    bufp->chgBit(oldp+2223,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid));
    bufp->chgIData(oldp+2224,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                                ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
                                           >> 0x20U))
                                : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux))),32);
    bufp->chgBit(oldp+2225,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_rst_n));
    bufp->chgIData(oldp+2226,(VL_SHIFTR_III(32,32,32, 
                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                            [1U], VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))),32);
    bufp->chgIData(oldp+2227,((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0ULL : (
                                                   (0x43U 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (0x3ffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                        (((IData)(0x21U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x22U) 
                                                                              * 
                                                                              (1U 
                                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x40U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x22U) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                            (((IData)(0x1fU) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & ((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                             >> 5U)])) 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x22U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                             (3U 
                                                                              & (((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                                >> 5U))])) 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x22U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                    : 0ULL)) 
                                       >> 2U))),32);
    bufp->chgCData(oldp+2228,((3U & (IData)(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                              ? 0ULL
                                              : ((0x43U 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 
                                                 (0x3ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x22U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x22U) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                           (3U 
                                                                            & (((IData)(0x22U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                  : 0ULL))))),2);
    bufp->chgBit(oldp+2229,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req));
    bufp->chgBit(oldp+2230,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux));
    bufp->chgBit(oldp+2231,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_req_ready))));
    bufp->chgBit(oldp+2232,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
    bufp->chgBit(oldp+2233,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_ack));
    bufp->chgQData(oldp+2234,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0ULL : ((0x43U >= 
                                           (0x7fU & 
                                            ((IData)(0x22U) 
                                             * (1U 
                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                           ? (0x3ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x22U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x22U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x22U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (3U 
                                                                        & (((IData)(0x22U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                           : 0ULL))),34);
    bufp->chgBit(oldp+2236,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q) 
                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid))));
    bufp->chgBit(oldp+2237,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_ack)) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)))));
    bufp->chgBit(oldp+2238,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni));
    bufp->chgBit(oldp+2239,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq));
    bufp->chgQData(oldp+2240,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
    bufp->chgBit(oldp+2242,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    bufp->chgQData(oldp+2243,(((0x43U >= (0x7fU & ((IData)(0x22U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                ? (0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (((IData)(0x21U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & ((IData)(0x22U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((IData)(0x22U) 
                                                * (1U 
                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                    | (((0U == (0x1fU 
                                                & ((IData)(0x22U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                         ? 0ULL : ((QData)((IData)(
                                                                   vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x22U) 
                                                                         * 
                                                                         (1U 
                                                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                       | ((QData)((IData)(
                                                          vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                          (3U 
                                                           & (((IData)(0x22U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & ((IData)(0x22U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                : 0ULL)),34);
    bufp->chgBit(oldp+2245,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    bufp->chgIData(oldp+2246,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->chgIData(oldp+2247,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->chgCData(oldp+2248,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : ((0x3f7U >= 
                                         (0x3ffU & 
                                          VL_SHIFTL_III(10,10,32, 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? (0xffU & 
                                            (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                               ? 0U
                                               : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                             | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                (0x1fU 
                                                 & (VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))
                                         : 0U))),8);
    bufp->chgCData(oldp+2249,(((0x3f7U >= (0x3ffU & 
                                           VL_SHIFTL_III(10,10,32, 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                              ? 0U : 
                                             (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                            | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0x1fU 
                                                & (VL_SHIFTL_III(10,10,32, 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))
                                : 0U)),8);
    bufp->chgBit(oldp+2250,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                             & (0x7eU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    bufp->chgBit(oldp+2251,((1U & (~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                      | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                         | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)))))));
    bufp->chgBit(oldp+2252,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk));
    bufp->chgCData(oldp+2253,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                | (((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                    | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req)) 
                                   | (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                ? 5U : 0xaU)),4);
    bufp->chgCData(oldp+2254,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q),4);
    bufp->chgBit(oldp+2255,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                   | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                      | (0U != vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs))))));
    bufp->chgBit(oldp+2256,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_lsu) 
                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_id))));
    bufp->chgBit(oldp+2257,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    bufp->chgBit(oldp+2258,((1U & VL_REDXOR_32((7U 
                                                & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                                   >> 1U))))));
    bufp->chgBit(oldp+2259,((1U & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                   & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                         & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                                            & (~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))))));
    bufp->chgBit(oldp+2260,((1U & ((~ ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                   & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
    bufp->chgBit(oldp+2261,(((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
    bufp->chgBit(oldp+2262,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                              | (0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->chgBit(oldp+2263,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
    bufp->chgBit(oldp+2264,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))));
    bufp->chgBit(oldp+2265,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->chgBit(oldp+2266,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->chgBit(oldp+2267,(((0U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
                                & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id))))));
    bufp->chgBit(oldp+2268,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
    bufp->chgIData(oldp+2269,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                ? 0x100001U : (1U | 
                                               (0xffffff00U 
                                                & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->chgSData(oldp+2270,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                ? (0x1ffdU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
    bufp->chgBit(oldp+2271,(((3U & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1cU)) > (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    bufp->chgBit(oldp+2272,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))));
    bufp->chgBit(oldp+2273,(((3U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x1eU)) & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
    bufp->chgBit(oldp+2274,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                & (0x7a0U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2275,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->chgBit(oldp+2276,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
    bufp->chgIData(oldp+2277,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x1fU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
    bufp->chgBit(oldp+2278,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                             & ((~ ((0x340U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                    | (0x341U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->chgCData(oldp+2279,(((0U != (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                                ? 2U : (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                         & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                         ? 1U : ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                                   ? 4U
                                                   : 0U))))),3);
    bufp->chgBit(oldp+2280,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                             | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu))))));
    bufp->chgBit(oldp+2281,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                             | (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                 & ((~ ((0x340U == 
                                         (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)) 
                                        | (0x341U == 
                                           (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))) 
                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+2282,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                              & ((~ ((0x340U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                     | (0x341U == (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->chgBit(oldp+2283,((1U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U))))));
    bufp->chgBit(oldp+2284,(((3U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & ((4U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
                                & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U)))))));
    bufp->chgBit(oldp+2285,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq))));
    bufp->chgBit(oldp+2286,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    bufp->chgBit(oldp+2287,((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
                             | ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgIData(oldp+2288,(((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? 0x100080U : (
                                                   (1U 
                                                    & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                    ? 0x100080U
                                                    : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                        : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                    : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? (IData)((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U))
                                        : 0x100080U)))),32);
    bufp->chgBit(oldp+2289,((1U & ((4U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? 0x100080U
                                        : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? 0x100080U
                                            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                    : ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                        : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? (IData)(
                                                      (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U))
                                            : 0x100080U))))));
    bufp->chgBit(oldp+2290,((1U & ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                                    ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                        ? (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                            & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U)) 
                                           | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                        : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))
                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)))));
    bufp->chgBit(oldp+2291,(((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
                             && (IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) & 
                                         (2U == (3U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
    bufp->chgBit(oldp+2292,(((~ ((1U & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                                  ? ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                          & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                      : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))
                                  : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw))));
    bufp->chgCData(oldp+2293,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                      : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)))),2);
    bufp->chgCData(oldp+2294,((3U & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                      : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)))),2);
    bufp->chgIData(oldp+2295,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                 ? vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                 : (0xfffffffcU & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0) 
                                  << 2U))),32);
    bufp->chgCData(oldp+2296,(((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d1f386f__0)) 
                                << 2U) | ((((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h2b0e8186__0)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                           & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hc11c213a__0))))),3);
    bufp->chgIData(oldp+2297,(((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                    << 0x10U) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U))
                                : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__instr_rdata_core 
                                    << 0x10U) | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U)))),32);
    bufp->chgBit(oldp+2298,((1U & ((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                    ? (((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                        & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                           >> 1U)) 
                                       | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                    : (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)))));
    bufp->chgBit(oldp+2299,((IData)((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                      >> 1U) & (2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
    bufp->chgBit(oldp+2300,((1U & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) | ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->chgIData(oldp+2301,((0x7fffffffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->chgIData(oldp+2302,((0x7fffffffU & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                               ? (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                  >> 1U)
                                               : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgBit(oldp+2303,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                             | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0))));
    bufp->chgIData(oldp+2304,(((2U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                        [0U] << 8U) 
                                       | (0xffU & (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                    : ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                        [0U] << 0x10U) 
                                       | (0xffffU & 
                                          (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 8U))))
                                : ((1U & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                        [0U] << 0x18U) 
                                       | vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                    : vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata
                                   [0U]))),32);
    bufp->chgBit(oldp+2305,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & ((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
    bufp->chgBit(oldp+2306,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & (((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                 & vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err
                                 [0U]) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
    bufp->chgBit(oldp+2307,(((~ (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu))));
    bufp->chgBit(oldp+2308,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->chgBit(oldp+2309,((((2U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                              | (1U == (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->chgIData(oldp+2310,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
    bufp->chgIData(oldp+2311,(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
    bufp->chgCData(oldp+2312,((((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_lsu) 
                                << 1U) | (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_we_id))),2);
    bufp->chgCData(oldp+2313,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (0xffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (0x1fU 
                                                     & (VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))),8);
    bufp->chgCData(oldp+2314,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (0xffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                 | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (0x1fU 
                                                     & (VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))),8);
    bufp->chgCData(oldp+2315,((0xffU & (((0U == (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                          ? 0U : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                        | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                           (0x1fU & 
                                            (VL_SHIFTL_III(10,10,32, 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgCData(oldp+2316,((0xffU & (((0U == (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                          ? 0U : (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                        | (vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                           (0x1fU & 
                                            (VL_SHIFTL_III(10,10,32, 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgBit(oldp+2317,(((IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                             & (0x7fU == (0x7fU & (IData)(vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
}

void Vtop_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_cleanup\n"); );
    // Init
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
}
