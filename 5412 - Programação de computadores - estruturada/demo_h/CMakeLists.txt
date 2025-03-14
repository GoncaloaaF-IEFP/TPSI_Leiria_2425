cmake_minimum_required(VERSION 3.30)
project(demo_h C)

set(CMAKE_C_STANDARD 11)

add_executable(demo_h main.c
        funcs.c
        funcs.h)
