**LAB 3: Design of 8x1 MUX and 8x3 Encoder**
**Aim:** To implement and verify an 8-to-1 Multiplexer and an 8-to-3 Encoder using basic logic gates.

**Overview:**
A Multiplexer (MUX) acts as a digital switch that selects one of many inputs to a single output. An Encoder performs the reverse of a Decoder, taking an active input and converting it into a binary code.

**Theory and Logic:**

8x1 MUX: Requires 8 Data inputs (D 
0
​	
 −D 
7
​	
 ), 3 Selection lines (S 
0
​	
 ,S 
1
​	
 ,S 
2
​	
 ), and 1 Output (Y). The logic uses AND gates to combine data with selection bits, and an OR gate to combine those results.

8x3 Encoder: 8 inputs (I 
0
​	
 −I 
7
​	
 ) and 3 outputs (X,Y,Z). It assumes only one input is high at a time.

X=I 
4
​	
 +I 
5
​	
 +I 
6
​	
 +I 
7
​	
 

Y=I 
2
​	
 +I 
3
​	
 +I 
6
​	
 +I 
7
​	
 

Z=I 
1
​	
 +I 
3
​	
 +I 
5
​	
 +I 
7
​	
 

**Procedure:**

Implement the 8x1 MUX using 8 AND gates (4-input type), 3 NOT gates for selection line complements, and one 8-input OR gate.

Implement the Encoder using three 4-input OR gates according to the equations above.

Verify the MUX by changing selection lines and ensuring only the chosen input passes to the output.

**Conclusion:**
The MUX correctly functioned as a data selector, and the Encoder successfully converted positional input into its 3-bit binary equivalent.
