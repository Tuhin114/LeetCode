// LeetCode 28. Find the Index of the First Occurrence in a String

// My Solutions

/**
 class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                if(haystack.substr(i, n) == needle){
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};
*/