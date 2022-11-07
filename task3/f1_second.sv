module f1_second(
    input logic clk,
    input logic rst,
    output logic [7:0] d_out
);

    logic fsm_en;
    
    clktick a_clock (
        .clk (clk),
        .rst (rst),
        .en (1),
        .N (20),
        .tick (fsm_en)
    );


    f1_fsm fsm (
        .clk (clk),
        .rst (rst),
        .en (fsm_en),
        .data_out (d_out)
    );

endmodule
