cmake_minimum_required(VERSION 3.10)
project(Lab6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(search_hash_test google_test/test_search_hash.cpp search_hash.cpp)
target_link_libraries(search_hash_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(search_hash main.cpp search_hash.cpp)