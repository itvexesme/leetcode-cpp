cmake_minimum_required(VERSION 3.5.0)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# add_executable(cpp_app solution.cpp)
add_executable(cpp_test test.cpp)

add_test(
    NAME Test_0
    COMMAND "$<TARGET_FILE:cpp_test>" "III" "3"
)

add_test(
    NAME Test_1
    COMMAND "$<TARGET_FILE:cpp_test>" "LVIII" "58"
)

add_test(
    NAME Test_2
    COMMAND "$<TARGET_FILE:cpp_test>" "MCMXCIV" "1994"
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
