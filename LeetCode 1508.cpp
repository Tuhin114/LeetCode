// LeetCode 1508. Range Sum of Sorted Subarray Sums

/**
 class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1000000007;
        vector<int> subArr;

        for(int i = 0; i < n; i++){
            int sum = nums[i];
            subArr.push_back(sum);
            for(int j = i + 1; j < n; j++){
                sum += nums[j];
                subArr.push_back(sum);
            }
        }
        sort(subArr.begin(), subArr.end());

        long long total = 0;

        for(int i = left - 1; i < right; i++){
            total += subArr[i];
        }

        return total % MOD;

    }
};
 */