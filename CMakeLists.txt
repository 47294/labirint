 
cmake_minimum_required(VERSION 3.1)

project(Task2)
add_library(Task2 SHARED src/Logarithm.cpp src/GCD.cpp src/Taylor.cpp)
add_executable(Task2.test tests/Logarithm.Tests.cpp tests/GCD.Tests.cpp tests/Taylor.Tests.cpp)
target_link_libraries(Task2.test Task2 gtest gtest_main pthread)
include(GoogleTest)
gtest_discover_tests(Task2.test)
