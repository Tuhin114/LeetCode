// LeetCode 3111. Minimum Rectangles to Cover Points

// Weekly contest 393
// My solutions
/**
 class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        int n = points.size() - 1;
        int count = 1;

        sort(points.begin(), points.end());

        int i = 0;
        int j = 0;

        while(j <= n){
            if(points[j][0] - points[i][0] <= w){
                j++;
            }else{
                i = j;
                count++;
            }
        }
        return count;
    }
};
*/