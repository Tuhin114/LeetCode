// LeetCode 930. Binary Subarrays With Sum
// Brute force Solution
// My Solution(O(n*2))
/**
 class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            sum = nums[i];
            for(int j = i + 1; j < n + 1; j++){
                if(sum == goal){
                    count++;
                    sum += nums[j];
                }else if(sum < goal){
                    sum += nums[j];
                }else{
                    break;
                    sum = 0;
                }
            }
        }
        return count;
    }
};
*/