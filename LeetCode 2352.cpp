// LeetCode 2352. Equal Row and Column Pairs
//  https://www.youtube.com/watch?v=QWhQxJYppgo&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=5

// Brute force
/**
 class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        for(int r = 0; r < n; r++){
            for(int c = 0; c < n; c++){
                int isEqual = true;
                for(int i = 0; i < n; i++){
                    if(grid[r][i] != grid[i][c]){
                        isEqual = false;
                        break;
                    }
                }
                count += isEqual;
            }
        }
        return count;
    }
};
*/

// Optimal
/**
 class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();

        int count = 0;

        map<vector<int>, int> mp;

        for(int row = 0; row < n; row++){
            mp[grid[row]]++;
        }

        for(int c = 0; c < n; c++){
            vector<int> temp;
            for(int r = 0; r < n; r++){
                temp.push_back(grid[r][c]);
            }

            count += mp[temp];
        }

        return count;
    }
};
*/