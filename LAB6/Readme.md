**LAB 6: Addressing Modes Analysis using GDB**

**Aim:** To study how different addressing modes are implemented at the assembly level using a C program.

**Overview:**
Addressing modes specify how the operand of an instruction is determined. Common modes include Immediate, Register, Direct, and Indirect (Pointers).

**Theory and Logic:**

Immediate: Data is part of the instruction (e.g., mov $0x5, %eax).

Register: Data is in a register (e.g., add %ebx, %eax).

Indirect: Data is at a memory address held in a register (e.g., mov (%eax), %ebx).

**Procedure:**

Write a C program that uses a constant, a variable, and a pointer.

In GDB, use the command disassemble main to view the assembly instructions.

Identify instructions like movl (move long) and look at the syntax to determine the addressing mode.

Use info registers to see how the values in CPU registers change per instruction.

**Conclusion:**
By analyzing the assembly output, we successfully identified how the compiler translates high-level variables into specific hardware addressing modes.
