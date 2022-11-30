cmake_minimum_required(VERSION 3.21)
project(malloc C)

set(CMAKE_C_STANDARD 99)

add_library(malloc SHARED srcs/malloc.c)
add_executable(malloc_test test/main.c)

include_directories(incs)