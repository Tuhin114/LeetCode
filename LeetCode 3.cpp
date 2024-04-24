// LeetCode 3. Longest Substring Without Repeating Characters

// Brute-force
/**
 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;

        for(int i = 0; i < n; i++){
            int hash[256] = {0};
            for(int j = i; j < n; j++){
                if(hash[s[j]] == 1){
                    break;
                }else{
                    int length = j - i + 1;
                    maxLength = max(length, maxLength);
                }
                hash[s[j]] = 1;
            }
        }
        return maxLength;
    }
};
*/

// Optimal Approach

/**
 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        if(n == 0){
            return 0;
        }

        int hash[256];
        for(int i = 0; i < 256; i++) {
            hash[i] = -1;
        }
        int maxLength = 1;
        int length = 0;

        int l = 0, r = 0;
        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            length = r - l + 1;
            maxLength = max(length, maxLength);
            hash[s[r]] = r;
            r++;
        }
        return maxLength;
    }
};

*/