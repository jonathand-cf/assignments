cmake_minimum_required(VERSION 3.29)
project(assignment_5_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(assignment_5_2 main.c
        studentInfo.h
        fileOperations.h
        fileOperations.c
        menu.h
        menu.c)
