project(Sorting_lib)

set(HEADER_FILES
        sorting.h
        )

set(SOURCE_FILES
        sorting.c)

add_library(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})