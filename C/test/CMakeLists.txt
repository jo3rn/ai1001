project(Google_tests)

if (DEFINED ENV{GITHUB_ACTION})
    include(FetchContent)
    FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG        release-1.11.0
    )
    FetchContent_MakeAvailable(googletest)
else()
    add_subdirectory(lib)
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
endif (DEFINED ENV{GITHUB_ACTION})

# adding the Google_Tests_run target
set(TEST_NAME ${PROJECT_NAME}_run)
add_executable(${TEST_NAME} sortingTest.cpp)

# linking with Sorting_lib which will be tested
target_link_libraries(${TEST_NAME} Sorting_lib)

target_link_libraries(${TEST_NAME} gtest gtest_main)

if (DEFINED ENV{GITHUB_ACTION})
    enable_testing()
    include(GoogleTest)
    gtest_discover_tests(${TEST_NAME})
endif (DEFINED ENV{GITHUB_ACTION})