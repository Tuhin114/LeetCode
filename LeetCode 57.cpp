// LeetCode 57. Insert Interval

// Brute force(O(n*2))
/**
 class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;
        while(i < intervals.size()) {
            if(intervals[i][1] < newInterval[0])
                i++;
            else if (intervals[i][0] > newInterval[1]){
                intervals.insert(intervals.begin() + i, newInterval);
                return intervals;
            } else {
                //Overlap : merge them
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
                intervals.erase(intervals.begin()+i);
            }
        }
        intervals.push_back(newInterval);
        return intervals;
    }
};
*/

// Optimal Soluution
/**
 class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int i = 0;
        // Add all intervals ending before newInterval starts
        while(i < intervals.size() && intervals[i][1] < newInterval[0]){
            result.push_back(intervals[i]);
            i++;
        }
        // Merge intervals that overlap with newInterval
        while(i < intervals.size() && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        // Add the merged interval
        result.push_back(newInterval);
        // Add remaining intervals
        while(i < intervals.size()){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};

*/