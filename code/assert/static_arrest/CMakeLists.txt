cmake_minimum_required(VERSION 3.22)
project(static-assert)

set(CMAKE_C_STANDARD 11)

if (32_DEBUG AND "${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
    add_compile_options(-m32)
endif ()

add_executable(static-assert main.c)
