project(Checking_lib)

set(HEADER_FILES
        checking.h
        )

set(SOURCE_FILES
        checking.c)

add_library(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})