#include "search_hash.h"
#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    // Example usage of the search and hash functions

    // Linear Search Example
    std::vector<int> arr = {5, 3, 8, 1, 9};
    int target = 8;
    int index = linearSearch(arr, target);
    std::cout << "Linear search for " << target << " in array: index " << index << std::endl;

    // Binary Search Example (array must be sorted)
    std::vector<int> sortedArr = {1, 3, 5, 7, 9};
    target = 5;
    index = binarySearch(sortedArr, target);
    std::cout << "Binary search for " << target << " in sorted array: index " << index << std::endl;

    // Hashing Example
    std::unordered_map<int, int> hashMap;
    hashInsert(hashMap, 1, 100);
    hashInsert(hashMap, 2, 200);
    int value = hashSearch(hashMap, 1);
    std::cout << "Hash search for key 1: value " << value << std::endl;

    return 0;
}