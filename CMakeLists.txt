cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(cpp_test test.cpp)

add_test(
    NAME Test_0
    COMMAND "$<TARGET_FILE:cpp_test>" "abc" "abcd" "d"
)

add_test(
    NAME Test_1
    COMMAND "$<TARGET_FILE:cpp_test>" "" "a" "a"
)

add_test(
    NAME Test_2
    COMMAND "$<TARGET_FILE:cpp_test>" "asd" "dtsa" "t"
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
