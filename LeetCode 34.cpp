// LeetCode 34.Find First and Last Position of Element in Sorted Array
//  Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
//  If target is not found in the array, return [-1, -1].
//  You must write an algorithm with O(log n) runtime complexity.
//  class Solution {
//  public:

// int firstOcc(vector<int>&nums, int target){
//     int n=nums.size() , low=0, high=n-1;
//     while(low <= high){
//         int mid = (low + high)/2;
//         if(nums[mid] > target)high = mid - 1;
//         else if(nums[mid] < target)low = mid + 1;
//         else
//         {
//             if(mid == 0 || nums[mid-1]!=nums[mid])return mid;
//             else
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int lastOcc(vector<int>&nums, int target){
//     int n=nums.size() , low=0, high=n-1;
//     while(low <= high){
//         int mid = (low + high)/2;
//         if(nums[mid] > target)high = mid - 1;
//         else if(nums[mid] < target)low = mid + 1;
//         else
//         {
//             if(mid == n-1 || nums[mid+1]!=nums[mid])return mid;
//             else
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         return {firstOcc(nums , target) , lastOcc(nums , target)};
//     }
// };

// Optimal Approach & small code
/**
 class Solution {
private:
    vector<int>solve(int mid, vector<int> &nums, int target){
        int low = mid , high = mid;

        while(low >= 0 && nums[low] == target){
            low--;
        }
        while(high < nums.size() && nums[high] == target){
            high++;
        }
        return {low + 1, high - 1};
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;

        while(i <= j){
            int mid = i + (j - i)/2;
            if(nums[mid] == target){
                return solve(mid, nums, target);
            }else if(nums[mid] > target){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
        return {-1, -1};
    }
};
*/