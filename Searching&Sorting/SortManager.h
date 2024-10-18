#pragma once
#include <vector>

class SortManager {
public:
    void bubbleSort(std::vector<int>& arr);
    void quickSort(std::vector<int>& arr, int low, int high);
    void mergeSort(std::vector<int>& arr, int left, int right);
    void displayArray(const std::vector<int>& arr);
};
