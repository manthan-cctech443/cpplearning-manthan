#include "ArrayManager.h"
#include <iostream>

void ArrayManager::testArrayBounds() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    for (int i = -1; i <= 5; ++i) {  // Intentionally accessing out of bounds
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

void ArrayManager::createDynamicArray(int size) {
    int* dynamicArray = new int[size];
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i;
    }
    // Forget to delete dynamicArray to demonstrate memory leak
    // delete[] dynamicArray;  // Uncomment to fix memory leak
}

void ArrayManager::testMultidimensionalArray() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << std::endl;
        }
    }
}
