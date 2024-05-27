// LeetCode 1608. Special Array With X Elements Greater Than or Equal X

// My Solutoins
/**
 class Solution {
public:
    int specialArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int highest = *max_element(nums.begin(), nums.end());

        for(int i = 0; i <= highest; i++){
            int element = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] >= i){
                    element++;
                }
            }
            mp[i] = element;
        }

        for(const auto& it : mp){
            if(it.first == it.second){
                return it.second;
            }
        }
        return -1;
    }
};
*/