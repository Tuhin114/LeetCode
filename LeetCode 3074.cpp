// LeetCode 3074. Apple Redistribution into Boxes
// My Solution
/**
 class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int totalApple = 0;
        int totalCapacity = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            totalApple += apple[i];
        }

        for(int i = 0; i < m; i++){
            totalCapacity += capacity[i];
        }

        if(totalCapacity == totalApple){
            return m;
        }

        sort(capacity.begin(), capacity.end());
        totalCapacity = capacity[m - 1];


        for(int i = m - 1; i >= 0; i--){
            if(totalCapacity <= totalApple){
                count++;
                totalApple -= totalCapacity;
                totalCapacity = capacity[i - 1];
            }else if(totalApple == 0){
                break;
            }else if(totalCapacity > totalApple){
                count++;
                break;
            }
        }
        return count;
    }
};
*/

// Optimal Solution
/**
 class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApple = 0;
        for(int i = 0; i < apple.size(); i++){
            totalApple += apple[i];
        }
        sort(capacity.begin(), capacity.end());
        int cnt = 0;
        for(int i = capacity.size() - 1; i >= 0; i--){
            if(totalApple <= 0){
                return cnt;
            }
            totalApple -= capacity[i];
            cnt++;
        }
        return cnt++;
    }
};
*/