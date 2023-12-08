module control_top #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3, //why do we need these parameters?
    parameter   IMM_WIDTH = 2      //^^

)(
     input  logic [DATA_WIDTH-1:0]          PCF_i, //8b ==> edited to 32 bits
     input  logic [DATA_WIDTH-1:0]          PCPlus4F_i, 
     output logic [DATA_WIDTH-1:0]          InstrD,//32b
     output logic [2:0]                     RegWriteD_o, //1b ==> edited to 3 bits
     output logic [1:0]                     MemWriteD_o, //1b ==> edited to 2 bits
     output logic [IMM_WIDTH-1:0]           ResultsrcD_o, //3b ==> edited to 2 bits
     output logic [CONTROL_WIDTH-1:0]       ALUctrlD_o, //3b
     output logic                           ALUsrcD_o, //1 bit
     output logic [DATA_WIDTH-1:0]          ImmOpD_o,//32 bits
     output logic [DATA_WIDTH-1:0]          PCD_o,
     output logic [DATA_WIDTH-1:0]          PCPlus4D_o
     output logic                           JumpD_o,
     output logic                           BranchD_o,

);

    logic [1:0]       ImmSrc;

control_unit ControlUnit(
    .opcode         (InstrD[6:0]),
    .funct3         (InstrD[14:12]),
    .funct7         (InstrD[30]),
    .RegWriteD      (RegWriteD_o),
    .MemWriteD      (MemWriteD_o),
    .ResultsrcD     (ResultsrcD_o),
    .ALUctrlD       (ALUctrlD_o),
    .ALUsrcD        (ALUsrcD_o),
    .ImmSrcD        (ImmSrcD_o),
    .JumpD          (JumpD_o),
    .BranchD        (BranchD_o)
);

instr_mem InstrMem(
    .addr_i         (PCF_i),
    .InstrD        (InstrD)
);

fetch_reg FReg(
    .InstrD(istr_o),
    .PCPlus4F(PCPlus4F_i),
    .PCF(PCF_i),
    .PCPlus4D(PCPlus4D_o),
    .PCD(PCD_o)
);

sign_extend MySignExtend(
    .instr_i        (InstrD),
    .ImmSrc_i       (ImmSrc),
    .ImmOp_o        (ImmOp_o)
);


endmodule 
