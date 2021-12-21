cmake_minimum_required(VERSION 3.21)
project(Advent_of_Code)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 01.c)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})