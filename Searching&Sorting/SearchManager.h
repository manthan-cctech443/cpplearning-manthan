#pragma once
#include <vector>

class SearchManager {
public:
    int linearSearch(const std::vector<int>& arr, int target);
    int binarySearch(const std::vector<int>& arr, int target);
};
