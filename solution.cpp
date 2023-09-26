using namespace std;
#include <string>

// 389. Find the Difference
// https://leetcode.com/problems/find-the-difference

class Solution {
  public:
    char findTheDifference(std::string s, std::string t) {
        char &t_last = t.back();
        std::string sub_t(t);
        sub_t.erase(sub_t.size() - 1);
        if (s == sub_t) {
            return t_last;
        }
        exit(1);
    }
};
