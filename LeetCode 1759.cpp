// LeetCode 1759. Count Number of Homogenous Substrings
// https://www.youtube.com/watch?v=qEJR7ox0mNI&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=24

/**
 class Solution {
public:
    int MOD = 1e9 + 7;

    int countHomogenous(string s) {
        int n = s.length();

        int result = 0;
        int length = 0;

        for(int i = 0; i < n; i++){
            if(i > 0 && s[i] == s[i - 1]){
                length += 1;
            }else{
                length = 1;
            }
            result = (result + length) % MOD;
        }
        return result;
    }
};
*/