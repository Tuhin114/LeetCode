// LeetCode - 861. Score After Flipping Matrix
//  https://www.youtube.com/watch?v=nNRqRWvV23k

// Approach - 1
/**
 class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        //set first column value in each row
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 0){
                //Flip that row
                for(int j = 0; j < n; j++){
                    grid[i][j] = 1 - grid[i][j];    //Flipping
                }
            }
        }

        for(int j = 1; j < n; j++){
            int countZero = 0;
            for(int i = 0; i < m; i++){
                if(grid[i][j] == 0){
                    countZero++;
                }
            }

            int countOne = m - countZero;
            if(countZero > countOne){
                //Flipping that column
                for(int i = 0; i < m; i++){
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        int score = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int value = grid[i][j]*pow(2, n - j - 1);   //Or, grid[i][j] << (n - j - i);
                score += value;
            }
        }
        return score;
    }
};
*/

// Approach - 2
/**
 //T.C : O(m*n)
//S.C : O(1)
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        //MSB -> 2^n-1
        int score = pow(2, n-1) * m;

        for(int j = 1; j < n; j++) {

            int countSameBits = 0; //count of 1s
            for(int i = 0; i < m; i++) {
                if(grid[i][j] == grid[i][0]) {
                    countSameBits++;
                }
            }

            int countOnes  = countSameBits;
            int countZeros = m - countOnes;

            int ones = max(countOnes, countZeros);

            score += (pow(2, n-j-1) * ones);



        }

        return score;

    }
};

*/