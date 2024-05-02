// LeetCode 392. Is Subsequence

// My Solution
/**
 class Solution {
public:
    bool isSubsequence(string s, string t) {

        if(s == "" && t == ""){
            return true;
        }

        int i = 0;
        int j = 0;
        int count = 0;

        while(j < t.length()){
            if(s[i] == t[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }

            if(count == s.length()){
                return true;
            }

        }
        return false;
    }
};
*/