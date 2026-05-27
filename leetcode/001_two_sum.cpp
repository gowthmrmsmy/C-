// LeetCode #1 — Two Sum
// Difficulty: Easy
//
// Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.
//
// Example 1: nums = [2,7,11,15], target = 9 → [0,1]
// Example 2: nums = [3,2,4], target = 6 → [1,2]
// Example 3: nums = [3,3], target = 6 → [0,1]
//
// Constraints:
// - 2 <= nums.length <= 10^4
// - Only one valid answer exists
// - You may not use the same element twice
//
// Follow-up: Can you do it in less than O(n^2)?
//
// YOUR TASK: Complete the twoSum function below.

#include <iostream>
#include <vector>

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
             for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        return {i, j};
                    }
                }
            }
            return {};
        }
        
    };
        
