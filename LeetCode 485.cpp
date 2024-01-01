// LeetCode - 485. Max Consecutive Ones

//     class Solution
// {
// public:
//     int findMaxConsecutiveOnes(vector<int> &nums)
//     {
//         int maxCount = 0;
//         int curCount = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 1)
//             {
//                 curCount++;
//                 maxCount = max(maxCount, curCount);
//             }
//             else
//             {
//                 curCount = 0;
//             }
//         }
//         return maxCount;
//     }
// };