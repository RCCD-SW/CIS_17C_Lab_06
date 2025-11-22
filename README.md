# Lab 06: Searching and Hashing

This lab focuses on implementing and testing searching and hashing algorithms in C++.

## Overview

The lab provides implementations for:
- **Linear Search**: Searches through an array sequentially to find a target value.
- **Binary Search**: Searches through a sorted array using the divide-and-conquer approach.
- **Hashing**: Uses `std::unordered_map` for efficient key-value storage and retrieval.

## Files

- `search_hash.h`: Header file with function declarations.
- `search_hash.cpp`: Implementation of the search and hash functions.
- `test_search_hash.cpp`: Unit tests for the functions (30 test cases total: 10 for linear search, 10 for binary search, 10 for hashing).
- `CMakeLists.txt`: Build configuration for CMake.

## Building the Project

1. Ensure you have CMake and Google Test installed.
2. Create a build directory: `mkdir build && cd build`
3. Run CMake: `cmake ..`
4. Build: `make`

## Running the Tests

After building, run the test executable: `./search_hash_test`

This will execute all 30 test cases and report the results.

## Functions

### Linear Search
- `int linearSearch(const std::vector<int>& arr, int target)`
- Returns the index of the target if found, -1 otherwise.

### Binary Search
- `int binarySearch(const std::vector<int>& arr, int target)`
- Assumes the array is sorted in ascending order.
- Returns the index of the target if found, -1 otherwise.

### Hashing
- `void hashInsert(std::unordered_map<int, int>& map, int key, int value)`
- Inserts a key-value pair into the map.
- `int hashSearch(const std::unordered_map<int, int>& map, int key)`
- Returns the value associated with the key if found, -1 otherwise.

## Test Cases

The test suite includes 30 comprehensive test cases covering various scenarios:
- Edge cases (empty arrays, single elements)
- Found/not found cases
- Large datasets
- Negative numbers
- Duplicates (for linear search)

Students are encouraged to review the test cases to understand different use cases and to modify or add their own tests.