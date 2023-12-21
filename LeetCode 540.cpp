// LeetCode-540. Single Element in a Sorted Array

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {

//         int n=nums.size();

//         //Edge Cases
//         if(n==1) {
//             return nums[0];
//         }

//         if(nums[0] != nums[1]){
//             return nums[0];
//         }

//         if(nums[n-1] != nums[n-2]){
//             return nums[n-1];
//         }

//         int low=1, high=n-2;
//         while(low <= high){
//             int mid=(low+high)/2;

//             //if nums[mid] is the single element
//             if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
//                 return nums[mid];
//             }

//             //we are in left
//             if((mid%2 == 0 && nums[mid] == nums[mid+1]) || (mid%2 == 1 && nums[mid] == nums[mid-1])){
//                 //eleminate the left side
//                 low = mid+1;
//             }
//             else{
//                 //eleminate the right side
//                 high=mid-1;
//             }
//         }
//         return -1;
//     }

// };