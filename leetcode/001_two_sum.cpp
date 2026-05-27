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

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    // TODO: solve it here

    return {};
}

int main()
{
    // Test case 1
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    std::cout << "Test 1: [" << result1[0] << ", " << result1[1] << "]\n";

    // Test case 2
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    std::cout << "Test 2: [" << result2[0] << ", " << result2[1] << "]\n";

    // Test case 3
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    std::cout << "Test 3: [" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}
