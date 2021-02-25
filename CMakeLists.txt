cmake_minimum_required(VERSION 3.10)

project(adder)

add_library(adder STATIC
    code/adder/adder.hpp
    code/adder/adder.cpp
 )

target_include_directories(adder INTERFACE code)

option(ADDER_BUILD_TESTS "Adder: build tests" ON)

if(ADDER_BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

option(ADDER_BUILD_EXAMPLES "Adder: build examples" ON)

if(ADDER_BUILD_EXAMPLES)
    add_subdirectory(example)
endif()
