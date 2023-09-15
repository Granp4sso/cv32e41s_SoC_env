// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VuCup_top.h for the primary calling header

#include "VuCup_top.h"
#include "VuCup_top__Syms.h"

#include "verilated_dpi.h"

//==========

void VuCup_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VuCup_top::eval\n"); );
    VuCup_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("demo_system/uCup_top.sv", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VuCup_top::_eval_initial_loop(VuCup_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("demo_system/uCup_top.sv", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VuCup_top::_settle__TOP__6(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_settle__TOP__6\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*31:0*/ __Vtemp100;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                             << 5U) | (((((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                          & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault)) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err)) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)) 
                                                   << 3U) 
                                                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__state_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__state_n 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__state_n
        [vlTOPp->__Vtableidx1];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status
        [vlTOPp->__Vtableidx1];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core
        [vlTOPp->__Vtableidx1];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus
        [vlTOPp->__Vtableidx1];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid
        [vlTOPp->__Vtableidx1];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = vlTOPp->__Vtable1_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx4 = ((0x40U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                      >> 0x12U)) | 
                            (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
                              << 5U) | (((((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                           & (IData)(vlSymsp->TOP__uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault)) 
                                          | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err)) 
                                         << 4U) | (
                                                   ((1U 
                                                     == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__next_cnt)) 
                                                    << 3U) 
                                                   | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = vlTOPp->__Vtable4_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready
        [vlTOPp->__Vtableidx4];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = (1U & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_i 
                          >> 0x29U)) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = (1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core))) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
            = (0x20000000000000ULL | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
            = ((0x30000000000000ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o) 
               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q);
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
            = ((0x1fffffffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o) 
               | ((QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                   & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus))))) 
                  << 0x35U));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
            = ((0x30000000000000ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o) 
               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
            = ((0x3fffffffffc001ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o) 
               | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk)) 
                  << 1U));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((0x3fffffffffcULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | (IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) 
            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_trans_ready 
        = (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready) 
              & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core))) 
             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core))) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U] 
        = (IData)(((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                   << 0x20U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | (IData)((((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                       << 0x20U) >> 0x20U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x7dU >= (0x7fU & ((IData)(0x2aU) * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
            ? (0x3ffffffffffULL & (((0U == (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                               ((IData)(2U) 
                                                                + 
                                                                (3U 
                                                                 & (((IData)(0x2aU) 
                                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                                    >> 5U)))])) 
                                               << ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                   | (((QData)((IData)(
                                                       vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       ((IData)(1U) 
                                                        + 
                                                        (3U 
                                                         & (((IData)(0x2aU) 
                                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                            >> 5U)))])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                            ? 0x20U
                                            : ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                      | ((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                         (3U 
                                                          & (((IData)(0x2aU) 
                                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))))
            : 0ULL);
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
    } else {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
                if ((3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                          >> 0xaU))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                        = (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU))));
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                        ? (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU))))
                        : (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU)))));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x4000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
                if ((3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                          >> 0xaU))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                        = (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU))));
                }
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                        ? (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU))))
                        : (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                >> 0x1aU)))));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                  >> 0xeU)))) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                             >> 0xaU))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                      >> 0x1aU))))
                                 ? 1U : 2U)) : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x1aU))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x1aU))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
               >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            ? ((0x7dU >= (0x7fU & ((IData)(0xaU) + 
                                   ((IData)(0x2aU) 
                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                ? (((0U == (0x1fU & ((IData)(0xaU) 
                                     + ((IData)(0x2aU) 
                                        * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                     ? 0U : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             ((IData)(1U) + (3U & (
                                                   ((IData)(0xaU) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                   >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (3U & (((IData)(0xaU) + ((IData)(0x2aU) 
                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                             >> 5U))] >> (0x1fU & ((IData)(0xaU) 
                                                   + 
                                                   ((IData)(0x2aU) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                : 0U) : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                 >> 0xaU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
        = (IData)((0x3ffffffffffULL & (((QData)((IData)(
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
        = (IData)(((0x3ffffffffffULL & (((QData)((IData)(
                                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])))) 
                   >> 0x20U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_resp_valid) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_busy 
        = ((((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
            | (0U < (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__cnt_q))) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__trans_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
           & (~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                         >> 0x10U))) & (~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned 
        = ((0x3fU >= ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                      << 3U)) ? (((((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                    & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                   | ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                      & (3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                   ? (((QData)((IData)(
                                                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 0xaU)))) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_q)))
                                   : (((QData)((IData)(
                                                       ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 0xaU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                     << 0x16U) 
                                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                       >> 0xaU)))))) 
                                 >> ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                                     << 3U)) : 0ULL);
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_valid_q) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status_q));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match_q;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[1U]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__wpt_resp[0U];
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                               >> 0x2bU)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
                    = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                        >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid));
            }
        }
    } else {
        if ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
               >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
             & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                           >> 0x2bU))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                               >> 0x2bU)))) {
                if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 1U;
                }
            }
        }
    } else {
        if ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
               >> 0x12U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
             & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                           >> 0x2bU))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 1U;
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
        = ((0x3ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U]) 
           | (0xfc000000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
                             << 0x1aU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
        = ((0x6000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U]) 
           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__bus_trans[2U]);
    __Vtemp100 = ((0x1000U & (VL_REDXOR_32((0xffU & 
                                            ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                              << 0x14U) 
                                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                >> 0xcU)))) 
                              << 0xcU)) | ((0x800U 
                                            & (VL_REDXOR_32(
                                                            (0xffU 
                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                 << 0x1cU) 
                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                   >> 4U)))) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (VL_REDXOR_32(
                                                               (0xffU 
                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                    << 4U) 
                                                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                                      >> 0x1cU)))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (VL_REDXOR_32(
                                                                  (0xffU 
                                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                       << 0xcU) 
                                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                                         >> 0x14U)))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                          >> 0xeU)) 
                                                        << 8U)) 
                                                    | ((0x20U 
                                                        & ((~ 
                                                            (VL_REDXOR_32(
                                                                          (0xfU 
                                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                               << 0xcU) 
                                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                                >> 0x14U)))) 
                                                             ^ 
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                              >> 0x18U))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((~ 
                                                               (VL_REDXOR_32(
                                                                             (7U 
                                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                                << 0x11U) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                                                >> 0xfU)))) 
                                                                ^ 
                                                                VL_REDXOR_32(
                                                                             (3U 
                                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                                << 0xeU) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                                                                                >> 0x12U)))))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (VL_REDXOR_32(
                                                                              (0xffU 
                                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                                >> 0x11U))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                                >> 9U))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                                >> 1U))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                                                                << 7U) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                                                                >> 0x19U)))))))))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
        = ((0xffffc001U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U]) 
           | (0xfffffffeU & (__Vtemp100 << 1U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    } else {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
                = ((2U > (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                    ? (3U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                    : 0U);
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
        = ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
            ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                ? (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))))
            : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)
                ? (2U | (0xfffffffcU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid 
        = ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
               >> 0xfU)) & ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                             ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                & ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                     | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                    | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))
                                    ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                    : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                                        ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                        : (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                               >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                           | (((2U 
                                                >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                  >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))))))
                             : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
            >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x2aU) 
                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       ((IData)(1U) 
                                        + (3U & (((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                 >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x2aU) 
                                        * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x2aU) 
                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
        } else {
            if (((0U != ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                                     ? 0U : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             ((IData)(1U) 
                                              + (3U 
                                                 & (((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                                   | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x2aU) 
                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                          : 0U)) | (0U != ((0x7dU >= 
                                            (0x7fU 
                                             & ((IData)(0x2aU) 
                                                * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                            ? (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (((IData)(0x2aU) 
                                                        * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (3U 
                                                    & (((IData)(0x2aU) 
                                                        * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                            : 0U)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
        }
    } else {
        if (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
             & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                    = ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                        ? (3U & (((0U == (0x1fU & ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                   ? 0U : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                           ((IData)(1U) 
                                            + (3U & 
                                               (((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                >> 5U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (3U & (((IData)(0x2aU) 
                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                        : 0U);
            } else {
                if (((0U != ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                              ? (3U & (((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                         ? 0U : (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                 ((IData)(1U) 
                                                  + 
                                                  (3U 
                                                   & (((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                          (3U & (((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                              : 0U)) | (0U != (3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o))))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
                }
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = (3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o));
        }
    }
    if (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
         & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
            >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
            = (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                      ? ((0x7dU >= (0x7fU & ((IData)(9U) 
                                             + ((IData)(0x2aU) 
                                                * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                            (3U & (((IData)(9U) + ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   ((IData)(0x2aU) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                      : (((0x7dU >= (0x7fU & ((IData)(9U) 
                                              + ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (3U & (((IData)(9U) + 
                                     ((IData)(0x2aU) 
                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                         | ((0x7dU >= (0x7fU & ((IData)(9U) 
                                                + ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                               (3U & (((IData)(9U) 
                                       + ((IData)(0x2aU) 
                                          * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
            = (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                      ? (((0x7dU >= (0x7fU & ((IData)(3U) 
                                              + ((IData)(0x2aU) 
                                                 * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (3U & (((IData)(3U) + 
                                     ((IData)(0x2aU) 
                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0))
                      : ((((0x7dU >= (0x7fU & ((IData)(3U) 
                                               + ((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                              (3U & (((IData)(3U) + 
                                      ((IData)(0x2aU) 
                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                          | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                              & ((0xfU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res)) 
                                 != (0xfU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                     >> 2U))))) 
                             | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_enable) 
                                  >> 1U) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i)) 
                                & ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_1_i__DOT__rchk_res) 
                                          >> 4U)) != 
                                   (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                  >> 6U))))))) 
                         | (((0x7dU >= (0x7fU & ((IData)(3U) 
                                                 + 
                                                 ((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(3U) 
                                        + ((IData)(0x2aU) 
                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(3U) 
                                          + ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0)))));
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
            = (1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                      ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                          ? ((0x7dU >= (0x7fU & ((IData)(9U) 
                                                 + 
                                                 ((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(9U) 
                                        + ((IData)(0x2aU) 
                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(9U) 
                                          + ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                          : (((0x7dU >= (0x7fU & ((IData)(9U) 
                                                  + 
                                                  ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                 (3U & (((IData)(9U) 
                                         + ((IData)(0x2aU) 
                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(9U) 
                                           + ((IData)(0x2aU) 
                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                        >> 9U)))) : (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                             >> 9U))));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
            = (1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                      ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                          ? (((0x7dU >= (0x7fU & ((IData)(3U) 
                                                  + 
                                                  ((IData)(0x2aU) 
                                                   * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                 (3U & (((IData)(3U) 
                                         + ((IData)(0x2aU) 
                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(3U) 
                                           + ((IData)(0x2aU) 
                                              * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0))
                          : ((((0x7dU >= (0x7fU & ((IData)(3U) 
                                                   + 
                                                   ((IData)(0x2aU) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                  (3U & (((IData)(3U) 
                                          + ((IData)(0x2aU) 
                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(3U) 
                                            + ((IData)(0x2aU) 
                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0)) 
                             | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                        >> 3U)))) : (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                             >> 3U))));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? ((0xffffff00U & ((- (IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                           & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned 
                                                      >> 7U))))) 
                               << 8U)) | (0xffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned)))
            : ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_size_q))
                ? ((0xffff0000U & ((- (IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned 
                                                          >> 0xfU))))) 
                                   << 0x10U)) | (0xffffU 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned)))
                : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_aligned)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb 
        = ((0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                          << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                    >> 0x18U)))) ? 1U
            : ((0x8000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U])
                ? 0x19U : ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U])
                            ? 0x18U : ((0x8000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U])
                                        ? 2U : (0x7ffU 
                                                & ((1U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                        >> 0xcU) 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                          >> 9U)))
                                                    ? 
                                                   ((IData)(8U) 
                                                    + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_i__DOT__rdata_q))
                                                    : 
                                                   ((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                         >> 0xcU) 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                           >> 0xaU)) 
                                                       & (3U 
                                                          == 
                                                          (3U 
                                                           & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                               << 0x13U) 
                                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                                 >> 0xdU))))) 
                                                      & (~ 
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                          >> 0xfU))) 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                     ? 3U
                                                     : 
                                                    ((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                          >> 0xcU) 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                            >> 0xaU)) 
                                                        & (0U 
                                                           == 
                                                           (3U 
                                                            & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                                << 0x13U) 
                                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                                  >> 0xdU))))) 
                                                       & (~ 
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                           >> 0xcU))) 
                                                      & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))
                                                       ? 7U
                                                       : 5U)))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & (((((((((0U != (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                       << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                 >> 0x18U)))) 
                        | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                           >> 0x1bU)) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                         >> 1U)) | 
                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                       >> 0xfU)) | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                     >> 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                 >> 9U))) 
                    | (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                           >> 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                       >> 0xaU)) & 
                         (3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                        >> 0xdU))))) 
                        & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                              >> 0xfU))) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
                   | (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                          >> 0xcU) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                      >> 0xaU)) & (0U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                          >> 0xdU))))) 
                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                             >> 0xcU))) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
                  | (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))) 
                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                    >> 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_wb 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                  | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                      >> 2U) & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status)))) 
                 | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                     >> 2U) & (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (((0U != ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                     << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                                  >> 2U))) | (0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match)) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_we[0U] 
        = ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
              >> 0x1bU) & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status))) 
            & (~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__instr_valid));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((3U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | (0x3cU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                           << 2U)));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((0x33U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | ((8U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                         >> 0xfU)) | (4U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                            >> 0x16U))));
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = (0x3cU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt)));
    }
    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                       >> 0x29U)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt) 
                     - (IData)(1U)));
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
        = ((0x5ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U]) 
           | (0x2000000U & ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                                >> 0x1aU)) << 0x19U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__next_cnt 
        = (3U & ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                         >> 0x1aU) & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                              >> 0x2bU))))
                  ? ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                    >> 0x29U))) ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q)))
                  : ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_i 
                                    >> 0x29U))) ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q) 
                                                   - (IData)(1U))
                      : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__data_obi_i__DOT__integrity_fifo_i__DOT__cnt_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_be[0U] 
        = (0xfU & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                    << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                                >> 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_wdata[0U] 
        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
            << 0xcU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[0U] 
                        >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_we[0U] 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                 >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_addr[0U] 
        = ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
            << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[1U] 
                      >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_req[0U] 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_data_if_ma_o[2U] 
                 >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = ((0x3fffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
           | ((QData)((IData)((1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                      ? ((0x7dU >= 
                                          (0x7fU & 
                                           ((IData)(9U) 
                                            + ((IData)(0x2aU) 
                                               * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                            (3U & (
                                                   ((IData)(9U) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   ((IData)(0x2aU) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                      : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                 >> 9U)))))) 
              << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = ((0x3fffffffffcULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
           | (IData)((IData)((3U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                        >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                     ? ((0x7dU >= (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                              ? 0U : 
                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                               (3U 
                                                & (((IData)(0x2aU) 
                                                    * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                         : 0U) : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = (0x3fffffffe0fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = ((0x3fffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
           | ((QData)((IData)((1U & (((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                      & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                         >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                      ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0) 
                                         | ((0x7dU 
                                             >= (0x7fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                            & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                               (3U 
                                                & (((IData)(3U) 
                                                    + 
                                                    ((IData)(0x2aU) 
                                                     * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0x2aU) 
                                                       * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                                      : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                 >> 3U)))))) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
        = (0x3fffffffffbULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr);
    if ((1U & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xfU)))) {
        if ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
                   | ((QData)((IData)((((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                        & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                           >> (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                        ? ((((0x7dU 
                                              >= (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     ((IData)(0x2aU) 
                                                      * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                              ? (0xffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          ((IData)(0x2aU) 
                                                           * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & (((IData)(0xaU) 
                                                            + 
                                                            ((IData)(0x2aU) 
                                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0xaU) 
                                                           + 
                                                           ((IData)(0x2aU) 
                                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0xaU) 
                                                            + 
                                                            ((IData)(0x2aU) 
                                                             * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xaU) 
                                                           + 
                                                           ((IData)(0x2aU) 
                                                            * (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                              : 0U) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                 >> 0x10U)))
                                        : ((0xffff0000U 
                                            & ((IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                        >> 0xaU)) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                 >> 0x10U)))))) 
                      << 0xaU));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3fffffffdffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
                   | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned)) 
                      << 9U));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3fffffffffcULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
                   | (IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3fffffffff7ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr) 
                   | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned)) 
                      << 3U));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_wb 
        = ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U])
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__rdata_ext
            : ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[6U] 
                << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[5U] 
                            >> 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfffff000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
               << 0xbU) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step 
        = (1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                     >> 2U)) & ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__wb_valid) 
                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                      >> 2U) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_wb))) 
                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                                    >> 7U)) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = ((((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
                 & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
                & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
               & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                    >> 0x17U))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                      >> 0xcU))) & 
            (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                >> 0x11U))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                  >> 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
             | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                     >> 0xfU)) & (3U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                  >> 0xdU))))) 
                & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
            | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                    >> 0xcU)) & (0U == (3U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                 >> 0xdU))))) 
               & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__we_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_we
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_be
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_we
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_addr
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_req
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)))) {
        if ((0U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x19U)))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x18U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x16U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x15U)))) {
                                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x14U)))) {
                                    if ((1U & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0x10U)))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x18U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0xffU & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0xfU))))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xaU))))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x19U)))) {
                    if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x18U))))) {
                        if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x17U))))) {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x15U)))) {
                                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x14U)))) {
                                    if ((1U & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0x16U)))) {
                                        if ((1U & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xfU)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xeU)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xdU)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU))))) {
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xdU)))) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)))) {
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x16U)))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x18U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x17U)))) {
                            if ((0U == ((0x20U & ((IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x16U)) 
                                                  << 5U)) 
                                        | (0x1fU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xcU)))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xaU))))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x18U)))) {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x17U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        } else {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x17U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            } else {
                                if ((1U & (~ (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x16U))))) {
                                    if ((0U == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xcU))))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x11U))))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x18U)))) {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x17U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            } else {
                                if ((0U == (0x1fU & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x11U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x17U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            } else {
                                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x16U)))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_compressed 
        = ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)) 
           & (3U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xaU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            } else {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            } else {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_hint = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)))) {
        if ((0U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((1U != (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xaU))))) {
                if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xaU))))) {
                    if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x18U))))) {
                            if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0x17U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x16U))))) {
                                    if (((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xcU)))) 
                                         | (0U == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 0x11U)))))) {
                                        if (((0U != 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xcU)))) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                >> 3U))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_hint = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4 = 
        (0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                         >> 0xeU)));
    vlTOPp->__Vfunc_pushpop_reg_length__0__Vfuncout 
        = (((((((((0U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4)) 
                  | (1U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                 | (2U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                | (3U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
               | (4U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
              | (5U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
             | (6U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
            | (7U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4)))
            ? ((0U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                ? 0U : ((1U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                         ? 0U : ((2U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                  ? 0U : ((3U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                      ? 2U
                                                      : 3U)))))))
            : (((((((((8U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4)) 
                      | (9U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                     | (0xaU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                    | (0xbU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                   | (0xcU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                  | (0xdU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                 | (0xeU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))) 
                | (0xfU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4)))
                ? ((8U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                    ? 4U : ((9U == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                             ? 5U : ((0xaU == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                      ? 6U : ((0xbU 
                                               == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                               ? 7U
                                               : ((0xcU 
                                                   == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                   ? 8U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                    ? 9U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__rlist4))
                                                     ? 0xaU
                                                     : 0xcU)))))))
                : 0U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffe1fffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(vlTOPp->__Vfunc_pushpop_reg_length__0__Vfuncout)) 
              << 0x1dU));
    vlTOPp->__Vfunc_get_stack_adj_base__1__rlist = 
        (0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                         >> 0xeU)));
    vlTOPp->__Vfunc_get_stack_adj_base__1__Vfuncout 
        = (((((4U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)) 
              | (5U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))) 
             | (6U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))) 
            | (7U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)))
            ? 0x10U : (((((8U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)) 
                          | (9U == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))) 
                         | (0xaU == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))) 
                        | (0xbU == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)))
                        ? 0x20U : ((((0xcU == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)) 
                                     | (0xdU == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))) 
                                    | (0xeU == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist)))
                                    ? 0x30U : ((0xfU 
                                                == (IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__rlist))
                                                ? 0x40U
                                                : 0U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(vlTOPp->__Vfunc_get_stack_adj_base__1__Vfuncout)) 
              << 0x21U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x14U))))) {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            } else {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((0U != (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x15U))))) {
                        if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x14U))))) {
                            if ((1U & ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q 
                                          >> 2U)))) {
                                if ((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3fU 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest 
        = ((7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                          >> 0x11U))) != (7U & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_a_fw 
        = ((0x4000U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
            ? ((0x2000U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[3U] 
                    << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                                 >> 1U)) : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_wb)
            : ((0x2000U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_ex
                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
               [0U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_stage_i__DOT__operand_b_fw 
        = ((0x1000U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
            ? ((0x800U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[4U] 
                    << 0x1fU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[3U] 
                                 >> 1U)) : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_wb)
            : ((0x800U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_ex
                : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__id_stage_i__rf_rdata_i
               [1U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata_wb;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xffe00000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                             << 0x15U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid)) 
                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))))) {
                                        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_wr_in_wb_flush) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 0U;
                                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set 
                                            = (1U & 
                                               (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lsu_busy)));
                                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                             & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                                = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                    ? 2U : (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                  >> 0xfU)) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                        >> 0xdU))))) 
                                             & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                             ? 1U : 
                                            (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                   >> 0xcU)) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                       << 0x13U) 
                                                      | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                         >> 0xdU))))) 
                                              & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                              ? 1U : 
                                             (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))
                                               ? 1U
                                               : 0U))));
                        }
                    }
                }
            }
            if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                    = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)
                        ? 2U : 4U);
            }
        } else {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__sleep_unit_i__DOT__fetch_enable_q) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((4U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))
                    ? ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U])
                        ? 3U : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U])
                                 ? 2U : ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)))
                    : 0U);
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U])
                        ? 3U : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U])
                                 ? 2U : ((0x80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)));
            } else {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                            = ((0x10000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U])
                                ? 3U : ((0x40U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U])
                                         ? 2U : ((0x80U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U])
                                                  ? 1U
                                                  : 0U)));
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                                = (
                                                   (0x40U 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U])
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U])
                                                     ? 1U
                                                     : 0U));
                                        }
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_wr_in_wb_flush)))) {
                                                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                                        = 
                                                        ((0x40U 
                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U])
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U])
                                                           ? 1U
                                                           : 0U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))))) {
                            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))))) {
                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__we_i
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i
        [0U]) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffe001ffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((0xfffU & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                  >> 0x21U)) 
                                         + (0x30U & 
                                            ((IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xcU)) 
                                             << 4U)))))) 
              << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffffe0ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | (IData)((IData)((0x1fU & (((0xfU & (IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                         >> 0x1dU))) 
                                        - (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                       - (IData)(1U))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest) {
                                if ((3U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xfU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest) {
                                if ((3U != (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xfU))))) {
                                    if ((1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xfU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 4U;
                                }
                            } else {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 3U;
                                    }
                                }
                            }
                        } else {
                            if ((0U == (3U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 1U;
                                }
                            } else {
                                if ((2U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U))))) {
                                    if ((3U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xeU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 2U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest) {
                                if ((3U == (3U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xfU))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 5U;
                                } else {
                                    if ((1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xfU))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 6U;
                                    }
                                }
                            }
                        } else {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                        }
                    } else {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                        } else {
                            if ((1U & ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                       | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__rdata_q 
                                          >> 2U)))) {
                                if ((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3fU 
                                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 7U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__rf_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
        = (0x18U | (7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = (0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
        = ((7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]) 
           | (0xfffffff8U & (((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                               ? ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                                   ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                                       << 0x1eU) | 
                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[2U] 
                                       >> 2U)) : ((
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                                     >> 0x18U)))
                               : ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                                   ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                       << 0xaU) | (
                                                   vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                                   >> 0x16U))
                                   : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                             << 3U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = ((0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
           | (7U & (((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                      ? ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                          ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                              << 0x1eU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[2U] 
                                           >> 2U)) : 
                         ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[2U] 
                           << 8U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[1U] 
                                     >> 0x18U))) : 
                     ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                       ? ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                           << 0xaU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[2U] 
                                       >> 0x16U)) : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                    >> 0x1dU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = ((0xfffe7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]) 
           | (0xffff8000U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                              << 0x10U) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                           << 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                      [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                     [0U]));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_gnt_data_o[0U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound18 
        = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
    if ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_gnt_data_o[vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound18;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req = 0U;
    if (((((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
            : 0U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_mask
          [1U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_base
         [1U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req = 1U;
    }
    if (((((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
            : 0U) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_mask
          [2U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__cfg_mem_data_addr_base
         [2U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req = 2U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                        ? ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? 0x8067U
                                            : 0x513U)
                                        : ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x10113U 
                                                   | (0xfff00000U 
                                                      & ((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 0x11U)) 
                                                         << 0x14U)))
                                                : (0x10113U 
                                                   | (0xfff00000U 
                                                      & ((- (IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 0x11U))) 
                                                         << 0x14U))))
                                            : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x12083U 
                                                   | (0xfff00000U 
                                                      & ((IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 5U)) 
                                                         << 0x14U)))
                                                : (0x112023U 
                                                   | ((0xfe000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                   >> 0xaU)) 
                                                          << 0x19U)) 
                                                      | (0xf80U 
                                                         & ((IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 5U)) 
                                                            << 7U))))))))) 
                      << 0xaU));
        } else {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->__Vfunc_sn_to_regnum__3__snum 
                        = (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xcU)));
                    vlTOPp->__Vfunc_sn_to_regnum__3__Vfuncout 
                        = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum)) 
                            | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum))))
                            : (((0U != (7U & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlTOPp->__Vfunc_sn_to_regnum__3__snum))));
                    vlTOPp->__Vfunc_sn_to_regnum__2__snum 
                        = (7U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xcU)));
                    vlTOPp->__Vfunc_sn_to_regnum__2__Vfuncout 
                        = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum)) 
                            | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum))))
                            : (((0U != (7U & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlTOPp->__Vfunc_sn_to_regnum__2__snum))));
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                        = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                           | ((QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)
                                                ? (0x58013U 
                                                   | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__2__Vfuncout) 
                                                      << 7U))
                                                : (0x593U 
                                                   | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__3__Vfuncout) 
                                                      << 0xfU))))) 
                              << 0xaU));
                } else {
                    vlTOPp->__Vfunc_sn_to_regnum__4__snum 
                        = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                    vlTOPp->__Vfunc_sn_to_regnum__4__Vfuncout 
                        = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum)) 
                            | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum))))
                            : (((0U != (7U & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlTOPp->__Vfunc_sn_to_regnum__4__snum))));
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                        = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                           | ((QData)((IData)((0x12003U 
                                               | ((0xfff00000U 
                                                   & ((IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 5U)) 
                                                      << 0x14U)) 
                                                  | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__4__Vfuncout) 
                                                     << 7U))))) 
                              << 0xaU));
                }
            } else {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->__Vfunc_sn_to_regnum__5__snum 
                        = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                    vlTOPp->__Vfunc_sn_to_regnum__5__Vfuncout 
                        = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum)) 
                            | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum))))
                            : (((0U != (7U & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlTOPp->__Vfunc_sn_to_regnum__5__snum))));
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                        = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                           | ((QData)((IData)((0x12023U 
                                               | ((0xfe000000U 
                                                   & ((IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 0xaU)) 
                                                      << 0x19U)) 
                                                  | (((IData)(vlTOPp->__Vfunc_sn_to_regnum__5__Vfuncout) 
                                                      << 0x14U) 
                                                     | (0xf80U 
                                                        & ((IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                    >> 5U)) 
                                                           << 7U))))))) 
                              << 0xaU));
                } else {
                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
                        if ((1U == (0xfU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                    >> 0x1dU))))) {
                            vlTOPp->__Vfunc_sn_to_regnum__6__snum 
                                = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                            vlTOPp->__Vfunc_sn_to_regnum__6__Vfuncout 
                                = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum)) 
                                    | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum)))
                                    ? (8U | (((0U != 
                                               (7U 
                                                & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum) 
                                                   >> 1U))) 
                                              << 4U) 
                                             | (7U 
                                                & (IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum))))
                                    : (((0U != (7U 
                                                & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum) 
                                                   >> 1U))) 
                                        << 4U) | (0xfU 
                                                  & (IData)(vlTOPp->__Vfunc_sn_to_regnum__6__snum))));
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                   | ((QData)((IData)(
                                                      (0x12003U 
                                                       | ((0xfff00000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                       >> 5U)) 
                                                              << 0x14U)) 
                                                          | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__6__Vfuncout) 
                                                             << 7U))))) 
                                      << 0xaU));
                        } else {
                            if ((1U < (0xfU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 0x1dU))))) {
                                vlTOPp->__Vfunc_sn_to_regnum__7__snum 
                                    = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlTOPp->__Vfunc_sn_to_regnum__7__Vfuncout 
                                    = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum)) 
                                        | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlTOPp->__Vfunc_sn_to_regnum__7__snum))));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                       | ((QData)((IData)(
                                                          (0x12003U 
                                                           | ((0xfff00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__7__Vfuncout) 
                                                                 << 7U))))) 
                                          << 0xaU));
                            } else {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                       | ((QData)((IData)(
                                                          (0x12083U 
                                                           | (0xfff00000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                          >> 5U)) 
                                                                 << 0x14U))))) 
                                          << 0xaU));
                            }
                        }
                    } else {
                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
                            if ((1U == (0xfU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 0x1dU))))) {
                                vlTOPp->__Vfunc_sn_to_regnum__8__snum 
                                    = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlTOPp->__Vfunc_sn_to_regnum__8__Vfuncout 
                                    = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum)) 
                                        | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlTOPp->__Vfunc_sn_to_regnum__8__snum))));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                       | ((QData)((IData)(
                                                          (0xfe012e23U 
                                                           | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__8__Vfuncout) 
                                                              << 0x14U)))) 
                                          << 0xaU));
                            } else {
                                if ((1U < (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                           >> 0x1dU))))) {
                                    vlTOPp->__Vfunc_sn_to_regnum__9__snum 
                                        = (0x1fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlTOPp->__Vfunc_sn_to_regnum__9__Vfuncout 
                                        = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum)) 
                                            | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlTOPp->__Vfunc_sn_to_regnum__9__snum))));
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                        = ((0x3ffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                           | ((QData)((IData)(
                                                              (0xfe012e23U 
                                                               | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__9__Vfuncout) 
                                                                  << 0x14U)))) 
                                              << 0xaU));
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                        = (0x3f844b88c00ULL 
                                           | (0x3ffULL 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr));
                                }
                            }
                        } else {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
                                vlTOPp->__Vfunc_sn_to_regnum__10__snum 
                                    = (7U & (IData)(
                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0x11U)));
                                vlTOPp->__Vfunc_sn_to_regnum__10__Vfuncout 
                                    = (((0U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum)) 
                                        | (1U == (IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlTOPp->__Vfunc_sn_to_regnum__10__snum))));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                       | ((QData)((IData)(
                                                          (0x50013U 
                                                           | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__10__Vfuncout) 
                                                              << 7U)))) 
                                          << 0xaU));
                            } else {
                                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                        = ((0x3ffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U))))
                                                                ? 
                                                               (0x6fU 
                                                                | (0x1f000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xcU)) 
                                                                      << 0xcU)))
                                                                : 
                                                               (0xefU 
                                                                | (0xff000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xcU)) 
                                                                      << 0xcU)))))) 
                                              << 0xaU));
                                } else {
                                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
                                        vlTOPp->__Vfunc_sn_to_regnum__11__snum 
                                            = (7U & (IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x11U)));
                                        vlTOPp->__Vfunc_sn_to_regnum__11__Vfuncout 
                                            = (((0U 
                                                 == (IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum)) 
                                                | (1U 
                                                   == (IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum)))
                                                ? (8U 
                                                   | (((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum) 
                                                            >> 1U))) 
                                                       << 4U) 
                                                      | (7U 
                                                         & (IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum))))
                                                : (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum) 
                                                         >> 1U))) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & (IData)(vlTOPp->__Vfunc_sn_to_regnum__11__snum))));
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr 
                                            = ((0x3ffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_instr) 
                                               | ((QData)((IData)(
                                                                  (0x513U 
                                                                   | ((IData)(vlTOPp->__Vfunc_sn_to_regnum__11__Vfuncout) 
                                                                      << 0xfU)))) 
                                                  << 0xaU));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffe001fULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                ? 0U : (0xfffU & ((4U 
                                                   & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x11U)) 
                                                     - 
                                                     (0x7cU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                         << 2U)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 
                                                   ((IData)(
                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0x11U)) 
                                                    - 
                                                    (0x7cU 
                                                     & (((IData)(1U) 
                                                         + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                        << 2U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 
                                                    (- 
                                                     (((IData)(1U) 
                                                       + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                      << 2U))
                                                     : 0U))))))) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    if ((4U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                        if ((3U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid 
        = (((((0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr)) 
              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid)) 
            & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0x14U))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    >> 0xfU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT____Vcellinp__register_file_wrapper_i__wdata_i
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_data_gnt[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__host_gnt_data_o
        [0U];
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_be_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound5;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_wdata_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound4;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_we_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound2;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req))
                ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]
                : 0U);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound3;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[0U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[1U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__mem_sel_data_req))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req)) 
               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_data_i
               [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT__host_sel_data_req]);
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[2U] 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_int_bus__DOT____Vlvbound1;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o[2U] = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_last 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q;
    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
                = ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                    ? ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                        ? 0U : 7U) : ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                       ? ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                           ? 6U : (
                                                   (3U 
                                                    == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 7U
                                                    : 0U))
                                       : 5U));
        } else {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
                } else {
                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                         == ((0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))) 
                             - (IData)(1U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                         == ((0xfU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))) 
                             - (IData)(1U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
                    }
                } else {
                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
                            = ((1U == (0xfU & (IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 0x1dU))))
                                ? 4U : ((1U < (0xfU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                          >> 0x1dU))))
                                         ? 2U : 5U));
                    } else {
                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
                                = ((1U == (0xfU & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                           >> 0x1dU))))
                                    ? 4U : ((1U < (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x1dU))))
                                             ? 1U : 5U));
                        } else {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp)))) {
                                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid)) 
                & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                      >> 0x14U))) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                     >> 0xfU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op_nondummy 
        = (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid)
                  ? ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))
                  : (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound1 
        = (1U & VL_REDXOR_32((0x56aaad5bU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3eU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound1));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound2 
        = (1U & VL_REDXOR_32((0x9b33366dU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3dU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound2) 
                     << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound3 
        = (1U & VL_REDXOR_32((0xe3c3c78eU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3bU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound3) 
                     << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound4 
        = (1U & VL_REDXOR_32((0x3fc07f0U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x37U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound4) 
                     << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound5 
        = (1U & VL_REDXOR_32((0x3fff800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x2fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound5) 
                     << 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound6 
        = (1U & VL_REDXOR_32((0xfc000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                              [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x1fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound6) 
                     << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound7 
        = (0x2aU ^ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
           [0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound7;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound8 
        = (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
                            [0U])) << 0x20U) | (QData)((IData)(
                                                               vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__genblk2__DOT__register_file_ecc__wdata_i
                                                               [0U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellout__genblk2__DOT__register_file_ecc__rf_wdata_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound8;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_be_data_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_wdata_data_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_we_data_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_addr_data_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellout__u_int_bus__mem_req_data_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert 
        = (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q) 
              > (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[2U] 
                   << 7U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                             >> 0x19U)) & (3U | (0x3cU 
                                                 & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                     << 0x11U) 
                                                    | (0x1fffcU 
                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                          >> 0xfU))))))) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en)) 
            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op_nondummy) 
               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid))) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellout__genblk2__DOT__register_file_ecc__rf_wdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask) 
           | (0xffU & (- (IData)((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                  [1U])))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask) 
           | (0xff00U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                           [1U] >> 1U)))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask) 
           | (0xff0000U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                             [1U] >> 2U)))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__inst_tcm__DOT__a_wmask) 
           | (0xff000000U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                               [1U] 
                                               >> 3U)))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask) 
           | (0xffU & (- (IData)((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                  [2U])))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask) 
           | (0xff00U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                           [2U] >> 1U)))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask) 
           | (0xff0000U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                             [2U] >> 2U)))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_tcm__DOT__a_wmask) 
           | (0xff000000U & ((- (IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
                                               [2U] 
                                               >> 3U)))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_be[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_be
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_we[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_we
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_addr[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_addr
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_req[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__data_mem_req
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x3fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
              << 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x5fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)) 
               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_hint)) 
              << 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x6fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (0x10U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                       >> 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x77U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
              << 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x7bU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
              << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x7dU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                    >> 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x7eU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                    >> 0x16U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op_nondummy));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_if 
        = (1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
                 | ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid)) 
                    | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_last))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid) 
             | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)) 
            & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xfU))) & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                   >> 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__instr 
        = ((((0x63U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode))
              ? ((0x40U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)
                             ? 0U : 2U) >> 6U)) | (0x3fU 
                                                   & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)
                                                        ? 0U
                                                        : 2U) 
                                                      >> 5U)))
              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7)) 
            << 0x19U) | ((0x1f00000U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                        << 3U)) | (
                                                   (0xf8000U 
                                                    & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[1U] 
                                                       << 6U)) 
                                                   | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                       << 0xcU) 
                                                      | ((((0x63U 
                                                            == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode))
                                                            ? 
                                                           (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)
                                                              ? 0U
                                                              : 2U) 
                                                            | (1U 
                                                               & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)
                                                                    ? 0U
                                                                    : 2U) 
                                                                  >> 0xbU)))
                                                            : 0U) 
                                                          << 7U) 
                                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__register_file_wrapper_i__DOT__rf_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_be
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_be
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_wdata
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_we
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_we
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_addr
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_addr
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_req
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_req
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 0U;
    if ((8U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    } else {
        if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                 >> 0x14U)));
                }
            } else {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    if ((4U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                        if ((3U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                                = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                                   & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                         >> 0x14U)));
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                 >> 0x14U)));
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q)))) {
                    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)))) {
                        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store)))) {
                            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)))) {
                                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_tbljmp) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                                        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                                           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                 >> 0x14U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__seq_valid)) 
                & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                      >> 0x14U))) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                     >> 0xfU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued 
        = ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready)) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__first_op)) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_if 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready)) 
           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
              | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_hint)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_instr 
        = ((0x1ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_instr) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__instr)) 
              << 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
        [1U]) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req = 1U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__if_ready 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xfU) | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                 ? (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                                     & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                           >> 0x14U))) 
                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                       >> 0xfU)) : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)) 
                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready) 
                                  & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)))) 
                              & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    >> 0x14U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next 
        = ((1U & (((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en)) 
                   | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert) 
                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued))) 
                  | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U]))
            ? 0U : (0x7fU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued)
                              ? ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q))
                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o 
        = ((((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_n))) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__lfsr_shift_if)) 
            & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we))) 
           | ((~ (IData)((0U != vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__secureseed0_we)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ptr_in_if)))) {
        if ((0U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                   | ((QData)((IData)(((1U & (IData)(
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x19U)))
                                        ? ((1U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))
                                                : (0x842023U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x16U)) 
                                                             << 0x19U)) 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | ((0xc00U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x14U)) 
                                                                      << 0xaU)) 
                                                                  | (0x200U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x10U)) 
                                                                        << 9U)))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x16U)))
                                                    ? 
                                                   (0x841023U 
                                                    | ((0x700000U 
                                                        & ((IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xcU)) 
                                                           << 0x14U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x11U)) 
                                                              << 0xfU)) 
                                                          | (0x100U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xfU)) 
                                                                << 8U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x14U)))
                                                      ? 
                                                     (0x841023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xcU)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x11U)) 
                                                                << 0xfU)) 
                                                            | (0x100U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xfU)) 
                                                                  << 8U)))))
                                                      : 
                                                     (0x840023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xcU)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x11U)) 
                                                                << 0xfU)) 
                                                            | ((0x100U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xfU)) 
                                                                   << 8U)) 
                                                               | (0x80U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x10U)) 
                                                                     << 7U)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x14U)))
                                                      ? 
                                                     (0x41403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x15U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x11U)) 
                                                                << 0xfU)) 
                                                            | ((0x4000U 
                                                                & ((~ (IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x10U))) 
                                                                   << 0xeU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U))))))
                                                      : 
                                                     (0x44403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x15U)) 
                                                         | ((0x100000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))))))
                                        : ((1U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))
                                                : (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))
                                                : (0x10413U 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x11U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3000000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x15U)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xfU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x10U)) 
                                                                   << 0x16U)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))))))) 
                      << 0xaU));
        } else {
            if ((1U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xaU))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(((1U & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x19U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x18U)))
                                                ? (0x40063U 
                                                   | ((0xf0000000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                          << 0x1cU)) 
                                                      | ((0xc000000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x1aU)) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x19U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x17U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xc00U 
                                                                      & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x14U)) 
                                                                         << 0xaU)) 
                                                                     | ((0x300U 
                                                                         & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                            << 8U)) 
                                                                        | (0x80U 
                                                                           & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U)) 
                                                                              << 7U))))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x17U)))
                                                    ? 
                                                   (0x6fU 
                                                    | ((0x80000000U 
                                                        & ((IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x16U)) 
                                                           << 0x1fU)) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x12U)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x13U)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x10U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xcU)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x15U)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x19U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x14U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x16U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x10U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xfU)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xeU)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)))
                                                           ? 
                                                          (0x847433U 
                                                           | ((0x700000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x14U)) 
                                                              | ((0x38000U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 0xfU)) 
                                                                 | (0x380U 
                                                                    & ((IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                       << 7U)))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xcU)))
                                                            ? 
                                                           (0xfff44413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                        << 7U)))))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xcU)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                        << 7U))))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xcU)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0xff47413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U)))))))
                                                         : 
                                                        (0x2840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U))))))
                                                        : 
                                                       (0x847433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x10U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xfU)))
                                                         ? 
                                                        (0x847433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x846433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U))))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xfU)))
                                                         ? 
                                                        (0x844433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x40840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U))))))))
                                                      : 
                                                     (0x47413U 
                                                      | ((0xfc000000U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                             << 0x1aU)) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x16U)) 
                                                                << 0x19U)) 
                                                            | ((0x1f00000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                        << 7U))))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x16U)))
                                                      ? 
                                                     (0x45413U 
                                                      | ((0x40000000U 
                                                          & ((IData)(
                                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x14U)) 
                                                             << 0x1eU)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xcU))))
                                                       ? 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x14U)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 7U))))))
                                                       : 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x14U)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 7U)))))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x18U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x17U)))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     ((0x20U 
                                                       & ((IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x16U)) 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xcU)))))
                                                     ? 
                                                    (0x37U 
                                                     | ((0xfffe0000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                            << 0x11U)) 
                                                        | ((0x1f000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0xcU)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x11U)) 
                                                                 << 7U)))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x11U))))
                                                      ? 
                                                     (0x10113U 
                                                      | ((0xe0000000U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                             << 0x1dU)) 
                                                         | ((0x18000000U 
                                                             & ((IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xdU)) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xfU)) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xcU)) 
                                                                      << 0x19U)) 
                                                                  | (0x1000000U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x10U)) 
                                                                        << 0x18U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x11U))))
                                                       ? 
                                                      (0x37U 
                                                       | ((0xfffe0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                              << 0x11U)) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 7U)))))
                                                       : 
                                                      (0x37U 
                                                       | ((0xfffe0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                              << 0x11U)) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 7U))))))))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x11U))))
                                                     ? 
                                                    (0x13U 
                                                     | ((0xfc000000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x13U 
                                                     | ((0xfc000000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x17U)))
                                                    ? 
                                                   (0x6fU 
                                                    | ((0x80000000U 
                                                        & ((IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x16U)) 
                                                           << 0x1fU)) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x12U)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x13U)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x10U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xcU)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x15U)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x19U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   (0x13U 
                                                    | ((0xfc000000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x16U)) 
                                                              << 0x19U)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x14U)) 
                                                             | ((0xf8000U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 0xfU)) 
                                                                | (0xf80U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x11U)) 
                                                                      << 7U)))))))))))) 
                          << 0xaU));
            } else {
                if ((2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xaU))))) {
                    if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x19U)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x18U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x17U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xcU)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xeU)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x12023U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0x11U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x14U)) 
                                                              | (0xe00U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x13U)) 
                                                                    << 9U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x17U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xcU)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xeU)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x16U)))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xcU))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x11U))))
                                                        ? 0x100073U
                                                        : 
                                                       (0xe7U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x11U)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x11U))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U)))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xcU))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x11U))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x11U)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x67U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0x11U)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0x11U))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x11U)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x11U)) 
                                                                 << 7U))))))))))) 
                                  << 0xaU));
                    } else {
                        if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x18U)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                   | ((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x17U)))
                                                        ? 
                                                       (0x12003U 
                                                        | ((0xc000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x16U)) 
                                                                  << 0x19U)) 
                                                              | ((0x1c00000U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xeU)) 
                                                                     << 0x16U)) 
                                                                 | (0xf80U 
                                                                    & ((IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                       << 7U))))))
                                                        : 
                                                       (0x12003U 
                                                        | ((0xc000000U 
                                                            & ((IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x16U)) 
                                                                  << 0x19U)) 
                                                              | ((0x1c00000U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xeU)) 
                                                                     << 0x16U)) 
                                                                 | (0xf80U 
                                                                    & ((IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                       << 7U))))))))) 
                                      << 0xaU));
                        } else {
                            if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x17U)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                    = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                       | ((QData)((IData)(
                                                          (0x12003U 
                                                           | ((0xc000000U 
                                                               & ((IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x1aU)) 
                                                              | ((0x2000000U 
                                                                  & ((IData)(
                                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x16U)) 
                                                                     << 0x19U)) 
                                                                 | ((0x1c00000U 
                                                                     & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xeU)) 
                                                                        << 0x16U)) 
                                                                    | (0xf80U 
                                                                       & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                          << 7U)))))))) 
                                          << 0xaU));
                            } else {
                                if ((1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x16U)))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x3ffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                           | ((QData)((IData)(
                                                              (0x1013U 
                                                               | ((0x1f00000U 
                                                                   & ((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xcU)) 
                                                                      << 0x14U)) 
                                                                  | ((0xf8000U 
                                                                      & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | (0xf80U 
                                                                        & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                           << 7U))))))) 
                                              << 0xaU));
                                } else {
                                    if (((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xcU)))) 
                                         | (0U == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 0x11U)))))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                            = ((0x3ffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                               | ((QData)((IData)(
                                                                  (0x1013U 
                                                                   | ((0x1f00000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xcU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xf8000U 
                                                                          & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                             << 0xfU)) 
                                                                         | (0xf80U 
                                                                            & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                               << 7U))))))) 
                                                  << 0xaU));
                                        if (((0U != 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xcU)))) 
                                             & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                >> 3U))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                                = (
                                                   (0x3ffULL 
                                                    & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                                   | ((QData)((IData)((IData)(
                                                                              (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_instr 
                                                                               >> 0xaU)))) 
                                                      << 0xaU));
                                        }
                                    } else {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                            = ((0x3ffULL 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                                               | ((QData)((IData)(
                                                                  (0x1013U 
                                                                   | ((0x1f00000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xcU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xf8000U 
                                                                          & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                             << 0xfU)) 
                                                                         | (0xf80U 
                                                                            & ((IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x11U)) 
                                                                               << 7U))))))) 
                                                  << 0xaU));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x3ffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)((IData)(
                                                      (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0xaU)))) 
                              << 0xaU));
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o[1U] = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o[vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
        [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [4U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [4U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 4U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [5U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [5U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 5U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [6U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [6U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 6U;
    }
    if (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [7U]) == vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [7U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req = 7U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__if_ready))) {
        if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound2 = 0U;
            if ((2U >= (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                        & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound2) 
                          << (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup 
        = ((6U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr_lockup)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_if 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__dummy_insert)) 
                 & ((((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                               >> 9U)) | (0U != (3U 
                                                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed)))) 
                     | (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_decompressed 
                                >> 3U))) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__host_gnt_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[0U] 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[1U] 
        = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[2U] 
        = ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[3U] 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[4U] 
        = ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[5U] 
        = ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[6U] 
        = ((6U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o[7U] 
        = ((7U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[0U] 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[1U] 
        = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[2U] 
        = ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[3U] 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[4U] 
        = ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[5U] 
        = ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[6U] 
        = ((6U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o[7U] 
        = ((7U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[0U] 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[1U] 
        = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[2U] 
        = ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[3U] 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[4U] 
        = ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[5U] 
        = ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[6U] 
        = ((6U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o[7U] 
        = ((7U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[0U] 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[1U] 
        = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[2U] 
        = ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[3U] 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[4U] 
        = ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[5U] 
        = ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[6U] 
        = ((6U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o[7U] 
        = ((7U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[0U] 
        = ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[1U] 
        = ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[2U] 
        = ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[3U] 
        = ((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[4U] 
        = ((4U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[5U] 
        = ((5U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[6U] 
        = ((6U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o[7U] 
        = ((7U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x10000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x1f0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x1bfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
        = (0xffffff7fU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0x1fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
        = (0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xffe7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xe01fffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xffefffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xfff00000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
                             << 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfff7ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0x80000U & (((0xfff80000U & ((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                               << 0xaU) 
                                              | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                                 << 0xbU)) 
                                             | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                                << 0xcU)) 
                                            | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                               << 0xdU)) 
                                           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                              << 0xeU))) 
                           | ((((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                                  | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)) 
                                 << 0x13U) | (0xfff80000U 
                                              & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err) 
                                                  << 0x11U) 
                                                 | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__load_store_unit_i__DOT__filter_err) 
                                                    << 0x12U)))) 
                               & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
                                  << 0x13U)) & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable) 
                                                << 0x13U))) 
                          | ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug)) 
                              & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable)) 
                             << 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfffbffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0x40000U & (((0xfffc0000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                           << 0xfU)) 
                           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                              << 0x12U)) | (0xfffc0000U 
                                            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_byp) 
                                               << 0xeU)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xfffdffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xffff7fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
        = (0xfffffffbU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
        = (0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
        = (0xfffffffeU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
        = (7U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
        = (0xfffffff8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xbfffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xfffff7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = (0x7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
        = (0xfffff800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = (0xfffffbffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x1ffbfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x1dfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
        = (0x1efffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = (0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
        = (0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = (0xefffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xf7ffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xf8000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
                             << 0x1bU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfdffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xfe000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) 
                             << 0x19U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xfeffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xff000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
        = ((0xffbfffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
           | (0xffc00000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) 
                             << 0x16U)));
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                = (0x20000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                = (0xa00U | (0x1f0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                = ((0x7fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
                   | (0x80000000U & ((~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                                     << 0x1fU)));
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                = (0x800U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]);
            if ((2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                    = (0x400U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                    = ((0x7ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
                       | (0xfffff800U & ((0xfffff800U 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                                             << 9U)) 
                                         | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match 
                                            << 0xbU))));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                    = ((0xfffff800U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]) 
                       | (0x7ffU & (((0x600U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[4U] 
                                                << 9U)) 
                                     | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[3U] 
                                        >> 0x17U)) 
                                    | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_wpt_match 
                                       >> 0x15U))));
            }
            if ((4U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x2000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = ((0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
                       | (0x1000U & ((~ ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                         | (2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)))) 
                                     << 0xcU)));
            } else {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0xffffbfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0xffffdfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0xffffefffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                = (0xffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                = (0x17fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                = (0x10000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
            if ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                    = (0x10000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x80000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0xfffeffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x2000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x1000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                    = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                    = (0xc00U | (0x1f0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    = (0x80000000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                    = (4U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]);
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                    = ((0xffffc007U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]) 
                       | (0xfffffff8U & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q)
                                           ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                                               ? 0x403U
                                               : 0x402U)
                                           : ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                                               ? 0x401U
                                               : 0x400U)) 
                                         << 3U)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                    = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]) 
                       | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                >> 0x1dU)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                    = ((0xffffffefU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
                       | (0xfffffff0U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q) 
                                         << 4U)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                    = ((0xffffffdfU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
                       | (0x20U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q)) 
                                   << 5U)));
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                    = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]) 
                       | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                >> 0x1dU)));
            } else {
                if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                     & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                        = (0x100000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                        = (0x80000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                        = (0x40000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                        = (0x20000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                } else {
                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_req_ctrl) 
                         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            = (0x2000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            = (0x1000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                            = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                            = (0x80U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                            = ((0x1fffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U]) 
                               | (0xe0000000U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_id_ctrl) 
                                                 << 0x1dU)));
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U] 
                            = ((0xffffff80U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[5U]) 
                               | (0x1fffffffU & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_id_ctrl) 
                                                 >> 3U)));
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                            = (0x80000000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                            = (4U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]);
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                            = ((0xfffffffdU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]) 
                               | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                        >> 0x1dU)));
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                            = (0x900U | (0x1f0ffU & 
                                         vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                            = ((0xffffc007U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]) 
                               | (0xfffffff8U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__irq_id_ctrl) 
                                                 << 3U)));
                    } else {
                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                             & (2U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                = (0x100000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                = (0x80000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                = (0x40000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                = (0x20000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                        } else {
                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = (0x2000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = (0xffffefffU 
                                       & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                    = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                    = ((0x1f0ffU & 
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
                                       | (0xffffff00U 
                                          & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                                               ? 0xbU
                                               : 8U) 
                                             << 8U)));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = ((0x7fffffffU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
                                       | (0x80000000U 
                                          & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                             << 0x1fU)));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                    = ((0xffffc007U 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]) 
                                       | (0xfffffff8U 
                                          & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb) 
                                             << 3U)));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U] 
                                    = ((0xfffffffdU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[2U]) 
                                       | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                                >> 0x1dU)));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                                    = ((0xffffffdfU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
                                       | (0x20U & (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                             << 8U) 
                                                            | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                               >> 0x18U)))) 
                                                       << 5U) 
                                                      | (0xffffffe0U 
                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[1U] 
                                                            << 4U))) 
                                                     | (0x3fffe0U 
                                                        & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                           >> 0xaU))) 
                                                    | ((0U 
                                                        != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__wb_stage_i__DOT__lsu_mpu_status)) 
                                                       << 5U)) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                      >> 0xbU))));
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                                    = ((0xffffffefU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U]) 
                                       | (0x10U & (
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                    >> 0x17U) 
                                                   & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                                      >> 0xcU))));
                            } else {
                                if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                     | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                        = (0x20000U 
                                           | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                        = (0x17fffU 
                                           & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                } else {
                                    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            = (0x100000U 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            = (0x80000U 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            = (0x40000U 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                            = (0x20000U 
                                               | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                        if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x8000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x4000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x2000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0xfffdffffU 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                = (0x4000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                = (0x600U 
                                                   | (0x1f0ffU 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                        }
                                    } else {
                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x8000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x4000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                = (0x2000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                = (0x200U 
                                                   | (0x1f0ffU 
                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                = (0x4000U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                                = (1U 
                                                   | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]);
                                        } else {
                                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_wr_in_wb_flush) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    = 
                                                    (0x100000U 
                                                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    = 
                                                    (0x80000U 
                                                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                    = 
                                                    (0x40000U 
                                                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                            } else {
                                                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                        = 
                                                        (0x8000U 
                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                        = 
                                                        (0x4000U 
                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                        = 
                                                        (0x2000U 
                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                        = 
                                                        (0x4000U 
                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                        = 
                                                        (0x600U 
                                                         | (0x1f0ffU 
                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                                } else {
                                                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                            = 
                                                            (0x8000U 
                                                             | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                            = 
                                                            ((0xffffbfffU 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
                                                             | (0x4000U 
                                                                & ((~ 
                                                                    (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__xsecure_ctrl[0U] 
                                                                     >> 4U)) 
                                                                   << 0xeU)));
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                            = 
                                                            (0x500U 
                                                             | (0x1f0ffU 
                                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                            = 
                                                            (0x4000U 
                                                             | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                    } else {
                                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                                = 
                                                                (0x8000U 
                                                                 | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) {
                                                                if (
                                                                    ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                                                      >> 0x1eU) 
                                                                     & (3U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                                                            >> 0x1cU))))) {
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                        = 
                                                                        (0x4000U 
                                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                        = 
                                                                        (0x2000U 
                                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                        = 
                                                                        (0x100U 
                                                                         | (0x1f0ffU 
                                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                                                } else {
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                        = 
                                                                        (0x100U 
                                                                         | (0x1f0ffU 
                                                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                        = 
                                                                        (0x4000U 
                                                                         | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                                        = 
                                                                        ((0xefffffffU 
                                                                          & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]) 
                                                                         | (0x10000000U 
                                                                            & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                                                               << 0x1cU)));
                                                                }
                                                            } else {
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                    = 
                                                                    ((0x1f0ffU 
                                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
                                                                     | (0xffffff00U 
                                                                        & (((1U 
                                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                                                >> 0x17U) 
                                                                                & (~ 
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                                                >> 1U))))
                                                                             ? 0xfU
                                                                             : 
                                                                            ((1U 
                                                                              & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                                                >> 0x17U) 
                                                                                & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                                                >> 1U)))
                                                                              ? 0xeU
                                                                              : 4U)) 
                                                                           << 8U)));
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                    = 
                                                                    (0x4000U 
                                                                     | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                    = 
                                                                    ((0x1efffU 
                                                                      & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]) 
                                                                     | (0x1000U 
                                                                        & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                                            >> 0xbU) 
                                                                           & ((~ 
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[0U] 
                                                                                >> 1U)) 
                                                                              << 0xcU))));
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                                                    | ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[5U] 
                                                                        >> 7U) 
                                                                       & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                                          >> 0x18U))))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                                           >> 6U) 
                                                                          | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U]) 
                                                                         | (0U 
                                                                            != 
                                                                            (3U 
                                                                             & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[4U] 
                                                                                << 3U) 
                                                                                | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_id_pipe[3U] 
                                                                                >> 0x1dU)))))))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                            = 
                                                                            (0x4000U 
                                                                             | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                                                            = 
                                                                            (0xe00U 
                                                                             | (0x1f0ffU 
                                                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]));
                                                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                                                            = 
                                                                            (0x8000U 
                                                                             | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & ((((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                            >> 0xcU) 
                                           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                              >> 6U)) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                             >> 0x10U)) 
                                         & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                            >> 2U)) 
                                        & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                             >> 0x11U))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                    = ((0xfffffffbU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]) 
                                       | (4U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                                << 2U)));
                            }
                            if ((1U & (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                           >> 0x13U) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                               >> 0xcU))) 
                                        & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                              >> 0x11U))) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                                    = ((0xfffffffdU 
                                        & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U]) 
                                       | (2U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                                << 1U)));
                            }
                            if ((1U & (((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                           >> 0x14U) 
                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_wb_pipe[0U] 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                               >> 0xcU))) 
                                        & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                              >> 0x11U))) 
                                       & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                                    = (0x40000000U 
                                       | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U]);
                            }
                        }
                    }
                }
            }
            if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
            }
        } else {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                = (0x17fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__sleep_unit_i__DOT__fetch_enable_q) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x17fffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x1f0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                } else {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x8000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x1f0ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                        = (0x4000U | vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U]);
                }
            }
        }
    }
    if (((((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
               >> 0xfU)) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__dcsr_rdata 
                            >> 2U)) & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid) 
             & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready)) 
            & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__last_op_if) 
               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__abort_op_if))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
    if ((1U & (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_valid) 
                  & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ex_ready)) 
                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ex_pipe[0U] 
                    >> 2U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
    if ((1U & ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instr_valid) 
                 & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__id_ready)) 
                & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q)) 
               | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            } else {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                    [1U]) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_rvalid
                    [1U]) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
                }
            } else {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt
                    [1U]) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__host_gnt
                    [1U]) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
                }
            } else {
                if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid) 
                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        >> 0x14U))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
                }
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
                }
                if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid) 
                     & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        >> 0xfU))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
                }
            }
        }
    }
    if (((3U < (7U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_be_o
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_wdata_o
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_addr_o
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_we_o
        [7U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[1U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [1U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[2U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [2U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[3U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [3U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[4U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [4U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[5U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [5U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[6U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [6U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req[7U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT____Vcellout__u_bus__device_req_o
        [7U];
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                             << 4U) | (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                        << 3U) | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = vlTOPp->__Vtable6_uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns
        [vlTOPp->__Vtableidx6];
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_be_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_o_d 
        = ((0xff00U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xffU & ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                        [1U]) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                       [1U] : (IData)(vlTOPp->gp_o))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_o_d 
        = ((0xffU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xff00U & (((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                           [1U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                    [1U] >> 8U) : ((IData)(vlTOPp->gp_o) 
                                                   >> 8U)) 
                         << 8U)));
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_wdata_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata) 
           | (0xffU & ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                        [4U]) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                       [4U] : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xffU & ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                        [4U]) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                       [4U] : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                       >> 0x20U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xffU & ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                        [4U]) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                       [4U] : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffff00U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xffU & ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                        [4U]) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                       [4U] : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                       >> 0x20U)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff00U & (((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                           [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff00U & (((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                           [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff00U & (((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                           [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffff00ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff00U & (((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                           [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff0000U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                             [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff0000U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                             [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff0000U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                             [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xff00ffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff0000U & (((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                             [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff000000U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                               [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff000000U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                               [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff000000U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                               [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff000000U & (((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                               [4U]) ? (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                [4U]))) {
        if ((4U != (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                    [4U]))) {
            if ((8U != (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                        [4U]))) {
                if ((0xcU != (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                              [4U]))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__rdata_d 
        = ((0U == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                   [4U])) ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q)
            : ((4U == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                       [4U])) ? (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
                                         >> 0x20U))
                : ((8U == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                           [4U])) ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q)
                    : ((0xcU == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                 [4U])) ? (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x20U))
                        : 0U))));
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
        [0U];
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_we_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rvalid_d = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
        [3U]) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rvalid_d = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rdata_d = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
        [3U]) {
        if ((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                   [3U] & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                           [3U])))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__device_rdata_d 
                = ((0U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                           [3U])) ? ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))))
                    : ((4U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                               [3U])) ? 0U : ((8U == 
                                               (0xfffU 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                                [3U]))
                                               ? (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rvalid))))
                                               : 0U)));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
              [5U] & (0U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                             [5U]))) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
             [5U]) & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                      & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((4U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                     [3U])) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
                                [3U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                [3U]) & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                               [3U])) & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                         & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rready = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
        [3U]) {
        if ((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                   [3U] & (~ vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
                           [3U])))) {
            if ((0U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                        [3U]))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rready = 1U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
           [4U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
           [4U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
           [7U] | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_instr_req));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
           [7U] & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_we
           [7U]);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
        = (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_req
           [7U] ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
           [7U] : vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__if_mem_instr_addr
           [0U]);
    vlTOPp->mem_be_o[1U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_be_o
        [1U];
    vlTOPp->mem_be_o[0U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_be_o
        [0U];
    vlTOPp->mem_wdata_o[1U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_wdata_o
        [1U];
    vlTOPp->mem_wdata_o[0U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_wdata_o
        [0U];
    vlTOPp->mem_addr_o[1U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o
        [1U];
    vlTOPp->mem_addr_o[0U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_addr_o
        [0U];
    vlTOPp->mem_we_o[1U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_we_o
        [1U];
    vlTOPp->mem_we_o[0U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_we_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlTOPp->mem_req_o[1U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o
        [1U];
    vlTOPp->mem_req_o[0U] = vlTOPp->uCup_top__DOT____Vcellout__genblk1__DOT__u_soc__mem_req_o
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rvalid) 
            & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__rx_fifo_rready)) 
           & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_d 
        = (((QData)((IData)((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                              & (4U == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                        [4U]))) ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimeh_wdata
                              : (IData)(((1ULL + vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q) 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
                                          & (0U == 
                                             (0x3ffU 
                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                                              [4U])))
                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_wdata
                                          : ((IData)(1U) 
                                             + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                     [4U])));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__timer_we) 
           & (0xcU == (0x3ffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_addr
                       [4U])));
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                          [7U])));
            } else {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                            = ((~ ((IData)(1U) << (1U 
                                                   & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                   [7U]))) 
                               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
               & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | ((IData)(1U) << (1U 
                                                  & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                  [7U])));
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we)))) {
            if ((0x300U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq) 
                           >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                               [7U])))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x5040006fULL;
                }
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((((0U == (0xffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))) 
                             & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                   >> 0x11U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x12U))
                            ? 0x600006fULL : 0x380006fULL);
                }
            } else {
                if (((0x380U <= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                     & (0x387U >= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = (((QData)((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                             >> (0x20U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                      >> 3U)) 
                                                    << 5U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                         >> 
                                                         (0x20U 
                                                          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                             << 2U))))));
                } else {
                    if (((0x360U <= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                         & (0x37fU >= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                            = (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (6U 
                                                  & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                       >> 3U) 
                                                      - (IData)(4U)) 
                                                     << 1U)))])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                            (6U 
                                                             & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                                  >> 3U) 
                                                                 - (IData)(4U)) 
                                                                << 1U))])));
                    } else {
                        if (((0x338U <= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                             & (0x35fU >= (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                = (((QData)((IData)(
                                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xeU 
                                                      & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                           >> 3U) 
                                                          - (IData)(7U)) 
                                                         << 1U)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                                (0xeU 
                                                                 & (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr 
                                                                      >> 3U) 
                                                                     - (IData)(7U)) 
                                                                    << 1U))])));
                        } else {
                            if (((0x400U <= (0xfffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                                 & (0x7ffU >= (0xfffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                                if ((0U == (0xfffU 
                                            & ((0xff8U 
                                                & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr) 
                                               - (IData)(0x400U))))) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                        = (((~ (0xffULL 
                                                << 
                                                (8U 
                                                 & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                                                    << 3U)))) 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata) 
                                           | ((QData)((IData)(
                                                              (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go)))) 
                                              << (8U 
                                                  & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                                                     << 3U))));
                                }
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                    = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr)))) {
                                if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                     [7U])) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffffffff00ULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | (IData)((IData)(
                                                             (0xffU 
                                                              & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                              [7U]))));
                                }
                                if ((2U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                     [7U])) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffffff00ffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 8U)))) 
                                              << 8U));
                                }
                                if ((4U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                     [7U])) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffff00ffffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 0x10U)))) 
                                              << 0x10U));
                                }
                                if ((8U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_be
                                     [7U])) {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffff00ffffffULL 
                                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 0x18U)))) 
                                              << 0x18U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 1U;
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_wdata
                                          [7U])));
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_req) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                        if ((0x10cU == (0xfffU & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__dbg_slave_addr))) {
                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we)
                              ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_wdata
                              : (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we)
                                          ? vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_wdata
                                          : (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q)))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__interrupt_d 
        = (((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtime_q 
             >= vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_q) 
            | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__interrupt_q)) 
           & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmp_we) 
                 | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_timer__DOT__mtimecmph_we))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x20U 
                                                  & ((IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U)) 
                                                     << 5U)))) 
                            & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                              << (0x20U & ((IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U)) 
                                           << 5U))));
                }
            }
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else {
            if ((1U & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                       >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
            }
        } else {
            if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                  & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                     >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                 & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
            }
            if ((1U & (((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq) 
                          >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)) 
                         & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                               >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                        & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
                              >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                       & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                          >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 4U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 2U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 3U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x18U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x17U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))))) {
                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U == (0x7fU & (IData)(
                                                           (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                    = (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                                if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                    if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                    }
                                } else {
                                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                        = ((~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U)) 
                                           & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                                }
                            } else {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                        if ((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                            }
                                        }
                                    } else {
                                        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror;
    }
}

VL_INLINE_OPT void VuCup_top::_combo__TOP__7(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_combo__TOP__7\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__debug_running_o 
        = (1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[3U] 
                 >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                  >> 0xeU) & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                               >> 0xdU) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                           >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk 
        = (0x20U | ((0x100U & ((~ (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                           >> 0xeU))) 
                               << 8U)) | ((0x10U & 
                                           ((~ (VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                         >> 0xfU)))) 
                                                ^ VL_REDXOR_32(
                                                               (3U 
                                                                & (IData)(
                                                                          (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                           >> 0x12U)))))) 
                                            << 4U)) 
                                          | ((8U & 
                                              (VL_REDXOR_32(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                        >> 0x2cU)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (VL_REDXOR_32(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                             >> 0x24U)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x1cU)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                                                                >> 0x16U)))))))))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__hpm_events 
        = ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__hpm_events)) 
           | (2U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U] 
                    >> 0x14U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_addr[0U] 
        = (0xfffffffcU & ((IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                                   >> 0x16U)) << 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_req[0U] 
        = (1U & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__c_obi_instr_if_ma_o 
                         >> 0x35U)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans 
        = ((0xfffffffffbfffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__if_stage_i__DOT__core_trans) 
           | ((QData)((IData)((1U & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[4U] 
                                     >> 0x10U)))) << 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__csr_mtvec_init_if 
        = ((0U == (0xfU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                           >> 8U))) & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[6U] 
                                       >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    if ((0x80000000U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[0U])) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else {
        if ((1U & ((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                    >> 2U) | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U] 
                              >> 1U)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        } else {
            if ((1U & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__ctrl_fsm[1U])) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
            }
        }
    }
    vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rvalid_i[1U] 
        = vlTOPp->mem_rvalid_i[1U];
    vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rvalid_i[0U] 
        = vlTOPp->mem_rvalid_i[0U];
    vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i[1U] 
        = vlTOPp->mem_rdata_i[1U];
    vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i[0U] 
        = vlTOPp->mem_rdata_i[0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_addr_inst_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_addr
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT____Vcellinp__u_int_bus__host_req_inst_i[0U] 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__core_instr_req
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rvalid[0U] 
        = vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rvalid_i
        [0U];
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__device_rdata[0U] 
        = vlTOPp->uCup_top__DOT____Vcellinp__genblk1__DOT__u_soc__mem_rdata_i
        [0U];
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__8(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__8\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_combi;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q = 0ULL;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_d;
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q = 0U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q = 0U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n) {
        if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q 
                = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_d;
        }
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q = 0U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync 
            = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
    } else {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync = 0U;
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x3ffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
              << 0x22U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x1ff00000000ULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | (IData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
           == (4U ^ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x1fcffffffffULL & vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | ((QData)((IData)(((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))
                                ? 2U : 1U))) << 0x20U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q) 
                              << 0xaU));
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (0x7fffffffU & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                  >> 1U));
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q;
    if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
                        = (0x7fU & (IData)((vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                            >> 0x22U)));
                }
            }
        }
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q;
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
         & (0U != (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
    }
    if (((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
         & ((1U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)) 
            | (2U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 3U;
    }
    if ((((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
          & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
             >> 0x10U)) & (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select))) {
        vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__grayval 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__grayval)));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__grayval))) {
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__Vfuncout 
            = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp_sub;
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__Vfuncout));
    } else {
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__Vfuncout 
            = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__dec_tmp;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_combi 
        = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__90__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)
            ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_q)
            : 0U);
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__grayval 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp = 0U;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp)) 
           | ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__grayval)));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp)) 
           | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1));
    vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__grayval))) {
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__Vfuncout 
            = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp_sub;
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__Vfuncout));
    } else {
        vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__Vfuncout 
            = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__dec_tmp;
    }
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi 
        = vlTOPp->__Vfunc_uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__95__Vfuncout;
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)
            ? (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_q)
            : 0U);
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
        = vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q;
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
            if (((0U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                 & (~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy)))) {
                vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                    = (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                        << 0x22U) | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                     << 2U));
            } else {
                if (((3U == (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                     | (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy))) {
                    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                                    << 0x22U) | ((QData)((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                                 << 2U)));
                }
            }
        }
    }
    if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
            vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                = (0xffffffffffULL & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                      >> 1U));
        }
    }
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__9(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__9\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                 >> 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffr_shadowreg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                 >> 0xbU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    >> 0xcU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
                    >> 0xbU)));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mstatus_n 
              >> 3U));
}

VL_INLINE_OPT void VuCup_top::_sequent__TOP__10(VuCup_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VuCup_top::_sequent__TOP__10\n"); );
    VuCup_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1fU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1eU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1dU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1cU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1bU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x1aU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x19U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x18U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x17U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x16U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x15U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x14U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x13U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x12U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x11U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0x10U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xfU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xeU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xdU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xcU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xbU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 0xaU))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 9U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 8U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 7U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 6U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 5U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 4U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 3U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 2U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffs_shadowreg__q_o 
        = (1U & ((~ (IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n)) 
                 | (~ (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
                       >> 1U))));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__31__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1fU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__30__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1eU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__29__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1dU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__28__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1cU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__27__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1bU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__26__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x1aU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__25__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x19U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__24__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x18U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__23__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x17U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__22__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x16U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__21__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x15U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__20__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x14U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__19__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x13U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__18__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x12U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__17__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x11U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__16__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0x10U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__15__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xfU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__14__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xeU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__13__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xdU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__12__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xcU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__11__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xbU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__10__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 0xaU));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__9__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 9U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__8__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 8U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__7__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 7U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__6__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 6U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__5__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 5U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__4__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 4U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__3__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 3U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__2__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 2U));
    vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr__BRA__1__KET____DOT__gen_unmasked__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__rst_core_n) 
           & (vlTOPp->uCup_top__DOT__genblk1__DOT__u_soc__DOT__u_core__DOT__u_incore__DOT__cs_registers_i__DOT__mepc_n 
              >> 1U));
}
