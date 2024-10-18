#pragma once

// Literal constant for mathematical calculations
const double PI = 3.14159;

// Constant defined using const
const int MAX_SIZE = 100;

// Function to return array size, evaluated at compile-time
constexpr int getArraySize() {
    return MAX_SIZE;
}
