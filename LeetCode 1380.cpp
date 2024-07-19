// LeetCode 1380. Lucky Numbers in a Matrix

/**
 class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rowArr(m, INT_MAX);
        vector<int> colArr(n, INT_MIN);
        vector<int> result;

        // Finding the minimum element in each row
        for (int i = 0; i < m; i++) {
            int mini = INT_MAX;
            for (int j = 0; j < n; j++) {
                mini = min(mini, matrix[i][j]);
            }
            rowArr[i] = mini;
        }

        // Finding the maximum element in each column
        for (int i = 0; i < n; i++) {
            int maxi = INT_MIN;
            for (int j = 0; j < m; j++) {
                maxi = max(maxi, matrix[j][i]);
            }
            colArr[i] = maxi;
        }

        // Finding the lucky numbers
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowArr[i] && matrix[i][j] == colArr[j]) {
                    result.push_back(matrix[i][j]);
                }
            }
        }

        return result;
    }
};
 */