// LeetCode 2225. Find Players With Zero or One Losses
// https://www.youtube.com/watch?v=b2_rw2NZkr8&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=2

/**
 class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lost_map; //Key: Player NUmber, value: count of losses

        for(int i = 0; i < matches.size(); i++){
            int loser = matches[i][1];

            lost_map[loser]++;
        }

        vector<int> notLost;
        vector<int> lostOnce;

        for(int i = 0; i < matches.size(); i++){
            int winner = matches[i][0];
            int loser = matches[i][1];

            if(lost_map.find(winner) == lost_map.end()){
                notLost.push_back(winner);
                lost_map[winner] = 2;
            }

            if(lost_map[loser] == 1){
                lostOnce.push_back(loser);
            }
        }

        sort(notLost.begin(), notLost.end());
        sort(lostOnce.begin(), lostOnce.end());

        return {notLost, lostOnce};
    }
};
*/