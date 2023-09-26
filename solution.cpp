using namespace std;
#include <iostream>
#include <string>

// 389. Find the Difference
// https://leetcode.com/problems/find-the-difference

class Solution {
  public:
    char findTheDifference(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        char *new_ch;
        int delta = 0;
        for (int index = 0; t.size() - 1; index++) {
            char &t_ch = t[index + delta];
            if (index == s.size()) {
                new_ch = &t_ch;
                break;
            }
            char &s_ch = s[index];
            if (t_ch != s_ch && delta == 0) {
                new_ch = &t_ch;
                delta++;
            }
        }
        return *new_ch;
    }
};

// int main() {
//     Solution sol;
//     std::cout << sol.findTheDifference("abc", "adcb") << std::endl;
//     return 0;
// }
