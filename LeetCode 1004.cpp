// LeetCode 1004. Max Consecutive Ones III

// Approach - 1
/**
 class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int countZero = 0;

        int maxLen = 0;

        while (j < n) {
            if (nums[j] == 0) {
                countZero++;
            }

            while (countZero > k) {
                if (nums[i] == 0) {
                    countZero--;
                }
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        return maxLen;
    }
};

*/

// Approach - 2
/**
 class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, maxLen = 0, zero = 0, n = nums.size();

        while(r < n){
            if(nums[r] == 0) zero++;

            if(zero > k){
                if(nums[l] == 0) zero--;
                    l++;
                }
            if(zero <= k){
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }
    return maxLen;
    }
};

*/