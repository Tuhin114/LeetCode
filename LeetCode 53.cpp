// LeetCode - 53. Maximum Subarray

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi = INT_MIN;
//         int sum = 0;

//         for(int i = 0; i < nums.size(); i++){
//             sum += nums[i];

//             if(sum > maxi){
//                 maxi = sum;
//             }

//             //If sum < 0 - Discard the sum calculated
//             if(sum < 0){
//                 sum = 0;
//             }
//         }

//         return maxi;
//     }
// };