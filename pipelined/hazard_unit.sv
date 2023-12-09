module hazard_unit (
    
    logic input [4:0]   Rs1E_i,         
    logic input [4:0]   Rs2E_i,
    logic input [4:0]   Rs1D_i,
    logic input [4:0]   Rs2D_i,
    logic input [4:0]   RdM_i,,
    logic input [4:0]   RdW_i,
    logic input [4:0]   RdE_i,
    logic input [2:0]   RegWriteW_i,
    logic input [6:0]   opcodeE_i,
    logic input [1:0]   PCSrcE_i
    logic output[1:0]   FowardAE_o,
    logic output[1:0]   FowardBE_o,
    logic output        Den_o,
    logic output        Fen_o,
    logic output        PCen_o,
    logic output        PCrst_o,
    logic output        Frst_o,
    logic output        Drst_o
    
);

hazard_foward FowardHazard(
    .RdM        (RdM_i),
    .Rs1E       (Rs1E_i),
    .Rs2E       (Rs2E_i),
    .FowardAE   (FowardAE_o),
    .FowardBE   (FowardBE_o)
    
);

hazard_stall StallHazard(
    .RdE        (RdE_i),
    .Rs1D       (Rs1D_i),
    .Rs2D       (Rs2D_i),
    .opcodeE    (opcodeE_i),
    .Fen        (Fen_o),
    .Den        (Den_o),
    .PCen       (PCen_o)
);

hazard_control ControlHazard(
    .PCSrcE     (PCSrcE_i),
    .PCrst      (PCrst_o),
    .Frst       (Frst_o),
    .Drst       (Drst_o)
);

endmodule