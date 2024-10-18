#include <iostream>
#include "Constants.h"
#include "InlineFunctions.h"

int main() {
    double radius = 5.0;

    std::cout << "Area of circle with radius " << radius << ": "
        << areaOfCircle(radius) << std::endl;

    // Attempting to modify a constant will cause a compile-time error
    // PI = 3.14; // Uncommenting this line will lead to an error

    std::cout << "Value of PI: " << PI << std::endl;
    std::cout << "Max size constant: " << getArraySize() << std::endl;

    return 0;
}
