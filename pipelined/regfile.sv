/*
    Function: Writes values on the positive edge (controls the load instructions) then assign values from the register array to be read/output
*/

module regfile #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input   logic                   clk,
    input   logic                   WE3,
    input   logic [DATA_WIDTH-1:0]  WD3,
    input   logic [4:0]             A1_i,
    input   logic [4:0]             A2_i,
    input   logic [4:0]             A3_i,
    output  logic [DATA_WIDTH-1:0]  RD1,
    output  logic [DATA_WIDTH-1:0]  RD2,
    output  logic [DATA_WIDTH-1:0]  a0  //(debug output)
);

logic [4:0] A1 = A1_i; 
logic [4:0] A2 = A2_i;
logic [4:0] A3 = A3_i;

logic [DATA_WIDTH-1:0] reg_array[2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if ((WD3)) begin
        if (A3==5'b00000)
            reg_array[A3] <= 32'b0;
    else
        reg_array[A3] <= WD3; // write
    end
end

always_ff @(negedge clk) begin 
    RD1<=reg_array[A1];
    RD2<=reg_array[A2];
    a0<= reg_array[10];
    if (A1 ==5'b00000)
        RD1<=5'b0;
    if(A2 == 5'b00000)
        RD2<= 5'b0;
end


endmodule

