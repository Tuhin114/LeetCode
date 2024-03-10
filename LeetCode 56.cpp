// LeetCode 56. Merge Intervals

// Brute force (2 pass solution(O(N*logN) + O(2*N)))
/**
 class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for(int i = 0; i < n; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            //Skip all the merged intervals:
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            //check the rest of the intervals:
            for(int j = i + 1; j < n; j++){
                if(intervals[j][0] <= end){
                    end = max(end, intervals[j][1]);
                }else{
                    break;
                }
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};
*/

// Optimal(1 pass solution(O(N*logN) + O(N)))
/**
 class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size(); // size of the array

        //sort the given intervals:
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        for(int i = 0; i < n; i++){
            // if the current interval does not lie in the last interval:
            if(ans.empty() || arr[i][0] > ans.back()[1]){
                ans.push_back(arr[i]);
            }else{
                // if the current interval lies in the last interval:
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
        }
        return ans;
    }
};
*/
