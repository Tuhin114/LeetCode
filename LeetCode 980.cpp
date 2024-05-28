// leetCode 980. Unique Paths III
//  https://www.youtube.com/watch?v=eagGLroZXMk&list=PLpIkg8OmuX-KJPC18SGiRUzJQAYo839ox&index=2

/**
 class Solution {
public:
    int m, n;
    int result;
    int nonObstacles;

    void backTrack(vector<vector<int>>& grid, int count, int i, int j) {
        // Boundary checks
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == -1) {
            return;
        }

        // If we reach the end cell
        if(grid[i][j] == 2) {
            if(count == nonObstacles) {
                result++;
            }
            return;
        }

        // Mark the cell as visited
        grid[i][j] = -1;

        // Define possible directions
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        // Explore all possible directions
        for(auto& dir : directions) {
            int new_x = i + dir[0];
            int new_y = j + dir[1];
            backTrack(grid, count + 1, new_x, new_y);
        }

        // Unmark the cell (backtrack)
        grid[i][j] = 0;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        result = 0;
        nonObstacles = 0;

        int start_x = 0, start_y = 0;

        // Count the number of non-obstacle cells and locate the starting cell
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) nonObstacles++;
                if(grid[i][j] == 1) {
                    start_x = i;
                    start_y = j;
                }
            }
        }

        // Include the starting point as a cell to visit
        nonObstacles += 1;

        // Start backtracking from the start cell
        backTrack(grid, 0, start_x, start_y);

        return result;
    }
};

*/