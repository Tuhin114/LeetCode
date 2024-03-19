// LeetCode 3084. Count Substrings Starting and Ending with Given Character
// https://www.youtube.com/watch?v=hnyEFhFmlo4

// Approach 1
/**
 class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        long long subString = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == c){
                subString += (1 + count);
                count++;
            }
        }
        return subString;
    }
};
*/

// Approach 2
/**
 class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == c){
                count++;
            }
        }
        return count*(count -1)/2 + count;  //Combination & Permutation formulae
    }
};
*/