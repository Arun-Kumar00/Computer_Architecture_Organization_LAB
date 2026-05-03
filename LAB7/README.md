LAB 7: 4-bit Common Bus System
Aim: To design a 4-bit common bus system using registers and multiplexers in Logisim.

Overview:
A common bus system provides a path for transferring data between multiple registers. Using a bus reduces the number of physical wires needed in a computer architecture.

Theory and Logic:
A bus system for 4 registers (4 bits each) requires four 4x1 Multiplexers. Each MUX handles one bit position (e.g., MUX 0 handles Bit 0 of all registers). A 2-bit selection input (S 
1
​	
 ,S 
0
​	
 ) determines which register is currently "active" on the bus.

Procedure:

Create four 4-bit registers using the Register component in Logisim.

Connect the output of Bit 0 of every register to the inputs of MUX 0. Repeat for Bits 1, 2, and 3.

Connect the selection lines of all four MUXs to a single 2-bit input.

Verify that by changing the selection lines, the 4-bit output of the bus matches the content of the selected register.

Conclusion:
The 4-bit common bus system was successfully implemented, demonstrating how a single set of wires can be shared across multiple hardware components through multiplexing.
