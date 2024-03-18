// LeetCode 452. Minimum Number of Arrows to Burst Balloons
// My Solution(wrong)(32/50 test cases)
/**
 class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int n = points.size();
        int count = 1;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(points[i][1] <= points[j][1] && points[i][1] >= points[j][0]) {
                    // Interval i is completely within interval j
                    // Continue to the next interval i
                    continue;
                } else if(points[i][1] >= points[j][1] && points[i][0] <= points[j][0]) {
                    // Interval i completely covers interval j
                    // Continue to the next interval i
                    continue;
                } else {
                    // No overlap or covering, increment count and move i to j
                    count++;
                    i = j;
                }
            }
        }
        return count;
    }
};
*/

// Optimal Solution
// https://www.youtube.com/watch?v=zfcGwzfDNu0
/**
 class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       int n = points.size();
       sort(begin(points), end(points));
       vector<int> prev = points[0];
       int count = 1;

       for(int i = 1; i < n; i++){
        int currStartPoint = points[i][0];
        int currEndPoint = points[i][1];

        int prevStartPoint = prev[0];
        int prevEndPoint = prev[1];

        if(currStartPoint > prevEndPoint){
            //No overlap
            count++;
            prev = points[i];
        }else{
            //overlap
            prev[0] = max(prevStartPoint, currStartPoint);
            prev[1] = min(prevEndPoint, currEndPoint);
        }
       }
       return count;
    }
};
*/