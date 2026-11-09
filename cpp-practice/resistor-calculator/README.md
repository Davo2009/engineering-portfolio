\# Resistor Calculator (C++)



My first C++ program, written in Phase 2 of my chip design and embedded systems roadmap.



\## What it does

Calculates the resistor an LED needs from the supply voltage, the LED's voltage drop, and the current I want, using R = (V\_supply - V\_LED) / I. It also checks whether the current is safe (0.03 A or less).



\## Concepts practised

\- Variables and data types (double, bool)

\- Arithmetic and comparison operators

\- Operator precedence (brackets matter)



\## Example

9 V supply, 2 V LED drop and 0.02 A gives 350 ohms.



\## Mistakes I made

\- Divided before subtracting because I left out the brackets.

\- Typed 0.002 instead of 0.02 for the current.

\- Used `int` for the result, which would throw away decimals.



\## How to run

Compile with `g++ resistor\_calc.cpp -o resistor\_calc` and run `./resistor\_calc`.



