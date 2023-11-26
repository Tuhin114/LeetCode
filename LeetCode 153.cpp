// LeetCode 153. Find Minimum in Rotated Sorted Array

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
// Given the sorted rotated array nums of unique elements, return the minimum element of this array.
// You must write an algorithm that runs in O(log n) time.

// class Solution {
// int MinNumber(vector<int>& nums){
//     int s = 0 ;
//     int e = nums.size()-1;
//     int mid = s+(e-s/2);

//     while(nums[s]>nums[e]){

//         if( nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
//             return nums[mid];
//         }

//         if(nums[mid]<nums[mid+1]){
//             if(nums[mid+1]>nums[mid+2] && nums[mid+2]<nums[mid+3]){
//                 return nums[mid+2];
//             }else{
//                 mid = mid+1;
//             }
//         }

//         else if(nums[mid]>nums[mid+1]){
//             if(nums[mid]>nums[mid+1] && nums[mid+1]<nums[mid+2]){
//                 return nums[mid+2];
//             }else{
//                mid = mid+1;
//             }
//         }
//     }
//     return nums[s];
// }
// Time Limit Exceeded

// public:
//     int findMin(vector<int>& nums) {
//          int n = nums.size()-1 ;
//         int s = 0 ;
//         int e = n ;
//         int mid ;
//         while (s < e){
//             mid = s + (e-s)/2 ;
//             if (nums[mid] < nums[e]){
//                 e = mid ;
//             }
//             else if (nums[mid] > nums[e]){
//                 s = mid + 1 ;
//             }
//             else e-- ;
//         }
//         return nums[s] ;
//     }
// };