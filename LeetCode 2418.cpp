// LeetCode 2418. Sort the People

// Custom compaire
/**
 class Solution {
private:
    static bool comp(pair<int, string> &a, pair<int, string> &b){
        return a.first >= b.first;
    }

public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> elem;

        for(int i = 0; i < names.size(); i++){
            elem.push_back({heights[i], names[i]});
        }

        sort(elem.begin(), elem.end(), comp);

        vector<string> ans;
        for(auto it : elem){
            ans.push_back(it.second);
        }
        return ans;
    }
};
 */