// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT QData VuCup_top::_change_request(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_change_request\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VuCup_top::_change_request_1(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_change_request_1\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6])
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o)
        || (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2])
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1])|| (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4])
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5])
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready)
        || (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated)
         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n))) VL_DBG_MSGF("        CHANGE: demo_system/cv32e41s_demo_system_memless.sv:181: uCup_top.genblk1.u_soc.rst_core_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_core.sv:191: uCup_top.genblk1.u_soc.u_core.ctrl_byp\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6]))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_core.sv:192: uCup_top.genblk1.u_soc.u_core.ctrl_fsm\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_core.sv:391: uCup_top.genblk1.u_soc.u_core.c_obi_instr_if_ma_o\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2]))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_core.sv:394: uCup_top.genblk1.u_soc.u_core.c_obi_data_if_ma_o\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_if_stage.sv:146: uCup_top.genblk1.u_soc.u_core.if_stage_i.prefetch_resp_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_if_stage.sv:148: uCup_top.genblk1.u_soc.u_core.if_stage_i.prefetch_trans_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_instr_obi_interface.sv:72: uCup_top.genblk1.u_soc.u_core.if_stage_i.instruction_obi_i.rchk_err_resp\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_sequencer.sv:66: uCup_top.genblk1.u_soc.u_core.if_stage_i.gen_seq.sequencer_i.decode\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_ff_one.sv:39: uCup_top.genblk1.u_soc.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4]))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_ff_one.sv:40: uCup_top.genblk1.u_soc.u_core.ex_stage_i.alu_i.ff_one_i.index_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4]) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5] ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5]))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_alu_b_cpop.sv:34: uCup_top.genblk1.u_soc.u_core.ex_stage_i.alu_i.alu_b_cpop_i.sum\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_load_store_unit.sv:109: uCup_top.genblk1.u_soc.u_core.load_store_unit_i.wpt_trans_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_load_store_unit.sv:125: uCup_top.genblk1.u_soc.u_core.load_store_unit_i.wpt_resp_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_data_obi_interface.sv:70: uCup_top.genblk1.u_soc.u_core.load_store_unit_i.data_obi_i.rchk_err_resp\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_csr.sv:35: uCup_top.genblk1.u_soc.u_core.cs_registers_i.mepc_csr_i.gen_hardened.clk_gated\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_csr.sv:35: uCup_top.genblk1.u_soc.u_core.cs_registers_i.mstatus_csr_i.gen_hardened.clk_gated\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated))) VL_DBG_MSGF("        CHANGE: cv32e41s_core/cv32e41s_csr.sv:35: uCup_top.genblk1.u_soc.u_core.cs_registers_i.basic_mode_csrs.mcause_csr_i.gen_hardened.clk_gated\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n ^ vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n))) VL_DBG_MSGF("        CHANGE: dm/dmi_jtag.sv:50: uCup_top.genblk1.u_soc.g_dm_top.u_dm_top.dap.trst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_byp;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[0U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[1U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[2U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[3U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[4U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[5U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ctrl_fsm[6U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_instr_if_ma_o;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[0U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[1U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__c_obi_data_if_ma_o[2U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans_ready;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlTOPp->__Vchglast__TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n;
    return __req;
}

#ifdef VL_DEBUG
void VuCup_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_sys_i & 0xfeU))) {
        Verilated::overWidthError("clk_sys_i");}
    if (VL_UNLIKELY((rst_sys_ni & 0xfeU))) {
        Verilated::overWidthError("rst_sys_ni");}
    if (VL_UNLIKELY((uart_rx_i & 0xfeU))) {
        Verilated::overWidthError("uart_rx_i");}
    if (VL_UNLIKELY((spi_rx_i & 0xfeU))) {
        Verilated::overWidthError("spi_rx_i");}
}
#endif  // VL_DEBUG
