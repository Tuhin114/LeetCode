// LeetCode 2958. Length of Longest Subarray With at Most K Frequency
// See the video https://youtube.com/watch?v=txSMzRMREKA

// Approach-1 (With Nested Loop - Classic Sliding Window Template)
/**
 class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;

        int i = 0;
        int j = 0;
        int result = 0;

        while(j < n) {

            mp[nums[j]]++;

            while(i < j && mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }

            result = max(result, j - i + 1);
            j++;
        }

        return result;
    }
};
*/

// Approach-2 (Without nested loop)
/**
 class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        int i = 0;
        int j = 0;
        int result = 0;

        int culprit = 0;

        while(j < n) {

            mp[nums[j]]++;
            if(mp[nums[j]] == k+1) {
                culprit++;
            }

            if(culprit > 0) {
                mp[nums[i]]--;
                if(mp[nums[i]] == k) {
                    culprit--;
                }
                i++;
            }

            if(culprit == 0) {
                result = max(result, j-i+1);
            }
            j++;
        }

        return result;
    }
};
*/