**LAB 2: Design and Verification of Adders on Logisim**
**Aim:** To design and verify the functional behavior of a Half Adder, Full Adder, and a 4-bit Parallel Adder.

**Overview:**
Adders are fundamental circuits in the ALU (Arithmetic Logic Unit). A Half Adder handles two bits, while a Full Adder accounts for a "Carry-in" from a previous stage. A 4-bit adder cascades these to perform multi-bit addition.

**Theory and Logic:**

Half Adder: Two inputs (A,B). Outputs: Sum=A⊕B, Carry=A⋅B.

Full Adder: Three inputs (A,B,C 
in
​	
 ). Outputs: Sum=A⊕B⊕C 
in
​	
 , Carry=(A⋅B)+(C 
in
​	
 ⋅(A⊕B)).

4-bit Adder: Formed by connecting four Full Adders in series. The C 
out
​	
  of the first FA is connected to the C 
in
​	
  of the second FA, and so on.


**Procedure:**

Construct the Half Adder and Full Adder circuits in Logisim.

Save the Full Adder as a "Sub-circuit" to keep the workspace clean.

Build the 4-bit Adder by placing four instances of the Full Adder sub-circuit.

Input two 4-bit binary numbers and verify if the 4-bit output plus the final carry matches the mathematical sum.

**Conclusion:**
The circuits were verified against their respective truth tables. The 4-bit adder demonstrated how carry propagation allows for the addition of larger binary strings.
