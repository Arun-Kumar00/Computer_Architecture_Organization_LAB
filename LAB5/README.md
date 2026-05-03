**LAB 5: GNU Debugger (GDB) and Program Flow**

**Aim:** To learn the basics of GDB for tracing program execution and analyzing control flow.

**Overview:**
The GNU Debugger (GDB) allows a developer to see what is going on "inside" a program while it executes or what it was doing at the moment it crashed.

**Theory and Logic:**
Debugging is essential in COA to understand how high-level code is managed by the OS and CPU.

Breakpoints: Pauses execution at a specific line.

Stepping: Moving line-by-line (next or step).

Backtrace: Shows the function call stack.


**Procedure:**

Write a simple C program with loops and function calls.

Compile using gcc -g filename.c to include debugging symbols.

Load the program: gdb ./a.out.

Use break main, run, next, and print variable_name to observe the flow and data.

**Conclusion:**
Learned how to pause execution and inspect the program state, which is vital for diagnosing logic errors at the machine level.
