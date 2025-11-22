#include "search_hash.h"
#include <gtest/gtest.h>

// Linear Search Tests (10 tests)
TEST(LinearSearchTest, FoundAtBeginning) {
    std::vector<int> arr = {5, 3, 8, 1};
    EXPECT_EQ(linearSearch(arr, 5), 0);
}

TEST(LinearSearchTest, FoundInMiddle) {
    std::vector<int> arr = {5, 3, 8, 1};
    EXPECT_EQ(linearSearch(arr, 8), 2);
}

TEST(LinearSearchTest, FoundAtEnd) {
    std::vector<int> arr = {5, 3, 8, 1};
    EXPECT_EQ(linearSearch(arr, 1), 3);
}

TEST(LinearSearchTest, NotFound) {
    std::vector<int> arr = {5, 3, 8, 1};
    EXPECT_EQ(linearSearch(arr, 10), -1);
}

TEST(LinearSearchTest, EmptyArray) {
    std::vector<int> arr = {};
    EXPECT_EQ(linearSearch(arr, 5), -1);
}

TEST(LinearSearchTest, SingleElementFound) {
    std::vector<int> arr = {42};
    EXPECT_EQ(linearSearch(arr, 42), 0);
}

TEST(LinearSearchTest, SingleElementNotFound) {
    std::vector<int> arr = {42};
    EXPECT_EQ(linearSearch(arr, 43), -1);
}

TEST(LinearSearchTest, DuplicateElements) {
    std::vector<int> arr = {5, 3, 5, 1};
    EXPECT_EQ(linearSearch(arr, 5), 0); // finds first
}

TEST(LinearSearchTest, NegativeNumbers) {
    std::vector<int> arr = {-5, 3, -8, 1};
    EXPECT_EQ(linearSearch(arr, -8), 2);
}

TEST(LinearSearchTest, LargeArray) {
    std::vector<int> arr(1000, 0);
    arr[999] = 1;
    EXPECT_EQ(linearSearch(arr, 1), 999);
}

// Binary Search Tests (10 tests)
TEST(BinarySearchTest, FoundAtBeginning) {
    std::vector<int> arr = {1, 3, 5, 8};
    EXPECT_EQ(binarySearch(arr, 1), 0);
}

TEST(BinarySearchTest, FoundInMiddle) {
    std::vector<int> arr = {1, 3, 5, 8};
    EXPECT_EQ(binarySearch(arr, 5), 2);
}

TEST(BinarySearchTest, FoundAtEnd) {
    std::vector<int> arr = {1, 3, 5, 8};
    EXPECT_EQ(binarySearch(arr, 8), 3);
}

TEST(BinarySearchTest, NotFound) {
    std::vector<int> arr = {1, 3, 5, 8};
    EXPECT_EQ(binarySearch(arr, 4), -1);
}

TEST(BinarySearchTest, EmptyArray) {
    std::vector<int> arr = {};
    EXPECT_EQ(binarySearch(arr, 5), -1);
}

TEST(BinarySearchTest, SingleElementFound) {
    std::vector<int> arr = {42};
    EXPECT_EQ(binarySearch(arr, 42), 0);
}

TEST(BinarySearchTest, SingleElementNotFound) {
    std::vector<int> arr = {42};
    EXPECT_EQ(binarySearch(arr, 43), -1);
}

TEST(BinarySearchTest, EvenSizeArray) {
    std::vector<int> arr = {1, 2, 3, 4};
    EXPECT_EQ(binarySearch(arr, 2), 1);
}

TEST(BinarySearchTest, OddSizeArray) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    EXPECT_EQ(binarySearch(arr, 3), 2);
}

TEST(BinarySearchTest, LargeSortedArray) {
    std::vector<int> arr;
    for (int i = 0; i < 1000; ++i) arr.push_back(i);
    EXPECT_EQ(binarySearch(arr, 500), 500);
}

// Hashing Tests (10 tests)
TEST(HashTest, InsertAndSearch) {
    std::unordered_map<int, int> map;
    hashInsert(map, 1, 100);
    EXPECT_EQ(hashSearch(map, 1), 100);
}

TEST(HashTest, SearchNotFound) {
    std::unordered_map<int, int> map;
    hashInsert(map, 1, 100);
    EXPECT_EQ(hashSearch(map, 2), -1);
}

TEST(HashTest, MultipleInserts) {
    std::unordered_map<int, int> map;
    hashInsert(map, 1, 100);
    hashInsert(map, 2, 200);
    hashInsert(map, 3, 300);
    EXPECT_EQ(hashSearch(map, 1), 100);
    EXPECT_EQ(hashSearch(map, 2), 200);
    EXPECT_EQ(hashSearch(map, 3), 300);
}

TEST(HashTest, UpdateValue) {
    std::unordered_map<int, int> map;
    hashInsert(map, 1, 100);
    hashInsert(map, 1, 150);
    EXPECT_EQ(hashSearch(map, 1), 150);
}

TEST(HashTest, NegativeKeys) {
    std::unordered_map<int, int> map;
    hashInsert(map, -1, 50);
    EXPECT_EQ(hashSearch(map, -1), 50);
}

TEST(HashTest, ZeroKey) {
    std::unordered_map<int, int> map;
    hashInsert(map, 0, 0);
    EXPECT_EQ(hashSearch(map, 0), 0);
}

TEST(HashTest, LargeKey) {
    std::unordered_map<int, int> map;
    hashInsert(map, 1000000, 999);
    EXPECT_EQ(hashSearch(map, 1000000), 999);
}

TEST(HashTest, EmptyMap) {
    std::unordered_map<int, int> map;
    EXPECT_EQ(hashSearch(map, 1), -1);
}

TEST(HashTest, SameKeyDifferentInserts) {
    std::unordered_map<int, int> map;
    hashInsert(map, 5, 10);
    hashInsert(map, 5, 20);
    EXPECT_EQ(hashSearch(map, 5), 20);
}

TEST(HashTest, ManyEntries) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < 100; ++i) {
        hashInsert(map, i, i * 2);
    }
    EXPECT_EQ(hashSearch(map, 50), 100);
}