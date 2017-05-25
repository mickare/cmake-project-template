cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(prjmain)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp)

add_subdirectory(prjlib)
add_executable(prjmain ${SOURCE_FILES})

target_include_directories(prjmain PUBLIC BEFORE
        $<BUILD_INTERFACE:${PRJ_DIR_INCLUDE}>
        $<INSTALL_INTERFACE:include>  # <prefix>/include
        )

target_link_libraries(prjmain prjlib)


install(TARGETS prjmain DESTINATION bin)

