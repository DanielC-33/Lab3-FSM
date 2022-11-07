module lfsr (
    input   logic         clk,
    input   logic         rst,
    input   logic         en,
    output  logic  [6:0]  data_out //7-bit version
);

    always_ff @ (posedge clk)
        if (rst)
            data_out <= 7'b0_000_001;
        else if (en)
            data_out <= {data_out[5:0], {data_out[2] ^ data_out[6]}};

endmodule

//This has been modified to be a 7-bit primitive polynomial 
