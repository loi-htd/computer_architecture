// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h920bc4e6__0;
    VlWide<5>/*159:0*/ __Vtemp_h3e10d2e8__0;
    VlWide<5>/*159:0*/ __Vtemp_h3e10d2e8__1;
    // Body
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    __Vtemp_h920bc4e6__0[0U] = 0x64617461U;
    __Vtemp_h920bc4e6__0[1U] = 0x6d656d2eU;
    __Vtemp_h920bc4e6__0[2U] = 0x696f6e5fU;
    __Vtemp_h920bc4e6__0[3U] = 0x72756374U;
    __Vtemp_h920bc4e6__0[4U] = 0x696e7374U;
    __Vtemp_h920bc4e6__0[5U] = 0x6d656d2fU;
    __Vtemp_h920bc4e6__0[6U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 1012, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h920bc4e6__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__instr_memory)
                 , 0, ~0ULL);
    vlSelf->top__DOT__dut__DOT__pc = 0U;
    __Vtemp_h3e10d2e8__0[0U] = 0x64617461U;
    __Vtemp_h3e10d2e8__0[1U] = 0x6174612eU;
    __Vtemp_h3e10d2e8__0[2U] = 0x656d5f64U;
    __Vtemp_h3e10d2e8__0[3U] = 0x656d2f6dU;
    __Vtemp_h3e10d2e8__0[4U] = 0x2e2e2f6dU;
    VL_WRITEMEM_N(true, 32, 512, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h3e10d2e8__0)
                  ,  &(vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data)
                  , 0, ~0ULL);
    __Vtemp_h3e10d2e8__1[0U] = 0x64617461U;
    __Vtemp_h3e10d2e8__1[1U] = 0x6174612eU;
    __Vtemp_h3e10d2e8__1[2U] = 0x656d5f64U;
    __Vtemp_h3e10d2e8__1[3U] = 0x656d2f6dU;
    __Vtemp_h3e10d2e8__1[4U] = 0x2e2e2f6dU;
    VL_READMEM_N(true, 32, 512, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h3e10d2e8__1)
                 ,  &(vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h88d3d1bb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h878637ed_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->io_hex0_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [0U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [1U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [2U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [3U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [4U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [5U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [6U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [7U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [8U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [9U];
    vlSelf->io_lcd_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [0xaU];
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc;
    vlSelf->top__DOT__dut__DOT__instr = ((0x3f3U >= 
                                          (0x3ffU & 
                                           (vlSelf->top__DOT__dut__DOT__pc 
                                            >> 2U)))
                                          ? vlSelf->top__DOT__dut__DOT__instr_memory
                                         [(0x3ffU & 
                                           (vlSelf->top__DOT__dut__DOT__pc 
                                            >> 2U))]
                                          : vlSelf->top__DOT__dut__DOT____Vxrand_h96fd10a2__0);
    vlSelf->top__DOT__dut__DOT__rd_wren = 0U;
    vlSelf->top__DOT__dut__DOT__is_load = 0U;
    vlSelf->top__DOT__dut__DOT__rd_addr = 0U;
    vlSelf->top__DOT__dut__DOT__jump = 0U;
    vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
    vlSelf->top__DOT__dut__DOT__ld_op = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__is_load = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__mem_wren = 1U;
                                vlSelf->top__DOT__dut__DOT__ld_op 
                                    = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__dut__DOT__instr)
                                             ? 3U : 1U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0U
                                                : 0xfU)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0xbU
                                                : 9U)));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__ld_op 
                                = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr)
                                                 ? 3U
                                                 : 1U))
                                    : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr)
                                            ? 0U : 0xfU)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr)
                                            ? 0xbU : 9U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__branch = 0U;
    vlSelf->top__DOT__dut__DOT__alu_op = 0U;
    vlSelf->top__DOT__dut__DOT__br_op = 0U;
    vlSelf->top__DOT__dut__DOT__op_b_sel = 0U;
    vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
    vlSelf->top__DOT__dut__DOT__rs2_addr = 0U;
    vlSelf->top__DOT__dut__DOT__rs1_addr = 0U;
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                                vlSelf->top__DOT__dut__DOT__rd_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                                >> 7U));
                                vlSelf->top__DOT__dut__DOT__jump = 1U;
                                vlSelf->top__DOT__dut__DOT__branch = 1U;
                                vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                                vlSelf->top__DOT__dut__DOT__br_op = 6U;
                                vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                                vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__jump = 1U;
                            vlSelf->top__DOT__dut__DOT__branch = 1U;
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__br_op = 7U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__jump = 0U;
                        vlSelf->top__DOT__dut__DOT__branch = 1U;
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__br_op 
                            = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? 5U : 4U) : 
                                   ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                     ? 3U : 2U)) : 
                               ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                 ? 0U : ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                          ? 1U : 0U)));
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__rs2_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                                >> 0x14U));
                            }
                        }
                    }
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__rs1_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__rs1_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 0xfU));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((0x10U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__dut__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSelf->top__DOT__dut__DOT__instr 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__dut__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))));
        } else {
            vlSelf->top__DOT__dut__DOT__imm = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__rs1_addr = 0U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 7U));
                        if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 1U : 0U);
                        } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 2U;
                        } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 3U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 4U;
                        } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 5U;
                        } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 6U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 7U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 9U : 8U);
                        }
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xfU));
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__rs2_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 0x14U));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((8U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U));
        } else {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__rs2_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 0x14U));
                            vlSelf->top__DOT__dut__DOT__rs1_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                            >> 0xfU));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((8U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U)));
        }
    } else if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                      >> 3U)))) {
            if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                    }
                }
            } else if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                    vlSelf->top__DOT__dut__DOT__rd_addr 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                    >> 7U));
                    if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                    } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 2U;
                    } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 3U;
                    } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 4U;
                    } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 5U;
                    } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 6U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 7U;
                    } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op 
                            = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? 9U : 8U);
                    }
                    vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm = ((8U & vlSelf->top__DOT__dut__DOT__instr)
                                            ? 0U : 
                                           ((4U & vlSelf->top__DOT__dut__DOT__instr)
                                             ? ((2U 
                                                 & vlSelf->top__DOT__dut__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                  : 0U)
                                                 : 0U)
                                             : ((2U 
                                                 & vlSelf->top__DOT__dut__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7ffU 
                                                     & (vlSelf->top__DOT__dut__DOT__instr 
                                                        >> 0x14U)))
                                                  : 0U)
                                                 : 0U)));
    } else {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm = ((8U & vlSelf->top__DOT__dut__DOT__instr)
                                            ? 0U : 
                                           ((4U & vlSelf->top__DOT__dut__DOT__instr)
                                             ? 0U : 
                                            ((2U & vlSelf->top__DOT__dut__DOT__instr)
                                              ? ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7ffU 
                                                     & (vlSelf->top__DOT__dut__DOT__instr 
                                                        >> 0x14U)))
                                                  : 0U)
                                              : 0U)));
    }
    vlSelf->top__DOT__dut__DOT__rs2_data = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
        [vlSelf->top__DOT__dut__DOT__rs2_addr];
    vlSelf->top__DOT__dut__DOT__rs1_data = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
        [vlSelf->top__DOT__dut__DOT__rs1_addr];
    vlSelf->top__DOT__dut__DOT__operand_b = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel)
                                              ? vlSelf->top__DOT__dut__DOT__imm
                                              : vlSelf->top__DOT__dut__DOT__rs2_data);
    if ((vlSelf->top__DOT__dut__DOT__rs1_data == vlSelf->top__DOT__dut__DOT__rs2_data)) {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 1U;
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 0U;
        if (((4U == (IData)(vlSelf->top__DOT__dut__DOT__br_op)) 
             | (5U == (IData)(vlSelf->top__DOT__dut__DOT__br_op)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel1;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
                            goto __Vlabel2;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
                __Vlabel1: ;
            }
        } else if (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__rs1_data 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel3;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
                            goto __Vlabel4;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__operand_a = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel)
                                              ? vlSelf->top__DOT__dut__DOT__pc
                                              : vlSelf->top__DOT__dut__DOT__rs1_data);
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less) 
                     << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal) 
                                << 4U) | (((IData)(vlSelf->top__DOT__dut__DOT__br_op) 
                                           << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__branch))));
    if (Vtop__ConstPool__TABLE_h88d3d1bb_0[__Vtableidx1]) {
        vlSelf->top__DOT__dut__DOT__br_sel = Vtop__ConstPool__TABLE_h878637ed_0
            [__Vtableidx1];
    }
    if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        vlSelf->top__DOT__dut__DOT__alu_data = ((4U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__dut__DOT__operand_a, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__dut__DOT__operand_b))
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__dut__DOT__operand_b)))));
    } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        vlSelf->top__DOT__dut__DOT__alu_data = ((2U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__dut__DOT__operand_b))
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  & vlSelf->top__DOT__dut__DOT__operand_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  | vlSelf->top__DOT__dut__DOT__operand_b)
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__operand_b)));
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
                            goto __Vlabel5;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
                            goto __Vlabel6;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
                }
                __Vlabel5: ;
            }
        } else if (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__operand_a 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
                            goto __Vlabel7;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
                            goto __Vlabel8;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel8: ;
                }
                __Vlabel7: ;
            }
        }
    } else {
        vlSelf->top__DOT__dut__DOT__alu_data = ((1U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)))
                                                 : 
                                                (vlSelf->top__DOT__dut__DOT__operand_a 
                                                 + vlSelf->top__DOT__dut__DOT__operand_b));
    }
    vlSelf->top__DOT__dut__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__dut__DOT__br_sel)
                                           ? vlSelf->top__DOT__dut__DOT__alu_data
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__dut__DOT__pc));
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel 
        = ((0x900U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data))
            ? 0xcU : ((0x8a0U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data))
                       ? 0xaU : ((0x890U == (0xfffU 
                                             & vlSelf->top__DOT__dut__DOT__alu_data))
                                  ? 9U : ((0x880U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__dut__DOT__alu_data))
                                           ? 8U : (
                                                   (0x870U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__dut__DOT__alu_data))
                                                    ? 7U
                                                    : 
                                                   ((0x860U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__dut__DOT__alu_data))
                                                     ? 6U
                                                     : 
                                                    ((0x850U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__dut__DOT__alu_data))
                                                      ? 5U
                                                      : 
                                                     ((0x840U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__dut__DOT__alu_data))
                                                       ? 4U
                                                       : 
                                                      ((0x830U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__dut__DOT__alu_data))
                                                        ? 3U
                                                        : 
                                                       ((0x820U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__dut__DOT__alu_data))
                                                         ? 2U
                                                         : 
                                                        ((0x810U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelf->top__DOT__dut__DOT__alu_data))
                                                          ? 1U
                                                          : 
                                                         ((0x800U 
                                                           == 
                                                           (0xfffU 
                                                            & vlSelf->top__DOT__dut__DOT__alu_data))
                                                           ? 0U
                                                           : 0xbU))))))))))));
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff0000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff000000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data)]));
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xffffff00U 
                                                & vlSelf->top__DOT__dut__DOT__ld_data) 
                                               | ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data)
                                                   : 0U));
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xffff00ffU 
                                                & vlSelf->top__DOT__dut__DOT__ld_data) 
                                               | (0xff00U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))
                                                       ? 
                                                      (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                       >> 8U)
                                                       : 
                                                      (- (IData)(
                                                                 ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                   >> 7U) 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op) 
                                                                     >> 3U))))) 
                                                     << 8U)));
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xff00ffffU 
                                                & vlSelf->top__DOT__dut__DOT__ld_data) 
                                               | (0xff0000U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))
                                                       ? 
                                                      (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                       >> 0x10U)
                                                       : 
                                                      (- (IData)(
                                                                 ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                   >> 0xfU) 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op) 
                                                                     >> 3U))))) 
                                                     << 0x10U)));
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xffffffU 
                                                & vlSelf->top__DOT__dut__DOT__ld_data) 
                                               | (((4U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                    >> 0x18U)
                                                    : 
                                                   (- (IData)(
                                                              ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                >> 0x1fU) 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op) 
                                                                  >> 3U))))) 
                                                  << 0x18U));
    } else {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data = 0U;
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xcU 
                                                >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))
                                                ? vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
                                               [vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel]
                                                : vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__nxt_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1012; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__instr_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__br_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ld_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__instr_debug_i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
