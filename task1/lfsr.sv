module lfsr (
    input   logic         clk,
    input   logic         rst,
    input   logic         en,
    output  logic  [3:0]  data_out
);

    always_ff @ (posedge clk)
        if (rst)
            data_out <= 4'b0_001;
        else if (en)
            data_out <= {data_out[2:0], {data_out[2] ^ data_out[3]}};

endmodule
