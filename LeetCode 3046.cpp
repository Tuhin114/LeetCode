// LeetCode 3046. Split the Array
// Contest - 25 Feb,2025

/**
 class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        if(n % 2 == 0){
            while(i < n - 2){
                if(nums[i] != nums[i + 2]){
                    i++;
                }else{
                    return false;
                }
            }
            return true;
        }else{
            return false;
        }
    }
};
*/