// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "verilated.h"

#include "VExercise2__Syms.h"
#include "VExercise2__Syms.h"
#include "VExercise2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise2___024root___dump_triggers__stl(VExercise2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise2___024root___eval_triggers__stl(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise2___024root___configure_coverage(VExercise2___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 11, 11, ".Exercise2", "v_toggle/Exercise2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 12, 11, ".Exercise2", "v_toggle/Exercise2", "nReset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 13, 18, ".Exercise2", "v_toggle/Exercise2", "init[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/benchikbayor/Desktop/onboarding-lab-2/rtl/Exercise2.sv", 14, 25, ".Exercise2", "v_toggle/Exercise2", "out[15]", "");
}
