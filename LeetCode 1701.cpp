// LeetCode 1701. Average Waiting Time

/**
 class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double time = customers[0][0] + customers[0][1];
        double waitingTime = customers[0][1];

        for(int i = 1; i < n; i++){
            time < customers[i][0] ? time = customers[i][0] + customers[i][1] : time += customers[i][1];
            waitingTime += time - customers[i][0];
        }

        double avg = waitingTime/n;
        return avg;
    }
};
 */