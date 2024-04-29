// LeetCode 3128. Right Triangles
//  Bi-weekly contest 129

/**
 class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();

        long long count = 0;

        // Count the number of 1s in each row and column
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        // Iterate through each cell and calculate the count of right triangles
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    // Calculate the count of right triangles with the right angle at (i, j)
                    count += (long long)(rowCount[i] - 1) * (long long)(colCount[j] - 1); // Use long long
                }
            }
        }

        return count;
    }
};
*/