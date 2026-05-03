# Lab 3: Design and Verification of a 4-Bit Ripple Carry Adder

## Overview
This report outlines the Logisim circuit file (.circ) that demonstrates the construction and operation of a 4-bit Ripple Carry Adder. The circuit is built sequentially using fundamental logic gates to perform binary addition.

### Files Included
1. lab-3_ripple_carry_adder.circ - Contains the complete implementation of the cascaded 4-bit Ripple Carry Adder.

---

## Theory and Logic

### 4-Bit Ripple Carry Adder
A 4-bit Ripple Carry Adder is a digital circuit that calculates the mathematical sum of two 4-bit binary numbers (for example, A3 A2 A1 A0 and B3 B2 B1 B0). It achieves this by chaining together four individual 1-bit Full Adders.

* Architecture: The circuit cascades the adders by taking the Carry Out (Cout) pin of the least significant bit's Full Adder and wiring it directly into the Carry In (Cin) pin of the next Full Adder in the sequence. This chain continues up to the most significant bit.
* Full Adder Logic: Each individual stage within the ripple carry adder performs the following logic:
    Sum = (A XOR B) XOR Cin
    Cout = (A AND B) OR (Cin AND (A XOR B))
* Propagation Delay: The defining characteristic of this specific design is the propagation delay. The higher-order bits are physically unable to compute their final sum and carry until the carry signal from the lower-order bits has calculated and "rippled" all the way through the circuit.

---

## How to Use and Simulate

1. Prerequisites: Ensure Logisim is installed on your computer.
2. Opening the File: Launch Logisim, go to File > Open, and select the lab-3_ripple_carry_adder.circ file.
3. Interaction: Select the Poke Tool (the hand icon located on the top toolbar).
4. Testing: Click on the input pins (the square boxes for A and B) to toggle their states between 0 and 1. 
5. Observation: The bright green lines indicate active (1) signals. Observe the output pins to verify the addition logic. To clearly see the ripple effect, use the Poke tool to add the binary values 1111 and 0001, and step through the simulation manually to watch the carry propagate.
