using namespace std;
#include "solution.cpp"
#include <iostream>
#include <string>

int main(int n, char **args) {
    string s = args[1];
    std::cout << "String: " << s << std::endl;
    int expected = std::stoi(args[2]);
    Solution sol;
    int result = sol.romanToInt(s);
    std::cout << "Result: " << result << std::endl;
    std::cout << "Exptected: " << expected << std::endl;
    if (result == expected) {
        return 0;
    } else {
        return 1;
    }
}
