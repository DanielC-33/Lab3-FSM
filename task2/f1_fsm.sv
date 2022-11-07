module f1_fsm(
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] data_out
);

    typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8} light_states;
    light_states current_state, next_state;

    always_ff @ (posedge clk)
        if (rst) current_state <= S0;
        else if (en) current_state <= next_state;

    always_comb
            case (current_state)
                S0:     begin 
                        next_state = S1;
                        data_out = 8'b0;
                end
                S1:     begin
                        next_state = S2;
                        data_out = 8'b1;
                end
                S2:     begin
                        next_state = S3;
                        data_out = 8'b11;
                end
                S3:     begin
                        next_state = S4;
                        data_out = 8'b111;
                end
                S4:     begin
                        next_state = S5;
                        data_out = 8'b1_111;
                end
                S5:     begin
                        next_state = S6;
                        data_out = 8'b11_111;
                end
                S6:     begin
                        next_state = S7;
                        data_out = 8'b111_111;
                end
                S7:     begin
                        next_state = S8;
                        data_out = 8'b1_111_111;
                end
                S8:     begin
                        next_state = S0;
                        data_out = 8'b11_111_111;
                end
                default: begin
                        next_state = S0;
                        data_out = 8'b0;
                end
            endcase

    /* Which is better?

    always_comb
            case (current_state)
                S0:     next_state = S1;
                S1:     next_state = S2;
                S2:     next_state = S3;
                S3:     next_state = S4;
                S4:     next_state = S5;
                S5:     next_state = S6;
                S6:     next_state = S7;
                S7:     next_state = S8;
                S8:     next_state = S0;
                default: next_state = S0;
            endcase
    
    always_comb
            case (current_state)
                S0:     data_out = 8'b0;
                S1:     data_out = 8'b1;
                S2:     data_out = 8'b11;
                S3:     data_out = 8'b111;
                S4:     data_out = 8'b1_111;
                S5:     data_out = 8'b11_111;
                S6:     data_out = 8'b111_111;
                S7:     data_out = 8'b1_111_111;
                S8:     data_out = 8'b11_111_111;
                default: data_out = 8'b0;
            endcase
    */
endmodule
