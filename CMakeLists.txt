 
cmake_minimum_required(VERSION 3.1)

project(dev)
add_library(dev SHARED src/labi.cpp)
add_executable(dev.test tests/Labirint.Test.cpp)
target_link_libraries(dev.test dev gtest gtest_main pthread)
include(GoogleTest)
gtest_discover_tests(dev.test)
