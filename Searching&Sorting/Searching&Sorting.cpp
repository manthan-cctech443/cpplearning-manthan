#include "SortManager.h"
#include "SearchManager.h"
#include <vector>
#include <iostream>
#include <string>

int main() {
    SortManager sortManager;
    SearchManager searchManager;

    // Example array for testing
    std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };

    // Sorting
    std::cout << "Original array: ";
    sortManager.displayArray(arr);

    std::cout << "Bubble Sort: ";
    std::vector<int> bubbleArr = arr;
    sortManager.bubbleSort(bubbleArr);
    sortManager.displayArray(bubbleArr);

    std::cout << "Quick Sort: ";
    std::vector<int> quickArr = arr;
    sortManager.quickSort(quickArr, 0, quickArr.size() - 1);
    sortManager.displayArray(quickArr);

    std::cout << "Merge Sort: ";
    std::vector<int> mergeArr = arr;
    sortManager.mergeSort(mergeArr, 0, mergeArr.size() - 1);
    sortManager.displayArray(mergeArr);

    // Searching
    int target = 5;
    std::cout << "Linear Search for " << target << ": ";
    int linearResult = searchManager.linearSearch(bubbleArr, target);
    std::cout << (linearResult != -1 ? "Found at index " + std::to_string(linearResult) : "Not Found") << std::endl;

    std::cout << "Binary Search for " << target << ": ";
    int binaryResult = searchManager.binarySearch(quickArr, target);
    std::cout << (binaryResult != -1 ? "Found at index " + std::to_string(binaryResult) : "Not Found") << std::endl;

    return 0;
}
