#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_final.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vf1_final* top = new Vf1_final;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1_final.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T4:F1 final");
    vbdSetMode(1);        // Flag mode set to one-shot

    top->clk = 1;
    top->rst = 1;
    top->fsm_trigger = 0;

    int tick = 0;
    int prev_data = 0;
    for(int simcyc = 0; ; simcyc++){
        for(tick=0; tick<2; tick++){
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval ();
        }

        top->rst = simcyc<2;

        vbdBar(top->data_out & 0xFF);
        top->fsm_trigger = vbdFlag();

        if(int(top->data_out) == 0 && prev_data == 255){
        //if(int(top->data_out) == 0 && prev_data = 511){
            vbdInitWatch();
            while (!vbdFlag());
            int reaction_time = vbdElapsed();
            vbdHex(1, reaction_time & 0xF);
            vbdHex(2, (reaction_time >> 4) & 0xF);
            vbdHex(3, (reaction_time >> 8) & 0xF);
            vbdHex(4, (reaction_time >> 16) & 0xF); //Why shifted 16?
        }
        prev_data = int(top->data_out); //is the int() necessary?

        if (vbdGetkey()=='q')  exit(0);
    }
    vbdClose();     // ++++
    tfp->close(); 
    exit(0);
}