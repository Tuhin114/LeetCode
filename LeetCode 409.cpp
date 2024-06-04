// LeetCode 409. Longest Palindrome

// My Solutions
/**
 class Solution {
public:
    int longestPalindrome(string s) {
        int freq[60] = {0};
        bool odd = 0;
        int result = 0;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            freq[ch - 'A']++;
        }

        for(int i = 0; i < 60; i++){
            if(freq[i]%2 == 0){
                result += freq[i];
            }else{
                result += freq[i] - 1;
                odd = 1;
            }
        }
        return odd == 1 ? result + 1 : result;
    }
};
*/