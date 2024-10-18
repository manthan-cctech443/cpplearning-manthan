#include "StringManager.h"
#include <iostream>

void StringManager::testCString() {
    char cString[5] = { 'H', 'e', 'l', 'l', 'o' }; // Missing null terminator
    std::cout << "C-string: " << cString << std::endl;  // Undefined behavior
}

void StringManager::testStdString() {
    std::string str = "Hello, World!";
    std::cout << "Length of string: " << str.length() << std::endl;

    // Long string test
    std::string longStr(1e6, 'a'); // Create a long string
    std::cout << "Created a string of length: " << longStr.length() << std::endl;
}
