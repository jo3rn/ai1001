cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
include_directories(printing sorting)
add_subdirectory(printing)
add_subdirectory(sorting)

target_link_libraries(${PROJECT_NAME} Printing_lib Sorting_lib)

add_subdirectory(test)

if (DEFINED ENV{GITHUB_ACTION})
    enable_testing()
endif (DEFINED ENV{GITHUB_ACTION})