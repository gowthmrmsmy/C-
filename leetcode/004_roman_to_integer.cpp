// LeetCode #13 — Roman to Integer
// Difficulty: Easy
//
// Given a roman numeral string, convert it to an integer.
//
// Example 1: s = "III"     → 3
// Example 2: s = "LVIII"   → 58
// Example 3: s = "MCMXCIV" → 1994
//
// Rule: if current value < next value, subtract; else add.

#include <iostream>
#include <string>

class Solution {
public:
    int resultGen(char a) {
        switch (a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(std::string s) {
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && resultGen(s[i]) < resultGen(s[i + 1])) {
                result -= resultGen(s[i]);
            } else {
                result += resultGen(s[i]);
            }
        }
        return result;
    }
};

// Local test harness
int main() {
    Solution sol;

    std::cout << sol.romanToInt("III") << "\n";      // 3
    std::cout << sol.romanToInt("LVIII") << "\n";    // 58
    std::cout << sol.romanToInt("MCMXCIV") << "\n";  // 1994
    std::cout << sol.romanToInt("IV") << "\n";       // 4
    std::cout << sol.romanToInt("IX") << "\n";       // 9

    return 0;
}
