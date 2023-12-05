cmake_minimum_required(VERSION 3.22)
project(assert)

set(CMAKE_C_STANDARD 23)

message(STATUS "CMAKE_BUILD_TYPE=\"${CMAKE_BUILD_TYPE}\"")

if ("${CMAKE_BUILD_TYPE}" MATCHES "Debug")
    message(STATUS "CMAKE_C_FLAGS_Debug=\"${CMAKE_C_FLAGS_DEBUG}\"")

endif ()

if ("${CMAKE_BUILD_TYPE}" MATCHES "Release")
    message(STATUS "CMAKE_C_FLAGS_RELEASE=\"${CMAKE_C_FLAGS_RELEASE}\"")
endif ()

add_executable(assert main.c)
