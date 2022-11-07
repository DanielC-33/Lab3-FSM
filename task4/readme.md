
# Task 4: Full implementation of F1 with reaction time

Top-level design:

<img src = "../images/F1_full.jpg" />

Description of end-result design: 

- 1) After a trigger (measured by vbdFlag()), the lights turn on one by one each second.
- 2) When they are all on, a random amount of time passes until they turn off
- 3) Person presses the rotary switch as fast as possible and reaction time is measured.

Steps:  
- Modify f1_fsm.sv  
> - Add trigger for vbdFlag(): Probably modify ff to have conditions with trigger, en, and state. On tb, would be oneshot.
> - Add cmd_seq: High while sequencing from 8'b1 to 8'b11111111 (not including the last one, and 8'b0 doesn't matter I think). 
>> - What about cmd_seq = 0 for state S0 and mux outputs time_out into en? Doesn't matter as logic in fsm.sv can ignore en for S0.
> - Add cmd_delay: Triggers start of delay.sv component. Only high when all lights on. (does it matter for how many cycles?)

- Top-level design:
> - Need clktick.sv, lfsr.sv, delay.sv (given), f1_fsm.sv, top-level f1_final.sv.
> - cmd_seq goes into clktick en input and select for mux.
> - cmd_delay into delay.sv trigger input.
> - clktick N input is 62 for my pc.
> - In testbench, use vbdInitWatch() and vbdElapsed() to measure reaction time once S8 -> S0, and display on TFT - means not display data on the TFT
>> - Probably using if statement and while loop.