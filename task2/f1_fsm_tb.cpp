#include "Vf1_fsm.h" 
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    Vf1_fsm* top = new Vf1_fsm;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1_fsm.vcd");

    if (vbdOpen()!=1) return -1;
    vbdHeader("L3T2: f1_fsm");
    vbdSetMode(1); //One-shot mode

    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    int tick = 0;
    for(int simcyc = 0; ; simcyc++){
        for(tick = 0; tick < 2; tick++){
            tfp->dump (2*simcyc*tick);
            top->clk = !top->clk;
            top->eval();
        }
        top->rst = simcyc < 2;
        top->en = vbdFlag();

        vbdHex(2, top->data_out >> 4 & 0xF); //for the 7-bit version
        vbdHex(1, top->data_out & 0xF);
        vbdBar(top->data_out & 0xFF);

        vbdCycle(simcyc+1);

        if (vbdGetkey()=='q') exit(0);
    }
    vbdClose();     // ++++
    tfp->close(); 
    printf("Exiting\n");
    exit(0);
}