cmake_minimum_required(VERSION 3.10)
project(Lab6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(trees_test google_test/trees_test.cpp)
target_link_libraries(trees_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(trees trees.cpp)
