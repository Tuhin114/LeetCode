// LeetCode 2441. Largest Positive Integer That Exists With Its Negative

// My solution
/**
 class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = -1;

        int i = 0, j = nums.size() - 1;

        while(i <= j){

            if(nums[i] + nums[j] == 0){
                int num = nums[j];
                maxi = max(maxi, num);
                i++;
                j--;
            }

            int pos = -nums[i];

            if(pos < nums[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxi;
    }
};
*/