// LeetCode 73. Set Matrix Zeroes

// Approach 1 : Brute Force
/**
 class Solution {
private:
    void markRow(vector<vector<int>> &matrix, int n, int m, int i){
        //Set all non zero elements as -1 in the row i
        for(int j = 0; j < m; j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }

    void markCol(vector<vector<int>> &matrix, int n, int m, int j){
        //Set all non zero elements as -1 in the col j
        for(int i = 0; i < n; i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Set -1 for rows and cols that contains 0. Don't mark any 0 as -1:
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    markRow(matrix, n, m, i);
                    markCol(matrix, n, m, j);
                }
            }
        }

        //Finally, mark all -1 as 0
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
*/

// Approach 2 : Better Force using 2 extra array
/**
 class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

       vector<int> row(n, 0); //Row Array
       vector<int> col(m, 0); //Col Array

        //Traverse the matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    //Mark the index of row with 1
                    row[i] = 1;

                    //Mark the index of col with 1
                    col[j] = 1;
                }
            }
        }

        //Finally, mark all (i,j) as 0
        //If row[i] or col[j] is marked with 1
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
*/

// Approach 3 : Optimal Sol

/**
 #include <vector>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Step 1: Traverse the matrix and mark 1st row & col accordingly
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    // Mark i-th row
                    matrix[i][0] = 0;
                    // Mark j-th column
                    if(j != 0){
                        matrix[0][j] = 0;
                    } else {
                        col0 = 0;
                    }
                }
            }
        }

        // Step 2: Mark with 0 from (1,1) to (n -1, m -1)
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                // Check for col & row:
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Finally, mark the 1st row
        if(matrix[0][0] == 0){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }

        // Step 4: Finally, mark the 1st col if needed
        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};

*/