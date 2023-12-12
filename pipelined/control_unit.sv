/*
	Function: 5 stage pipelined Control Unit
*/

module control_unit #(
    parameters OP_WIDTH = 7
) (
    input   logic                   clk,
    input   logic                   reset,

    input   logic [OP_WIDTH-1:0]    op,
    input   logic [2:0]             funct3,
    input   logic                   funct7b5,

    output  logic [1:0]             ResultSrcD,
    output  logic                   MemWriteD,
    output  logic                   ALUSrcD,
    output  logic                   RegWriteD,
    output  logic                   RegWriteD, 
    output  logic [2:0]             ImmSrcD,
    output  logic [2:0]             ALUControlD,
    output  logic                   JumpD,
    output  logic                   BranchD,
);

logic [1:0] ALUOpD;
logic [1:0] ResultSrcD, ResultSrcE, ResultSrcM;
logic [2:0] ALUControlD;


// main decoder 
maindecoder maindec(
    .op (op),
    .funct3(funct3),
    .ResultSrc (ResultSrcD),
    .MemWrite (MemWriteD),
    .Branch (BranchD),
    .ALUSrc (ALUSrcD),
    .RegWrite (RegWriteD),
    .Jump (JumpD),
    .ALUOp (ALUOpD), 
    .ImmSrc (ImmSrcD)
);

// alu decoder
aludecoder aludec(
    .funct3 (funct3),
    .funct7b5 (funct7b5),
    .opb5 (op[5]),
    .ALUOp (ALUOpD),
    .ALUControl (ALUControlD)
);


endmodule
