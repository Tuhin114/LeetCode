// LeetCode - 1283. Find the Smallest Divisor Given a Threshold

// class Solution {
// private:
//     int sumByDivisor(vector<int>& nums, int div){
//         int n = nums.size();
//         //Find the summation of division values
//         int sum = 0;
//         for(int i = 0; i < n; i++){
//             sum += ceil((double)(nums[i])/(double)(div));
//         }
//         return sum;
//     }
// public:
//     int smallestDivisor(vector<int>& nums, int threshold) {
//         int n = nums.size();
//         if(n > threshold){
//             return -1;
//         }

//         int low = 1;
//         int high = *max_element(nums.begin(), nums.end());

//         //Apply Binary Search:
//         while(low <= high){
//             int mid = (low + high)/2;
//             if(sumByDivisor(nums, mid) <= threshold){
//                 high = mid - 1;
//             }else{
//                 low = mid + 1;
//             }
//         }
//         return low;
//     }
// };