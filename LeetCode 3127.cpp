// LeetCode 3127. Make a Square with the Same Color
// Bi-weekly contest 129

// My Solution
/**
 class Solution {
public:
    bool check(int row, int col, int rowLim, int colLim,vector<vector<char>>& grid){

        int w = 0;
        int b = 0;

        for(int i = row; i < rowLim; i++){
            for(int j = col; j < colLim; j++){
                if(grid[i][j] == 'W') w++;
                else b++;
            }
        }

        if(w >= 3 || b >= 3) return true;
        else return false;
    }
    bool canMakeSquare(vector<vector<char>>& grid) {
        if     (check(0, 0, 2, 2, grid)) return true;
        else if(check(0, 1, 2, 3, grid)) return true;
        else if(check(1, 0, 3, 2, grid)) return true;
        else if(check(1, 1, 3, 3, grid)) return true;
        else return false;

    }
};
*/