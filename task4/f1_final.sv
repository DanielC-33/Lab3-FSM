module f1_final (
    input   logic       clk,
    input   logic       rst,
    input   logic       fsm_trigger,
    output  logic [7:0] data_out
);

    logic               cmd_delay;
    logic         [6:0] pseudo_random;
    logic               time_out;
    logic               tick;
    logic               cmd_seq;

    delay #(7) f1_delay (
        .clk        (clk),
        .rst        (rst),
        .trigger    (cmd_delay),
        .n          (pseudo_random), // K in top-level pic
        .time_out   (time_out)
    );

    clktick f1_clktick (
        .clk        (clk),
        .rst        (rst),
        .en         (cmd_seq),
        .N          (124),
        .tick       (tick)
    );

    f1_fsm f1_FSM (
        .clk        (clk),
        .rst        (rst),
        .en         (cmd_seq ? tick : time_out),
        .trigger    (fsm_trigger),
        .cmd_seq    (cmd_seq),
        .cmd_delay  (cmd_delay),
        .data_out   (data_out)
    );

    lfsr f1_lfsr (
        .clk        (clk),
        .rst        (rst),
        .en         (1),
        .data_out   (pseudo_random)
    );

endmodule
