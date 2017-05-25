cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(prjlib VERSION 0.1 LANGUAGES CXX)

set(SOURCE_FILES prjlib.cpp)
add_library(prjlib STATIC ${SOURCE_FILES})

target_include_directories(prjlib PUBLIC BEFORE
        $<BUILD_INTERFACE:${PRJ_DIR_INCLUDE}>
        $<INSTALL_INTERFACE:include>  # <prefix>/include
        )

#install(TARGETS prjlib DESTINATION lib)
#install(FILES prjlib.hpp DESTINATION include/prjlib)
