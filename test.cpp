using namespace std;
#include "solution.cpp"
#include <string>

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
