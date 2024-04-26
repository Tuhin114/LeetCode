// LeetCode 1814. Count Nice Pairs in an Array
//  https://www.youtube.com/watch?v=HgYxzKsToBo&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=9

/**
 class Solution {
public:
    int M = 1e9+7;

    int rev(int num){
        int ans = 0;

        while(num > 0){
            int rem = num % 10;
            ans = (ans * 10) + rem;

            num /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        //nums[i] - rev(nums[i])
        for(int i = 0; i < n; i++){
            nums[i] = nums[i] - rev(nums[i]);
        }

        int result = 0;

        for(int i = 0; i < n; i++){
            result = (result + mp[nums[i]])%M;

            mp[nums[i]]++;
        }

        return result;
    }
};
*/