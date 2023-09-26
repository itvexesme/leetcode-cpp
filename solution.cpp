using namespace std;
#include <algorithm>
#include <iostream>
#include <string>

// 389. Find the Difference
// https://leetcode.com/problems/find-the-difference

class Solution {
  public:
    char findTheDifference(string s, string t) {
        int s_sum = 0;
        int t_sum = 0;
        for (int i = 0; i < t.size(); i++) {
            t_sum += static_cast<int>(t[i]);
            if (i != s.size()) {
                s_sum += static_cast<int>(s[i]);
            }
        }
        int ascii_code = t_sum - s_sum;
        return static_cast<char>(ascii_code);
    }
};

// int main() {
//     Solution sol;
//     std::cout << sol.findTheDifference("ae", "aea") << std::endl;
//     return 0;
// }
