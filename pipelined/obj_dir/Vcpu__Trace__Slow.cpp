// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


//======================

void Vcpu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vcpu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcpu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vcpu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vcpu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+77,"clk", false,-1);
        tracep->declBit(c+78,"rst", false,-1);
        tracep->declBus(c+79,"a0", false,-1, 31,0);
        tracep->declBus(c+82,"cpu ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+84,"cpu CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+85,"cpu IMM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu clk", false,-1);
        tracep->declBit(c+78,"cpu rst", false,-1);
        tracep->declBus(c+79,"cpu a0", false,-1, 31,0);
        tracep->declBus(c+1,"cpu RegWriteW", false,-1, 2,0);
        tracep->declBus(c+2,"cpu RegWriteM", false,-1, 2,0);
        tracep->declBus(c+3,"cpu MemWriteM", false,-1, 1,0);
        tracep->declBus(c+4,"cpu ResultSrcW", false,-1, 1,0);
        tracep->declBus(c+16,"cpu ALUControlE", false,-1, 2,0);
        tracep->declBit(c+17,"cpu ALUSrcE", false,-1);
        tracep->declBus(c+42,"cpu InstrD", false,-1, 31,0);
        tracep->declBus(c+43,"cpu ExtImmD", false,-1, 31,0);
        tracep->declBus(c+44,"cpu PCD", false,-1, 31,0);
        tracep->declBus(c+45,"cpu PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+18,"cpu ALUResultE", false,-1, 31,0);
        tracep->declBus(c+19,"cpu PCTarget", false,-1, 31,0);
        tracep->declBus(c+73,"cpu PCSrcE", false,-1, 1,0);
        tracep->declBus(c+20,"cpu Rs1E", false,-1, 4,0);
        tracep->declBus(c+21,"cpu Rs2E", false,-1, 4,0);
        tracep->declBus(c+5,"cpu RdM", false,-1, 4,0);
        tracep->declBus(c+6,"cpu RdW", false,-1, 4,0);
        tracep->declBus(c+22,"cpu RdE", false,-1, 4,0);
        tracep->declBus(c+23,"cpu OpcodeE", false,-1, 6,0);
        tracep->declBit(c+24,"cpu ZeroE", false,-1);
        tracep->declBus(c+46,"cpu PCF", false,-1, 31,0);
        tracep->declBus(c+47,"cpu PCPlus4F", false,-1, 31,0);
        tracep->declBit(c+74,"cpu Den", false,-1);
        tracep->declBit(c+74,"cpu Fen", false,-1);
        tracep->declBit(c+80,"cpu PCen", false,-1);
        tracep->declBus(c+25,"cpu FowardAE", false,-1, 1,0);
        tracep->declBus(c+26,"cpu FowardBE", false,-1, 1,0);
        tracep->declBit(c+75,"cpu PCrst", false,-1);
        tracep->declBit(c+75,"cpu Frst", false,-1);
        tracep->declBit(c+76,"cpu Drst", false,-1);
        tracep->declBus(c+83,"cpu pc DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu pc clk", false,-1);
        tracep->declBus(c+18,"cpu pc ALUResultE_i", false,-1, 31,0);
        tracep->declBus(c+73,"cpu pc PCSrc_i", false,-1, 1,0);
        tracep->declBit(c+80,"cpu pc PCen_i", false,-1);
        tracep->declBus(c+19,"cpu pc PCTarget_i", false,-1, 31,0);
        tracep->declBit(c+75,"cpu pc PCrst_i", false,-1);
        tracep->declBus(c+46,"cpu pc PCF_o", false,-1, 31,0);
        tracep->declBus(c+47,"cpu pc PCPlus4F_o", false,-1, 31,0);
        tracep->declBus(c+81,"cpu pc next_PC", false,-1, 31,0);
        tracep->declBus(c+83,"cpu pc pc_mux DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+85,"cpu pc pc_mux CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+73,"cpu pc pc_mux control", false,-1, 1,0);
        tracep->declBus(c+47,"cpu pc pc_mux input0", false,-1, 31,0);
        tracep->declBus(c+19,"cpu pc pc_mux input1", false,-1, 31,0);
        tracep->declBus(c+18,"cpu pc pc_mux input2", false,-1, 31,0);
        tracep->declBus(c+81,"cpu pc pc_mux out", false,-1, 31,0);
        tracep->declBus(c+83,"cpu pc pc_reg WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu pc pc_reg clk", false,-1);
        tracep->declBit(c+75,"cpu pc pc_reg rst", false,-1);
        tracep->declBit(c+80,"cpu pc pc_reg PCen", false,-1);
        tracep->declBus(c+81,"cpu pc pc_reg next_PC", false,-1, 31,0);
        tracep->declBus(c+46,"cpu pc pc_reg pc", false,-1, 31,0);
        tracep->declBus(c+82,"cpu control ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu control DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu control clk", false,-1);
        tracep->declBit(c+74,"cpu control Fen_i", false,-1);
        tracep->declBit(c+75,"cpu control Frst_i", false,-1);
        tracep->declBit(c+74,"cpu control Den_i", false,-1);
        tracep->declBit(c+76,"cpu control Drst_i", false,-1);
        tracep->declBus(c+46,"cpu control PCF_i", false,-1, 31,0);
        tracep->declBus(c+47,"cpu control PCPlus4F_i", false,-1, 31,0);
        tracep->declBit(c+24,"cpu control ZeroE_i", false,-1);
        tracep->declBus(c+42,"cpu control InstrD_o", false,-1, 31,0);
        tracep->declBus(c+1,"cpu control RegWriteW_o", false,-1, 2,0);
        tracep->declBus(c+2,"cpu control RegWriteM_o", false,-1, 2,0);
        tracep->declBus(c+3,"cpu control MemWriteM_o", false,-1, 1,0);
        tracep->declBus(c+4,"cpu control ResultSrcW_o", false,-1, 1,0);
        tracep->declBus(c+16,"cpu control ALUControlE_o", false,-1, 2,0);
        tracep->declBit(c+17,"cpu control ALUSrcE_o", false,-1);
        tracep->declBus(c+43,"cpu control ExtImmD_o", false,-1, 31,0);
        tracep->declBus(c+44,"cpu control PCD_o", false,-1, 31,0);
        tracep->declBus(c+45,"cpu control PCPlus4D_o", false,-1, 31,0);
        tracep->declBus(c+73,"cpu control PCSrcE_o", false,-1, 1,0);
        tracep->declBus(c+48,"cpu control ImmSrcD", false,-1, 2,0);
        tracep->declBus(c+49,"cpu control InstrF", false,-1, 31,0);
        tracep->declBit(c+27,"cpu control ZeroOp", false,-1);
        tracep->declBus(c+50,"cpu control ResultSrcD", false,-1, 1,0);
        tracep->declBus(c+51,"cpu control MemWriteD", false,-1, 1,0);
        tracep->declBus(c+52,"cpu control ALUControlD", false,-1, 2,0);
        tracep->declBit(c+53,"cpu control ALUSrcD", false,-1);
        tracep->declBit(c+54,"cpu control JumpD", false,-1);
        tracep->declBit(c+55,"cpu control BranchD", false,-1);
        tracep->declBus(c+56,"cpu control RegWriteD", false,-1, 2,0);
        tracep->declBus(c+28,"cpu control RegWriteE", false,-1, 2,0);
        tracep->declBus(c+29,"cpu control ResultSrcE", false,-1, 1,0);
        tracep->declBus(c+30,"cpu control MemWriteE", false,-1, 1,0);
        tracep->declBit(c+31,"cpu control JumpE", false,-1);
        tracep->declBit(c+32,"cpu control BranchE", false,-1);
        tracep->declBus(c+33,"cpu control funct3E", false,-1, 2,0);
        tracep->declBus(c+7,"cpu control ResultSrcM", false,-1, 1,0);
        tracep->declBus(c+82,"cpu control InstrMem ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu control InstrMem DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+46,"cpu control InstrMem addr_i", false,-1, 31,0);
        tracep->declBus(c+49,"cpu control InstrMem Instr_o", false,-1, 31,0);
        tracep->declBus(c+86,"cpu control ControlUnit OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+57,"cpu control ControlUnit op", false,-1, 6,0);
        tracep->declBus(c+58,"cpu control ControlUnit funct3", false,-1, 2,0);
        tracep->declBit(c+59,"cpu control ControlUnit funct7b5", false,-1);
        tracep->declBus(c+50,"cpu control ControlUnit ResultSrcD", false,-1, 1,0);
        tracep->declBus(c+51,"cpu control ControlUnit MemWriteD", false,-1, 1,0);
        tracep->declBit(c+53,"cpu control ControlUnit ALUSrcD", false,-1);
        tracep->declBus(c+56,"cpu control ControlUnit RegWriteD", false,-1, 2,0);
        tracep->declBus(c+48,"cpu control ControlUnit ImmSrcD", false,-1, 2,0);
        tracep->declBus(c+52,"cpu control ControlUnit ALUControlD", false,-1, 2,0);
        tracep->declBit(c+54,"cpu control ControlUnit JumpD", false,-1);
        tracep->declBit(c+55,"cpu control ControlUnit BranchD", false,-1);
        tracep->declBus(c+60,"cpu control ControlUnit ALUOpD", false,-1, 1,0);
        tracep->declBus(c+86,"cpu control ControlUnit maindec OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+57,"cpu control ControlUnit maindec op", false,-1, 6,0);
        tracep->declBus(c+58,"cpu control ControlUnit maindec funct3", false,-1, 2,0);
        tracep->declBus(c+50,"cpu control ControlUnit maindec ResultSrc", false,-1, 1,0);
        tracep->declBus(c+51,"cpu control ControlUnit maindec MemWrite", false,-1, 1,0);
        tracep->declBit(c+55,"cpu control ControlUnit maindec Branch", false,-1);
        tracep->declBit(c+53,"cpu control ControlUnit maindec ALUSrc", false,-1);
        tracep->declBus(c+56,"cpu control ControlUnit maindec RegWrite", false,-1, 2,0);
        tracep->declBit(c+54,"cpu control ControlUnit maindec Jump", false,-1);
        tracep->declBus(c+60,"cpu control ControlUnit maindec ALUOp", false,-1, 1,0);
        tracep->declBus(c+48,"cpu control ControlUnit maindec ImmSrc", false,-1, 2,0);
        tracep->declBus(c+61,"cpu control ControlUnit maindec controls", false,-1, 14,0);
        tracep->declBus(c+84,"cpu control ControlUnit aludec CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+58,"cpu control ControlUnit aludec funct3", false,-1, 2,0);
        tracep->declBit(c+59,"cpu control ControlUnit aludec funct7b5", false,-1);
        tracep->declBit(c+62,"cpu control ControlUnit aludec opb5", false,-1);
        tracep->declBus(c+60,"cpu control ControlUnit aludec ALUOp", false,-1, 1,0);
        tracep->declBus(c+52,"cpu control ControlUnit aludec ALUControl", false,-1, 2,0);
        tracep->declBit(c+63,"cpu control ControlUnit aludec RtypeSub", false,-1);
        tracep->declBus(c+83,"cpu control FReg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu control FReg clk", false,-1);
        tracep->declBit(c+74,"cpu control FReg en", false,-1);
        tracep->declBit(c+75,"cpu control FReg rst", false,-1);
        tracep->declBus(c+49,"cpu control FReg InstrF", false,-1, 31,0);
        tracep->declBus(c+46,"cpu control FReg PCF", false,-1, 31,0);
        tracep->declBus(c+47,"cpu control FReg PCPlus4F", false,-1, 31,0);
        tracep->declBus(c+45,"cpu control FReg PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+42,"cpu control FReg InstrD", false,-1, 31,0);
        tracep->declBus(c+44,"cpu control FReg PCD", false,-1, 31,0);
        tracep->declBus(c+83,"cpu control MySignExtend DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+84,"cpu control MySignExtend IMM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+64,"cpu control MySignExtend instr", false,-1, 31,7);
        tracep->declBus(c+48,"cpu control MySignExtend ImmSrc", false,-1, 2,0);
        tracep->declBus(c+43,"cpu control MySignExtend ExtImm", false,-1, 31,0);
        tracep->declBus(c+83,"cpu control DReg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu control DReg clk", false,-1);
        tracep->declBit(c+74,"cpu control DReg en", false,-1);
        tracep->declBit(c+76,"cpu control DReg rst", false,-1);
        tracep->declBus(c+56,"cpu control DReg RegWriteD", false,-1, 2,0);
        tracep->declBus(c+50,"cpu control DReg ResultSrcD", false,-1, 1,0);
        tracep->declBus(c+51,"cpu control DReg MemWriteD", false,-1, 1,0);
        tracep->declBit(c+54,"cpu control DReg JumpD", false,-1);
        tracep->declBit(c+55,"cpu control DReg BranchD", false,-1);
        tracep->declBus(c+52,"cpu control DReg ALUControlD", false,-1, 2,0);
        tracep->declBit(c+53,"cpu control DReg ALUSrcD", false,-1);
        tracep->declBus(c+58,"cpu control DReg funct3D", false,-1, 2,0);
        tracep->declBus(c+28,"cpu control DReg RegWriteE", false,-1, 2,0);
        tracep->declBus(c+29,"cpu control DReg ResultSrcE", false,-1, 1,0);
        tracep->declBus(c+30,"cpu control DReg MemWriteE", false,-1, 1,0);
        tracep->declBit(c+31,"cpu control DReg JumpE", false,-1);
        tracep->declBit(c+32,"cpu control DReg BranchE", false,-1);
        tracep->declBus(c+16,"cpu control DReg ALUControlE", false,-1, 2,0);
        tracep->declBit(c+17,"cpu control DReg ALUSrcE", false,-1);
        tracep->declBus(c+33,"cpu control DReg funct3E", false,-1, 2,0);
        tracep->declBus(c+83,"cpu control EREG DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu control EREG clk", false,-1);
        tracep->declBus(c+28,"cpu control EREG RegWriteE", false,-1, 2,0);
        tracep->declBus(c+29,"cpu control EREG ResultSrcE", false,-1, 1,0);
        tracep->declBus(c+30,"cpu control EREG MemWriteE", false,-1, 1,0);
        tracep->declBus(c+2,"cpu control EREG RegWriteM", false,-1, 2,0);
        tracep->declBus(c+7,"cpu control EREG ResultSrcM", false,-1, 1,0);
        tracep->declBus(c+3,"cpu control EREG MemWriteM", false,-1, 1,0);
        tracep->declBus(c+83,"cpu control MREG DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu control MREG clk", false,-1);
        tracep->declBus(c+2,"cpu control MREG RegWriteM", false,-1, 2,0);
        tracep->declBus(c+7,"cpu control MREG ResultSrcM", false,-1, 1,0);
        tracep->declBus(c+1,"cpu control MREG RegWriteW", false,-1, 2,0);
        tracep->declBus(c+4,"cpu control MREG ResultSrcW", false,-1, 1,0);
        tracep->declBus(c+84,"cpu alu CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu clk", false,-1);
        tracep->declBit(c+74,"cpu alu Den_i", false,-1);
        tracep->declBus(c+44,"cpu alu PCD_i", false,-1, 31,0);
        tracep->declBus(c+65,"cpu alu Rs1D_i", false,-1, 4,0);
        tracep->declBus(c+66,"cpu alu Rs2D_i", false,-1, 4,0);
        tracep->declBus(c+67,"cpu alu RdD_i", false,-1, 4,0);
        tracep->declBus(c+43,"cpu alu ExtImmD_i", false,-1, 31,0);
        tracep->declBus(c+45,"cpu alu PCPlus4D_i", false,-1, 31,0);
        tracep->declBus(c+57,"cpu alu opcodeD_i", false,-1, 6,0);
        tracep->declBus(c+25,"cpu alu FowardAE_i", false,-1, 1,0);
        tracep->declBus(c+26,"cpu alu FowardBE_i", false,-1, 1,0);
        tracep->declBit(c+76,"cpu alu Drst_i", false,-1);
        tracep->declBus(c+1,"cpu alu RegWriteW_i", false,-1, 2,0);
        tracep->declBus(c+3,"cpu alu MemWriteM_i", false,-1, 1,0);
        tracep->declBus(c+4,"cpu alu ResultSrcW_i", false,-1, 1,0);
        tracep->declBus(c+16,"cpu alu ALUControlE_i", false,-1, 2,0);
        tracep->declBit(c+17,"cpu alu ALUSrcE_i", false,-1);
        tracep->declBus(c+79,"cpu alu a0", false,-1, 31,0);
        tracep->declBus(c+19,"cpu alu PCTargetE_o", false,-1, 31,0);
        tracep->declBus(c+23,"cpu alu opcodeE_o", false,-1, 6,0);
        tracep->declBus(c+20,"cpu alu Rs1E_o", false,-1, 4,0);
        tracep->declBus(c+21,"cpu alu Rs2E_o", false,-1, 4,0);
        tracep->declBus(c+5,"cpu alu RdM_o", false,-1, 4,0);
        tracep->declBus(c+6,"cpu alu RdW_o", false,-1, 4,0);
        tracep->declBus(c+22,"cpu alu RdE_o", false,-1, 4,0);
        tracep->declBit(c+24,"cpu alu ZeroE_o", false,-1);
        tracep->declBus(c+18,"cpu alu ALUResultE_o", false,-1, 31,0);
        tracep->declBus(c+68,"cpu alu RD1D", false,-1, 31,0);
        tracep->declBus(c+69,"cpu alu RD2D", false,-1, 31,0);
        tracep->declBus(c+34,"cpu alu RD1E", false,-1, 31,0);
        tracep->declBus(c+35,"cpu alu RD2E", false,-1, 31,0);
        tracep->declBus(c+36,"cpu alu PCE", false,-1, 31,0);
        tracep->declBus(c+37,"cpu alu PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+38,"cpu alu SrcAE", false,-1, 31,0);
        tracep->declBus(c+39,"cpu alu SrcBE", false,-1, 31,0);
        tracep->declBus(c+40,"cpu alu WriteDataE", false,-1, 31,0);
        tracep->declBus(c+41,"cpu alu ExtImmE", false,-1, 31,0);
        tracep->declBus(c+8,"cpu alu ALUResultM", false,-1, 31,0);
        tracep->declBus(c+9,"cpu alu WriteDataM", false,-1, 31,0);
        tracep->declBus(c+10,"cpu alu PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+11,"cpu alu ReadDataM", false,-1, 31,0);
        tracep->declBus(c+12,"cpu alu PCPlus4W", false,-1, 31,0);
        tracep->declBus(c+13,"cpu alu ReadDataW", false,-1, 31,0);
        tracep->declBus(c+14,"cpu alu ALUResultW", false,-1, 31,0);
        tracep->declBus(c+15,"cpu alu ResultW", false,-1, 31,0);
        tracep->declBus(c+82,"cpu alu register ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu register DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu register clk", false,-1);
        tracep->declBus(c+1,"cpu alu register WE3", false,-1, 2,0);
        tracep->declBus(c+15,"cpu alu register WD3", false,-1, 31,0);
        tracep->declBus(c+65,"cpu alu register A1_i", false,-1, 4,0);
        tracep->declBus(c+66,"cpu alu register A2_i", false,-1, 4,0);
        tracep->declBus(c+67,"cpu alu register A3_i", false,-1, 4,0);
        tracep->declBus(c+68,"cpu alu register RD1", false,-1, 31,0);
        tracep->declBus(c+69,"cpu alu register RD2", false,-1, 31,0);
        tracep->declBus(c+79,"cpu alu register a0", false,-1, 31,0);
        tracep->declBus(c+70,"cpu alu register A1", false,-1, 7,0);
        tracep->declBus(c+71,"cpu alu register A2", false,-1, 7,0);
        tracep->declBus(c+72,"cpu alu register A3", false,-1, 7,0);
        tracep->declBus(c+83,"cpu alu ALUMux DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"cpu alu ALUMux control", false,-1);
        tracep->declBus(c+40,"cpu alu ALUMux input0", false,-1, 31,0);
        tracep->declBus(c+41,"cpu alu ALUMux input1", false,-1, 31,0);
        tracep->declBus(c+39,"cpu alu ALUMux out", false,-1, 31,0);
        tracep->declBus(c+84,"cpu alu ALU CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu ALU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+16,"cpu alu ALU ALUControl", false,-1, 2,0);
        tracep->declBus(c+38,"cpu alu ALU SrcA", false,-1, 31,0);
        tracep->declBus(c+39,"cpu alu ALU SrcB", false,-1, 31,0);
        tracep->declBus(c+18,"cpu alu ALU ALUResult", false,-1, 31,0);
        tracep->declBit(c+24,"cpu alu ALU Zero", false,-1);
        tracep->declBus(c+82,"cpu alu data ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu data DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu data clk", false,-1);
        tracep->declBus(c+3,"cpu alu data WE", false,-1, 1,0);
        tracep->declBus(c+8,"cpu alu data A", false,-1, 31,0);
        tracep->declBus(c+9,"cpu alu data WD", false,-1, 31,0);
        tracep->declBus(c+11,"cpu alu data RD", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu resultMux DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+85,"cpu alu resultMux CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+4,"cpu alu resultMux control", false,-1, 1,0);
        tracep->declBus(c+14,"cpu alu resultMux input0", false,-1, 31,0);
        tracep->declBus(c+13,"cpu alu resultMux input1", false,-1, 31,0);
        tracep->declBus(c+12,"cpu alu resultMux input2", false,-1, 31,0);
        tracep->declBus(c+15,"cpu alu resultMux out", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu RD1EHazardMux DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+85,"cpu alu RD1EHazardMux CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+25,"cpu alu RD1EHazardMux control", false,-1, 1,0);
        tracep->declBus(c+34,"cpu alu RD1EHazardMux input0", false,-1, 31,0);
        tracep->declBus(c+15,"cpu alu RD1EHazardMux input1", false,-1, 31,0);
        tracep->declBus(c+8,"cpu alu RD1EHazardMux input2", false,-1, 31,0);
        tracep->declBus(c+38,"cpu alu RD1EHazardMux out", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu RD2EHazardMux DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+85,"cpu alu RD2EHazardMux CONTROL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+26,"cpu alu RD2EHazardMux control", false,-1, 1,0);
        tracep->declBus(c+35,"cpu alu RD2EHazardMux input0", false,-1, 31,0);
        tracep->declBus(c+15,"cpu alu RD2EHazardMux input1", false,-1, 31,0);
        tracep->declBus(c+8,"cpu alu RD2EHazardMux input2", false,-1, 31,0);
        tracep->declBus(c+40,"cpu alu RD2EHazardMux out", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu addPCTargetE DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+36,"cpu alu addPCTargetE input0", false,-1, 31,0);
        tracep->declBus(c+41,"cpu alu addPCTargetE input1", false,-1, 31,0);
        tracep->declBus(c+19,"cpu alu addPCTargetE out", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu DREg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu DREg clk", false,-1);
        tracep->declBit(c+74,"cpu alu DREg en", false,-1);
        tracep->declBit(c+76,"cpu alu DREg rst", false,-1);
        tracep->declBus(c+68,"cpu alu DREg RD1D", false,-1, 31,0);
        tracep->declBus(c+69,"cpu alu DREg RD2D", false,-1, 31,0);
        tracep->declBus(c+44,"cpu alu DREg PCD", false,-1, 31,0);
        tracep->declBus(c+65,"cpu alu DREg Rs1D", false,-1, 4,0);
        tracep->declBus(c+66,"cpu alu DREg Rs2D", false,-1, 4,0);
        tracep->declBus(c+67,"cpu alu DREg RdD", false,-1, 4,0);
        tracep->declBus(c+43,"cpu alu DREg ExtImmD", false,-1, 31,0);
        tracep->declBus(c+45,"cpu alu DREg PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+57,"cpu alu DREg opcodeD", false,-1, 6,0);
        tracep->declBus(c+34,"cpu alu DREg RD1E", false,-1, 31,0);
        tracep->declBus(c+35,"cpu alu DREg RD2E", false,-1, 31,0);
        tracep->declBus(c+36,"cpu alu DREg PCE", false,-1, 31,0);
        tracep->declBus(c+20,"cpu alu DREg Rs1E", false,-1, 4,0);
        tracep->declBus(c+21,"cpu alu DREg Rs2E", false,-1, 4,0);
        tracep->declBus(c+22,"cpu alu DREg RdE", false,-1, 4,0);
        tracep->declBus(c+41,"cpu alu DREg ExtImmE", false,-1, 31,0);
        tracep->declBus(c+37,"cpu alu DREg PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+23,"cpu alu DREg opcodeE", false,-1, 6,0);
        tracep->declBus(c+83,"cpu alu EREG DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu EREG clk", false,-1);
        tracep->declBus(c+18,"cpu alu EREG ALUResultE", false,-1, 31,0);
        tracep->declBus(c+22,"cpu alu EREG RdE", false,-1, 4,0);
        tracep->declBus(c+40,"cpu alu EREG WriteDataE", false,-1, 31,0);
        tracep->declBus(c+37,"cpu alu EREG PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+8,"cpu alu EREG ALUResultM", false,-1, 31,0);
        tracep->declBus(c+5,"cpu alu EREG RdM", false,-1, 4,0);
        tracep->declBus(c+9,"cpu alu EREG WriteDataM", false,-1, 31,0);
        tracep->declBus(c+10,"cpu alu EREG PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+83,"cpu alu MREG DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+77,"cpu alu MREG clk", false,-1);
        tracep->declBus(c+8,"cpu alu MREG ALUResultM", false,-1, 31,0);
        tracep->declBus(c+5,"cpu alu MREG RdM", false,-1, 4,0);
        tracep->declBus(c+11,"cpu alu MREG ReadDataM", false,-1, 31,0);
        tracep->declBus(c+10,"cpu alu MREG PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+14,"cpu alu MREG ALUResultW", false,-1, 31,0);
        tracep->declBus(c+6,"cpu alu MREG RdW", false,-1, 4,0);
        tracep->declBus(c+13,"cpu alu MREG ReadDataW", false,-1, 31,0);
        tracep->declBus(c+12,"cpu alu MREG PCPlus4W", false,-1, 31,0);
        tracep->declBus(c+20,"cpu hazard Rs1E_i", false,-1, 4,0);
        tracep->declBus(c+21,"cpu hazard Rs2E_i", false,-1, 4,0);
        tracep->declBus(c+65,"cpu hazard Rs1D_i", false,-1, 4,0);
        tracep->declBus(c+66,"cpu hazard Rs2D_i", false,-1, 4,0);
        tracep->declBus(c+5,"cpu hazard RdM_i", false,-1, 4,0);
        tracep->declBus(c+6,"cpu hazard RdW_i", false,-1, 4,0);
        tracep->declBus(c+22,"cpu hazard RdE_i", false,-1, 4,0);
        tracep->declBus(c+2,"cpu hazard RegWriteM_i", false,-1, 2,0);
        tracep->declBus(c+1,"cpu hazard RegWriteW_i", false,-1, 2,0);
        tracep->declBus(c+23,"cpu hazard opcodeE_i", false,-1, 6,0);
        tracep->declBus(c+73,"cpu hazard PCSrcE_i", false,-1, 1,0);
        tracep->declBus(c+25,"cpu hazard FowardAE_o", false,-1, 1,0);
        tracep->declBus(c+26,"cpu hazard FowardBE_o", false,-1, 1,0);
        tracep->declBit(c+74,"cpu hazard Den_o", false,-1);
        tracep->declBit(c+74,"cpu hazard Fen_o", false,-1);
        tracep->declBit(c+80,"cpu hazard PCen_o", false,-1);
        tracep->declBit(c+75,"cpu hazard PCrst_o", false,-1);
        tracep->declBit(c+75,"cpu hazard Frst_o", false,-1);
        tracep->declBit(c+76,"cpu hazard Drst_o", false,-1);
        tracep->declBus(c+20,"cpu hazard FowardHazard Rs1E", false,-1, 4,0);
        tracep->declBus(c+21,"cpu hazard FowardHazard Rs2E", false,-1, 4,0);
        tracep->declBus(c+5,"cpu hazard FowardHazard RdM", false,-1, 4,0);
        tracep->declBus(c+6,"cpu hazard FowardHazard RdW", false,-1, 4,0);
        tracep->declBus(c+2,"cpu hazard FowardHazard RegWriteM", false,-1, 2,0);
        tracep->declBus(c+1,"cpu hazard FowardHazard RegWriteW", false,-1, 2,0);
        tracep->declBus(c+25,"cpu hazard FowardHazard FowardAE", false,-1, 1,0);
        tracep->declBus(c+26,"cpu hazard FowardHazard FowardBE", false,-1, 1,0);
        tracep->declBus(c+65,"cpu hazard StallHazard Rs1D", false,-1, 4,0);
        tracep->declBus(c+66,"cpu hazard StallHazard Rs2D", false,-1, 4,0);
        tracep->declBus(c+22,"cpu hazard StallHazard RdE", false,-1, 4,0);
        tracep->declBus(c+23,"cpu hazard StallHazard opcodeE", false,-1, 6,0);
        tracep->declBit(c+74,"cpu hazard StallHazard Fen", false,-1);
        tracep->declBit(c+74,"cpu hazard StallHazard Den", false,-1);
        tracep->declBit(c+80,"cpu hazard StallHazard PCen", false,-1);
        tracep->declBus(c+73,"cpu hazard ControlHazard PCSrcE", false,-1, 1,0);
        tracep->declBit(c+75,"cpu hazard ControlHazard PCrst", false,-1);
        tracep->declBit(c+75,"cpu hazard ControlHazard Frst", false,-1);
        tracep->declBit(c+76,"cpu hazard ControlHazard Drst", false,-1);
    }
}

void Vcpu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vcpu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vcpu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->cpu__DOT__RegWriteW),3);
        tracep->fullCData(oldp+2,(vlTOPp->cpu__DOT__RegWriteM),3);
        tracep->fullCData(oldp+3,(vlTOPp->cpu__DOT__MemWriteM),2);
        tracep->fullCData(oldp+4,(vlTOPp->cpu__DOT__ResultSrcW),2);
        tracep->fullCData(oldp+5,(vlTOPp->cpu__DOT__RdM),5);
        tracep->fullCData(oldp+6,(vlTOPp->cpu__DOT__RdW),5);
        tracep->fullCData(oldp+7,(vlTOPp->cpu__DOT__control__DOT__ResultSrcM),2);
        tracep->fullIData(oldp+8,(vlTOPp->cpu__DOT__alu__DOT__ALUResultM),32);
        tracep->fullIData(oldp+9,(vlTOPp->cpu__DOT__alu__DOT__WriteDataM),32);
        tracep->fullIData(oldp+10,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4M),32);
        tracep->fullIData(oldp+11,(vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                   [(0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM)]),32);
        tracep->fullIData(oldp+12,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4W),32);
        tracep->fullIData(oldp+13,(vlTOPp->cpu__DOT__alu__DOT__ReadDataW),32);
        tracep->fullIData(oldp+14,(vlTOPp->cpu__DOT__alu__DOT__ALUResultW),32);
        tracep->fullIData(oldp+15,(vlTOPp->cpu__DOT__alu__DOT__ResultW),32);
        tracep->fullCData(oldp+16,(vlTOPp->cpu__DOT__ALUControlE),3);
        tracep->fullBit(oldp+17,(vlTOPp->cpu__DOT__ALUSrcE));
        tracep->fullIData(oldp+18,(vlTOPp->cpu__DOT__ALUResultE),32);
        tracep->fullIData(oldp+19,((vlTOPp->cpu__DOT__alu__DOT__PCE 
                                    + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)),32);
        tracep->fullCData(oldp+20,(vlTOPp->cpu__DOT__Rs1E),5);
        tracep->fullCData(oldp+21,(vlTOPp->cpu__DOT__Rs2E),5);
        tracep->fullCData(oldp+22,(vlTOPp->cpu__DOT__RdE),5);
        tracep->fullCData(oldp+23,(vlTOPp->cpu__DOT__OpcodeE),7);
        tracep->fullBit(oldp+24,((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                  == vlTOPp->cpu__DOT__alu__DOT__SrcBE)));
        tracep->fullCData(oldp+25,(vlTOPp->cpu__DOT__FowardAE),2);
        tracep->fullCData(oldp+26,(vlTOPp->cpu__DOT__FowardBE),2);
        tracep->fullBit(oldp+27,((1U & ((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                         == vlTOPp->cpu__DOT__alu__DOT__SrcBE) 
                                        ^ (IData)(vlTOPp->cpu__DOT__control__DOT__funct3E)))));
        tracep->fullCData(oldp+28,(vlTOPp->cpu__DOT__control__DOT__RegWriteE),3);
        tracep->fullCData(oldp+29,(vlTOPp->cpu__DOT__control__DOT__ResultSrcE),2);
        tracep->fullCData(oldp+30,(vlTOPp->cpu__DOT__control__DOT__MemWriteE),2);
        tracep->fullBit(oldp+31,(vlTOPp->cpu__DOT__control__DOT__JumpE));
        tracep->fullBit(oldp+32,(vlTOPp->cpu__DOT__control__DOT__BranchE));
        tracep->fullCData(oldp+33,(vlTOPp->cpu__DOT__control__DOT__funct3E),3);
        tracep->fullIData(oldp+34,(vlTOPp->cpu__DOT__alu__DOT__RD1E),32);
        tracep->fullIData(oldp+35,(vlTOPp->cpu__DOT__alu__DOT__RD2E),32);
        tracep->fullIData(oldp+36,(vlTOPp->cpu__DOT__alu__DOT__PCE),32);
        tracep->fullIData(oldp+37,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4E),32);
        tracep->fullIData(oldp+38,(vlTOPp->cpu__DOT__alu__DOT__SrcAE),32);
        tracep->fullIData(oldp+39,(vlTOPp->cpu__DOT__alu__DOT__SrcBE),32);
        tracep->fullIData(oldp+40,(vlTOPp->cpu__DOT__alu__DOT__WriteDataE),32);
        tracep->fullIData(oldp+41,(vlTOPp->cpu__DOT__alu__DOT__ExtImmE),32);
        tracep->fullIData(oldp+42,(vlTOPp->cpu__DOT__InstrD),32);
        tracep->fullIData(oldp+43,(vlTOPp->cpu__DOT__ExtImmD),32);
        tracep->fullIData(oldp+44,(vlTOPp->cpu__DOT__PCD),32);
        tracep->fullIData(oldp+45,(vlTOPp->cpu__DOT__PCPlus4D),32);
        tracep->fullIData(oldp+46,(vlTOPp->cpu__DOT__PCF),32);
        tracep->fullIData(oldp+47,(((IData)(4U) + vlTOPp->cpu__DOT__PCF)),32);
        tracep->fullCData(oldp+48,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                          >> 2U))),3);
        tracep->fullIData(oldp+49,(((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                     [(0xffU & ((IData)(3U) 
                                                + vlTOPp->cpu__DOT__PCF))] 
                                     << 0x18U) | ((
                                                   vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                   [
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + vlTOPp->cpu__DOT__PCF))] 
                                                   << 0x10U) 
                                                  | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                      [
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + vlTOPp->cpu__DOT__PCF))] 
                                                      << 8U) 
                                                     | vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                     [
                                                     (0xffU 
                                                      & vlTOPp->cpu__DOT__PCF)])))),32);
        tracep->fullCData(oldp+50,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                          >> 0xaU))),2);
        tracep->fullCData(oldp+51,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                          >> 8U))),2);
        tracep->fullCData(oldp+52,(vlTOPp->cpu__DOT__control__DOT__ALUControlD),3);
        tracep->fullBit(oldp+53,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                        >> 5U))));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                        >> 7U))));
        tracep->fullBit(oldp+55,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                        >> 6U))));
        tracep->fullCData(oldp+56,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+57,((0x7fU & vlTOPp->cpu__DOT__InstrD)),7);
        tracep->fullCData(oldp+58,((7U & (vlTOPp->cpu__DOT__InstrD 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+59,((1U & (vlTOPp->cpu__DOT__InstrD 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+60,((3U & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))),2);
        tracep->fullSData(oldp+61,(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls),15);
        tracep->fullBit(oldp+62,((1U & (vlTOPp->cpu__DOT__InstrD 
                                        >> 5U))));
        tracep->fullBit(oldp+63,((1U & ((vlTOPp->cpu__DOT__InstrD 
                                         >> 0x1eU) 
                                        & (vlTOPp->cpu__DOT__InstrD 
                                           >> 5U)))));
        tracep->fullIData(oldp+64,((0x1ffffffU & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 7U))),25);
        tracep->fullCData(oldp+65,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+66,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+67,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 7U))),5);
        tracep->fullIData(oldp+68,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                   [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                              >> 0xfU))]),32);
        tracep->fullIData(oldp+69,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                   [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                              >> 0x14U))]),32);
        tracep->fullCData(oldp+70,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0xfU))),8);
        tracep->fullCData(oldp+71,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0x14U))),8);
        tracep->fullCData(oldp+72,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                             >> 7U))),8);
        tracep->fullCData(oldp+73,(vlTOPp->cpu__DOT__PCSrcE),2);
        tracep->fullBit(oldp+74,(vlTOPp->cpu__DOT__Fen));
        tracep->fullBit(oldp+75,(((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+76,(vlTOPp->cpu__DOT__Drst));
        tracep->fullBit(oldp+77,(vlTOPp->clk));
        tracep->fullBit(oldp+78,(vlTOPp->rst));
        tracep->fullIData(oldp+79,(vlTOPp->a0),32);
        tracep->fullBit(oldp+80,((((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
                                   & (((IData)(vlTOPp->cpu__DOT__RdE) 
                                       == (0x1fU & 
                                           (vlTOPp->cpu__DOT__InstrD 
                                            >> 0xfU))) 
                                      | ((IData)(vlTOPp->cpu__DOT__RdE) 
                                         == (0x1fU 
                                             & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U)))))
                                   ? 0U : 1U)));
        tracep->fullIData(oldp+81,(((0U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                     ? ((IData)(4U) 
                                        + vlTOPp->cpu__DOT__PCF)
                                     : ((1U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                         ? (vlTOPp->cpu__DOT__alu__DOT__PCE 
                                            + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)
                                         : ((2U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                             ? vlTOPp->cpu__DOT__ALUResultE
                                             : 0U)))),32);
        tracep->fullIData(oldp+82,(8U),32);
        tracep->fullIData(oldp+83,(0x20U),32);
        tracep->fullIData(oldp+84,(3U),32);
        tracep->fullIData(oldp+85,(2U),32);
        tracep->fullIData(oldp+86,(7U),32);
    }
}
