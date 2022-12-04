cmake_minimum_required(VERSION 3.20)
project(1-prac)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest-main)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run regular.h tests.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)