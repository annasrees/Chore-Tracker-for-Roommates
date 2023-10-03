cmake_minimum_required(VERSION 3.26)
project(testing_activity)

set(CMAKE_CXX_STANDARD 17)

add_executable(testing_activity main.cpp
        test_cases.cpp
        testCases.cpp)
