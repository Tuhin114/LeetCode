// LeetCode 1423. Maximum Points You Can Obtain from Cards

/**
 class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int leftSum = 0,rightSum = 0,maxSum = 0;

        for(int i = 0; i < k; i++){
            leftSum += nums[i];
        }

        maxSum = leftSum;

        int rightIndex = nums.size()-1;

        for(int i = k-1; i >= 0; i--){
            leftSum -= nums[i];
            rightSum += nums[rightIndex];
            rightIndex--;
            maxSum=max(maxSum,leftSum+rightSum);
        }

        return maxSum;
    }
};a
*/