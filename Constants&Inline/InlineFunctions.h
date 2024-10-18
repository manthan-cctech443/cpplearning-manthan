#pragma once
#include "Constants.h"

// Inline function to calculate the square of a number
inline double square(double x) {
    return x * x;
}

// Inline function to calculate the area of a circle
inline double areaOfCircle(double radius) {
    return PI * square(radius);
}
