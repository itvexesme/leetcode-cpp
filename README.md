### Leetcode C++ tempate
This is template for leetcode.com problems solving with VSCode. It is based on cmake compiler, clang-format and ctest.

### How to install:
    sudo apt install cmake clang-format

### How to use:
Solve your leetcode problems in ``solution.cpp``:

    // 389. Find the Difference
    // https://leetcode.com/problems/find-the-difference

    class Solution {
        public:
            char findTheDifference(std::string s, std::string t) {
                ...
            }
        }

Write required test tempate during solution development in ``test.cpp``:

    #include "solution.cpp"
    int main(int n, char **args) {
        string s = args[1];
        string t = args[2];
        string d = args[3];
        char expected = d[0];
        Solution sol;
        char result = sol.findTheDifference(s, t);
        if (result == expected) {
            return 0;
        } else {
            return 1;
        }
    }

Actual tests and their parameters are specified in ``CMakeLists.txt`` like this:

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
    
Run your test to check your solution before submit with ``CTest`` from VSCode or manually:

    user@host:~/leetcode$ cd ./build/
    user@host:~/leetcode/build$ ctest
        Test project /home/user/projects/cpp/leetcode/build
            Start 1: Test_0
        1/3 Test #1: Test_0 ...........................   Passed    0.00 sec
            Start 2: Test_1
        2/3 Test #2: Test_1 ...........................   Passed    0.00 sec
            Start 3: Test_2
        3/3 Test #3: Test_2 ...........................***Failed    0.00 sec
        
        67% tests passed, 1 tests failed out of 3
        
        Total Test time (real) =   0.00 sec
        
        The following tests FAILED:
                  3 - Test_2 (Failed)
        Errors while running CTest
