using namespace std;
#include <algorithm>
#include <iostream>
#include <string>

/*
13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and
M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together.
12 is written as XII, which is simply X + II. The number 27 is written as XXVII,
which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right.
However, the numeral for four is not IIII. Instead, the number four is written
as IV. Because the one is before the five we subtract it making four. The same
principle applies to the number nine, which is written as IX. There are six
instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.


*/

class Solution {
  public:
    int romanToInt(string s) {
        int result = 0;
        for (int index = 0; index < s.size(); index++) {
            char ch = s[index];
            char *next_ch = nullptr;
            if (index < s.size() - 1) {
                next_ch = &s[index + 1];
            }
            if (ch == 'I') {
                if (next_ch == nullptr) {
                    result += 1;
                    continue;
                }
                switch (*next_ch) {
                case 'V':
                    result += 4;
                    index += 1;
                    break;
                case 'X':
                    result += 9;
                    index += 1;
                    break;
                default:
                    result += 1;
                    break;
                }
            } else if (ch == 'V') {
                result += 5;
            } else if (ch == 'X') {
                if (next_ch == nullptr) {
                    result += 10;
                    continue;
                }
                switch (*next_ch) {
                case 'L':
                    result += 40;
                    index += 1;
                    break;
                case 'C':
                    result += 90;
                    index += 1;
                    break;
                default:
                    result += 10;
                    break;
                }
            } else if (ch == 'L') {
                result += 50;
            } else if (ch == 'C') {
                if (next_ch == nullptr) {
                    result += 100;
                    continue;
                }
                switch (*next_ch) {
                case 'D':
                    result += 400;
                    index += 1;
                    break;
                case 'M':
                    result += 900;
                    index += 1;
                    break;
                default:
                    result += 100;
                    break;
                }
            } else if (ch == 'D') {
                result += 500;
            } else if (ch == 'M') {
                result += 1000;
            }
        }
        return result;
    }
};

// int main() {
//     Solution sol;
//     std::cout << "Result: " << sol.romanToInt("MCMXCIV") << std::endl;
//     return 0;
// }
