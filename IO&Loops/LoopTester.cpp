#include "LoopTester.h"
#include <iostream>

void LoopTester::testForLoop() {
    int sum = 0;
    for (int i = 0; i <= 10; ++i) {  // Test edge case for off-by-one error
        sum += i;
    }
    std::cout << "Sum in for loop: " << sum << std::endl;
}

void LoopTester::testWhileLoop() {
    int i = 0;
    while (i < 10) {  // Test what happens if you forget to increment
        std::cout << "i = " << i << std::endl;
        ++i;
    }
}

void LoopTester::testNestedLoop() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << "(" << i << ", " << j << ")" << std::endl;
        }
    }
}
