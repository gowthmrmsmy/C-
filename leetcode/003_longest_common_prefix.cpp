// LeetCode #14 — Longest Common Prefix
// Difficulty: Easy
//
// Given an array of strings, find the longest common prefix string.
// If there is no common prefix, return an empty string "".

#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.size() == 0) return "";
        std::string prefix = strs[0];

        for (int i = 0; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

// Local test harness
int main() {
    Solution s;

    std::vector<std::string> t1 = {"flower", "flow", "flight"};
    std::vector<std::string> t2 = {"dog", "racecar", "car"};
    std::vector<std::string> t3 = {"interstellar", "internet", "internal", "into"};

    std::cout << s.longestCommonPrefix(t1) << "\n";  // fl
    std::cout << s.longestCommonPrefix(t2) << "\n";  // ""
    std::cout << s.longestCommonPrefix(t3) << "\n";  // int

    return 0;
}
