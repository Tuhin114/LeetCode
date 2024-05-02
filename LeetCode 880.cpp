// LeetCode 880. Decoded String at Index

// https://www.youtube.com/watch?v=xK95Wlng_RA&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=21

/**
 class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n = s.length();
        long long size = 0;

        for(char &ch : s){
            if(isdigit(ch)){
                size = size*(ch - '0');
            }else{
                size++;
            }
        }

        for(int i = n - 1; i >= 0; i--){
            k = k%size;

            if(k == 0 && isalpha(s[i])){
                return string(1, s[i]);
            }else if(isdigit(s[i])){
                if (size == 0) {
                    // Prevent division by zero
                    break;
                }
                size /= (s[i] - '0');
            } else {
                size--;
            }
        }
        return "";
    }
};

*/