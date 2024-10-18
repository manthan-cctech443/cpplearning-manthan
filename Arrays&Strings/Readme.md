# Project 2: Arrays and Strings

## Problem Definition
This project explores how arrays and strings are used in C++. It tests various constraints such as memory management, out-of-bounds access, null termination, and performance impacts of large datasets.

## Solution
We implemented two classes: `ArrayManager` to handle array-related operations and `StringManager` to manage string-related operations. The program demonstrates common pitfalls and unexpected behaviors in array and string manipulation.

## Learnings
- **Array Constraints:** Accessing out-of-bounds indices can lead to undefined behavior and potential crashes. Dynamic arrays can introduce memory leaks if not properly deallocated.
- **String Management:** Incorrectly terminated C-strings can result in undefined behavior when used. `std::string` offers better safety but can still run into performance issues with excessively long strings.
