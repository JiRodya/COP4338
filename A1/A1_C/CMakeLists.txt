cmake_minimum_required(VERSION 3.25)
project(A1_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(A1_C
        calculator.c
        calculator.h
        main.c)
