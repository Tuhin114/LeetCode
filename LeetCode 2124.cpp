// LeetCode - 2124. Check if All A's Appears Before All B's

// Brute - force
/**
 class Solution {
public:
    bool checkString(string s) {
        for(int i = 0; i < s.size() -1; i++){
            if(s[i] == 'b' && s[i + 1] == 'a'){
                return false;
            }else{
                true;
            }
        }
        return true;
    }
};
*/

// Optimal Solutions
/**
 class Solution {
public:
    bool checkString(string s) {
        //First index of b
        int t = -1;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == 'b'){
                t = i;
                break;
            }
        }
        if(t == -1){
            return true;
        }
        for(int i = t + 1; i < s.size(); i++){
            if(s[i] == 'a'){
                return false;
            }
        }
        return true;
    }
};
*/