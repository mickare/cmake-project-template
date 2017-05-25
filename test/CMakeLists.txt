cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(test_runner)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp src/prjlib_test.cpp)

add_subdirectory(lib/googletest)
enable_testing()

add_executable(test_runner ${SOURCE_FILES})
target_link_libraries(test_runner prjlib gtest gtest_main pthread)

add_test( test_runner test_runner )
#install(TARGETS test_runner DESTINATION bin)

