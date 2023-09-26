This is template for solving leetcode.com problems with VSCode. It is based on cmake compiler and ctest.

## How to install:
    Linux:
    ```
    sudo apt install cmake clang-format
    ```

## How to use:
Solve your leetcode problems in ``solution.cpp``, write required test during solution development in ``test.cpp``. Actual tests and their parameters specified in ``CMakeLists.txt`` like this:
    ```
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
    ```