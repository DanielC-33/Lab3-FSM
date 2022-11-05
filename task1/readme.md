
# Task 1 - 4 bit LFSR and Pseudo Random Binary Sequence (PRBS)

LFSR = Linear Feedback Shift Register

Use L4S14 and S15.

Top level design:

<p align="center"> <img src="../images/lfsr.jpg" /> </p>

Encountered a problem: ./doit.sh doesn't finish, but the last command doesn't do what it's meant to do on the terminal.

It ends after saying: make: Leaving directory '/home/danielc/Documents/IAC_Lab_repos/Lab3-FSM/task1/obj_dir'

Solution: Place vbdSetMode(1) after if(vbdOpen()!=1)