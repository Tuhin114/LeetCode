// LeetCode 1248. Count Number of Nice Subarrays
/**
 class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> cnt(n + 1);
        cnt[0] = 1;
        int sum = 0, ans = 0;
        for (int num : nums) {
            sum += num % 2;
            if (sum >= k)
                ans += cnt[sum - k];
            cnt[sum]++;
        }
        return ans;
    }
};
*/