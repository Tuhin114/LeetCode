// LeetCode 885. Spiral Matrix III
// https://www.youtube.com/watch?v=dt0UzAz7SPg
/**
 class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> directions = { {0, 1}, {1, 0}, {0, -1}, {-1, 0}}; //East, South, West, North
        vector<vector<int>> result;

        int steps = 0;
        int dir = 0;

        result.push_back({rStart, cStart});

        while(result.size() < rows*cols){
            if(dir == 0 || dir == 2){   //0 = EAST , 2 = WEST
                steps++;
            }

            for(int count = 0; count < steps; count++){
                rStart += directions[dir][0];
                cStart += directions[dir][1];

                if(rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols){
                    //valid cell
                    result.push_back({rStart, cStart});
                }
            }

            dir = (dir + 1)%4;
        }

        return result;
    }
};
 */