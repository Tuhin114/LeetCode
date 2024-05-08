// LeetCode 506. Relative Ranks

// My Solution
/**
 class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScore = score;
        vector<string> ans;
        unordered_map<int, int> mp;

        int n = score.size();
        sort(sortedScore.begin(), sortedScore.end());

        for(int i = 0; i < n; i++){
            mp[sortedScore[i]] = i;
        }

        for(int i = 0; i < n; i++){
            if(mp[score[i]] == n - 1){
                ans.push_back("Gold Medal");
            }else if(mp[score[i]] == n - 2){
                ans.push_back("Silver Medal");
            }else if(mp[score[i]] == n - 3){
                ans.push_back("Bronze Medal");
            }else{
                ans.push_back(to_string(n - mp[score[i]]));
            }
        }
        return ans;
    }
};
*/