// LeetCode 260. Single Number III
// My Solution
/**
 class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto const &it : freq){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
*/