// LeetCode 3014. Minimum Number of Pushes to Type Word I
// https://www.youtube.com/watch?v=fX6sHghLCow&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=11

/**
 class Solution {
public:
    int minimumPushes(string word) {
        int result = 0;

        //2, 3, 4, 5, 6, 7, 8, 9
        unordered_map<int, int> mp;

        int assign_key = 2;
        for(char &ch : word){
            if(assign_key > 9){
                assign_key = 2;
            }

            mp[assign_key]++;
            result += mp[assign_key];

            assign_key++;
        }

        return result;
    }
};
*/