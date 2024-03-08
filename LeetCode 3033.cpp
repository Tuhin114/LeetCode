// 3033. Modify the Matrix

// My solution(brute force)(o(n^3))
/*
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxi = 0;


        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(matrix[row][col] == -1){
                    for(int row1 = 0; row1 < n; row1++){
                        maxi = max(maxi, matrix[row1][col]);
                    }
                    matrix[row][col] = maxi;
                    maxi = 0;
                }
            }
        }
        return matrix;
    }
};*/