// LeetCode-410. Split Array Largest Sum

//  class Solution {
//  private:
//      int countPartitions(vector<int> a, int maxSum){
//      int n = a.size();
//      int partitions = 1;
//      long long subArraySum = 0;
//      for(int i = 0; i < n; i++){
//          if(subArraySum + a[i] <= maxSum){
//              //Insert element to current subarray
//              subArraySum += a[i];
//          }else{
//              //Insert element to next subarray
//              partitions++;
//              subArraySum = a[i];
//          }
//      }
//      return partitions;
//  }
//  public:
//      int splitArray(vector<int>& nums, int k) {
//      int low = *max_element(nums.begin(), nums.end());
//      int high = accumulate(nums.begin(), nums.end(), 0);

//     //Apply Binary Search
//     while(low <= high){
//         int mid = low + (high - low)/2;
//         int partitions = countPartitions(nums, mid);
//         if(partitions > k){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return low;
//     }
// };