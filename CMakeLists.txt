cmake_minimum_required(VERSION 3.8)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

set(BUILD_1 01_two_sum)
set(SOURCE_FILES_1 01_two_sum 01_two_sum.cpp)
add_executable(${BUILD_1} ${SOURCE_FILES_1} 01_two_sum.cpp)

set(BUILD_2 02_add_two_numbers)
set(SOURCE_FILES_2 02_add_two_numbers 02_add_two_numbers.cpp)
add_executable(${BUILD_2} ${SOURCE_FILES_2} 02_add_two_numbers.cpp 02_add_two_numbers.cpp)