// LeetCode 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//  You may assume that each input would have exactly one solution, and you may not use the same element twice.
//  You can return the answer in any order.

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i = 0;
//         while (i < nums.size() - 1) {
//             int j = i + 1;
//             while (j < nums.size()) {
//                 if (nums[i] + nums[j] == target) {
//                     vector<int> ans = {i, j};
//                     return ans;
//                 }
//                 j++;
//             }
//             i++;
//         }
//         // If no solution is found, return an empty vector
//         return {};
//     }
// };