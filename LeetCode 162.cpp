// LeetCode 162. Find Peak Element

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int start=0;
//         int end=nums.size()-1;
//         if(nums.size()==1){
//             return 0;
//             }

//         while(start<=end)
//         {
//             int mid=start+(end-start)/2;
//             if(mid==0 && nums[mid]>nums[mid+1]) {
//                 return mid; // mid 0 pr hai
//                 }
//             else if(mid==nums.size()-1 && nums[mid]>nums[mid-1]){
//                 return mid; // mid last index pr hai
//                 }
//             if(mid>0 && mid<nums.size()-1)
//             {
//                 if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
//                     return mid;
//                     }
//             }
//             if(nums[mid+1]>nums[mid]){
//                 start=mid+1; // next bda hai toh uss side search krege
//                 }
//             else {
//                 end=mid-1; //prev bda hai
//                 }

//         }
//         return 0;
// }

// };