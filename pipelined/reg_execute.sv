module reg_execute #(
    parameter DATA_WIDTH =32
)(  
    input logic                    clk,     
    input logic [2:0]              RegWriteE,
    input logic [1:0]              ResultSrcE,
    input logic [1:0]              MemWriteE,
    input logic [1:0]              ALUResultE,
    input logic [4:0]              RdE,
    input logic [DATA_WIDTH-1:0]   WriteDataE,
    input logic [DATA_WIDTH-1:0]   PCPlus4E,
    
    output logic [2:0]              RegWriteM,
    output logic [1:0]              ResultSrcM,
    output logic [1:0]              MemWriteM,
    output logic [1:0]              ALUResultM,
    output logic [4:0]              RdM,
    output logic [DATA_WIDTH-1:0]   WriteDataM,
    output logic [DATA_WIDTH-1:0]   PCPlus4M
);

    always_ff @(posedge clk) begin
        RegWriteM   <=      RegWriteE;
        ResultSrcM  <=      ResultSrE;
        MemWriteM   <=      MemWriteE;
        ALUResultM  <=      ALUResultE;
        RdM         <=      RdE;
        WriteDataM  <=      WriteDataE;
        PCPlus4M     <=      PCPlus4E;   
          
    end
      

endmodule
