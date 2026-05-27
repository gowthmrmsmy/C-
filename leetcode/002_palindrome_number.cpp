// LeetCode #9 — Palindrome Number
// Difficulty: Easy
//
// Given an integer x, return true if x is a palindrome, and false otherwise.
//
// Example 1: x = 121  → true
// Example 2: x = -121 → false
// Example 3: x = 10   → false
//
// Approach: Reverse digits mathematically, compare to original.
// Uses long for reverse to avoid int overflow on large numbers.

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        long reverse = 0;

        while (copy > 0) {
            int digit = copy % 10;
            reverse = reverse * 10 + digit;
            copy = copy / 10;
        }
        return reverse == x;
    }
};

// Local test harness
int main() {
    Solution sol;

    std::cout << std::boolalpha;
    std::cout << "121:  " << sol.isPalindrome(121) << "\n";   // true
    std::cout << "-121: " << sol.isPalindrome(-121) << "\n";  // false
    std::cout << "10:   " << sol.isPalindrome(10) << "\n";    // false
    std::cout << "0:    " << sol.isPalindrome(0) << "\n";     // true
    std::cout << "1221: " << sol.isPalindrome(1221) << "\n";  // true

    return 0;
}
