// LeetCode 525. Contiguous Array

// Optimal Solution
/**
 class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(2*n + 1, INT_MIN);
        arr[n] = -1;
        int maxLen = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                sum += -1;
            }else{
                sum += 1;
            }

            if(arr[sum + n] >= -1){
                maxLen = max(maxLen, i - arr[sum + n]);
            }else{
                arr[sum + n] = i;
            }
        }
        return maxLen;
    }
};
*/

// Optimal Solution(Hash map)
/**
 class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int maxLen = 0;
        unordered_map<int, int> seen{{0, -1}};

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i] == 1 ? 1 : -1;
            if(seen.count(sum)){
                maxLen = max(maxLen, i - seen[sum]);
            }else{
                seen[sum] = i;
            }
        }
        return maxLen;
    }
};
*/