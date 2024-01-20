cmake_minimum_required(VERSION 3.23)
project(stl)

set(CMAKE_CXX_STANDARD 17)


include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${PROJECT_NAME} src/main.cpp src/homework/multimap-homework.cpp src/homework/multimap-homework.hpp)
add_executable(${PROJECT_NAME}-ut test/tests.cpp src/homework/multimap-homework.cpp src/homework/multimap-homework.hpp)
target_link_libraries(${PROJECT_NAME}-ut GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(stl-ut)
