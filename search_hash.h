#ifndef SEARCH_HASH_H
#define SEARCH_HASH_H

#include <vector>
#include <unordered_map>

// Linear search function
// Searches for target in the vector arr and returns the index if found, -1 otherwise
int linearSearch(const std::vector<int>& arr, int target);

// Binary search function
// Assumes the vector arr is sorted in ascending order
// Searches for target and returns the index if found, -1 otherwise
int binarySearch(const std::vector<int>& arr, int target);

// Hashing functions using unordered_map
// Insert key-value pair into the map
void hashInsert(std::unordered_map<int, int>& map, int key, int value);

// Search for key in the map and return the value if found, -1 otherwise
int hashSearch(const std::unordered_map<int, int>& map, int key);

#endif // SEARCH_HASH_H