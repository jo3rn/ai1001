project(Printing_lib)

set(HEADER_FILES
        printing.h
        )

set(SOURCE_FILES
        printing.c)

add_library(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})