**LAB 1: Implementation of Basic Gates using Universal Gates**
**Aim:** To realize and verify the truth tables of basic logic gates (NOT, AND, OR) using only NAND gates.

**Overview:**
In digital electronics, a universal gate is a gate which can implement any Boolean function without need to use any other gate type. NAND and NOR are the two universal gates. Using these reduces the variety of Integrated Circuits (ICs) required in a circuit design, simplifying the manufacturing process.

**Theory and Logic:**

NOT Gate: Connect both inputs of a NAND gate together. Y= 
A⋅A
 = 
A
 .

AND Gate: Connect the output of a NAND gate to a NAND-based NOT gate. Y= 
A⋅B
 
 =A⋅B.

OR Gate: Use De Morgan's Theorem. Invert inputs A and B using NAND-NOT gates, then feed them into a third NAND gate. Y= 
A
 ⋅ 
B
 
 =A+B.

**Procedure:**

Open Logisim and create a new circuit.

Place NAND gates and use the Wiring tool to connect them according to the logic above.

Use Pin components for inputs (A,B) and an LED or Output Pin for the result (Y).

Use the Poke Tool to toggle input values and record the output for all combinations (00,01,10,11).

**Conclusion:**
The experiment confirms that NAND gates can successfully emulate the behavior of NOT, AND, and OR gates, proving their universality in digital logic design.
