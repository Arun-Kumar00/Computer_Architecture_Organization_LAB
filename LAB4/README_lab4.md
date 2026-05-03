**LAB 4: 4-bit Ripple Carry Adder and Propagation Delay**

**Aim:** To design a 4-bit Ripple Carry Adder (RCA) and analyze the time delay caused by carry propagation.

**Overview:**
In an RCA, the carry "ripples" from the Least Significant Bit (LSB) to the Most Significant Bit (MSB). This creates a propagation delay, which is the time required for the output to become stable after inputs change.


**Theory and Logic:**
The total delay (T) of an N-bit adder is calculated as T=N×t 
pd
​	
 , where t 
pd
​	
  is the delay of a single Full Adder. This delay limits the maximum frequency at which the CPU can operate.

**Procedure:**

Construct a 4-bit RCA using discrete gates (AND, OR, XOR) rather than high-level components.

Enable "Simulate -> Tick Frequency" and "Gate Delay" settings in Logisim.

Set inputs to 1111 and 0001. Observe the sequential flip of carry bits from right to left.

Note the time it takes for the final C 
out
​	
  to stabilize.

**Conclusion:**
The experiment highlights the primary disadvantage of RCA: speed. The linear increase in delay with bit-width justifies the need for Look-Ahead Carry Adders in high-speed processors.
