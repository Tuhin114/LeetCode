// LeetCode 3016. Minimum Number of Pushes to Type Word II
//  https://www.youtube.com/watch?v=fX6sHghLCow&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=11

/**
 class Solution {
public:
    int minimumPushes(string word) {
        vector<int> mp(26, 0);

        for(char &ch : word){
            mp[ch - 'a']++;
        }

        sort(begin(mp), end(mp), greater<int>()); //Decending order of freq

        int result = 0;

        for(int i = 0; i < 26; i++){
            int freq = mp[i];
            int press = i / 8 + 1;
            result += press * freq;
        }
        return result;
    }
};
*/