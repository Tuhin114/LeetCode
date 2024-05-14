// LeetCode 47. Permutations II
//  https://www.youtube.com/watch?v=Vd2YizhbN74&list=PLpIkg8OmuX-IBcXsfITH5ql0Lqci1MYPM&index=16

// Approach - 1
/**
 class Solution {
public:
    int n;
    vector<vector<int>> result;

    void solve(unordered_map<int, int> mp, vector<int>& temp){

        if(temp.size() == n){
            result.push_back(temp);
            return;
        }

        for(auto& [num, count] : mp){
            if(count == 0){
                continue;
            }

            //Do something
            temp.push_back(num);
            mp[num]--;

            //Explore it
            solve(mp, temp);    //Trust

            //Undo it
            temp.pop_back();
            mp[num]++;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        unordered_map<int, int> mp;

        for(auto num : nums){
            mp[num]++;
        }

        vector<int> temp;
        solve(mp, temp);
        return result;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    vector<vector<int>> result;
    int n;

    void solve(vector<int>& nums, int idx){

        if(idx == n){
            result.push_back(nums);
            return;
        }

        unordered_set<int> uniqueSet;

        for(int i = idx; i < n; i++){

            if(uniqueSet.find(nums[i]) != uniqueSet.end()){
                continue;
            }

            uniqueSet.insert(nums[i]);
            swap(nums[i], nums[idx]);

            solve(nums, idx + 1);

            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        solve(nums, 0);
        return result;
    }
};
*/