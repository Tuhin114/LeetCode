// LeetCode 128. Longest Consecutive Sequence
// My Solution
/**
 class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int length = 1;
        int maxLength = 1;
        int i = 0;

        if(nums.size() == 0){
            return 0;
        }

        while(i < nums.size() - 1){
            if(nums[i + 1] == nums[i] + 1){
                length++;
                i++;
            }else if(nums[i] == nums[i + 1]){
                i++;
            }else{
                length = 1;
                i++;
            }
            maxLength = max(maxLength, length);

        }
        return maxLength;
    }
};
*/