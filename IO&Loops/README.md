# Project 1: Input, Output & Loops

## Problem Definition
This project explores how C++ handles user input, output to the console, and various loop constructs. It tests constraints like invalid input, infinite loops, and performance issues with deeply nested loops.

## Solution
We implemented two classes: `InputOutputManager` to handle user input and output, and `LoopTester` to test different types of loops. The program handles edge cases like invalid input, infinite loops, and performance constraints in nested loops.

## Learnings
- **Input Failures:** If the user provides invalid input (e.g., entering a string when an integer is expected), C++'s `cin.fail()` is triggered, and the input stream needs to be cleared before recovery.
- **Infinite Loops:** Without proper exit conditions, loops can run infinitely, leading to program crashes or unresponsiveness.
- **Performance Constraints:** Deeply nested loops with large ranges can significantly impact performance, especially when running in debug mode.

