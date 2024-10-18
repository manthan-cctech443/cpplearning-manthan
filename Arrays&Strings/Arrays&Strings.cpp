#include "ArrayManager.h"
#include "StringManager.h"
#include <iostream>

int main() {
    ArrayManager arrayManager;
    StringManager stringManager;

    std::cout << "Testing Array Constraints:" << std::endl;
    arrayManager.testArrayBounds();
    arrayManager.createDynamicArray(10); // Potential memory leak here
    arrayManager.testMultidimensionalArray();

    std::cout << "\nTesting String Constraints:" << std::endl;
    stringManager.testCString();
    stringManager.testStdString();

    return 0;
}
