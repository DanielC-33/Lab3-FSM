#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_second.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
  int tick = 0;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  Vf1_second * top = new Vf1_second;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1_second.vcd");
 
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T3:f1_second");
  
  top->clk = 1;
  top->rst = 1;
  
  for (int simcyc=0; ; simcyc++) {
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    vbdHex(2, top->d_out >> 4 & 0xF);
    vbdHex(1, top->d_out & 0xF);
    vbdBar(top->d_out & 0xFF);

    top->rst = (simcyc < 2);
    vbdCycle(simcyc);

    if (vbdGetkey()=='q')  exit(0);
  }
  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
