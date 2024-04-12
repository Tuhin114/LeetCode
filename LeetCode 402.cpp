// LeetCode 402. Remove K Digits
// https://youtu.be/lWcZB7l-O7M?si=g5wsA9m32xglcT2p
/**
 class Solution {
public:
    string removeKdigits(string num, int k) {

        string result = ""; //it will act like a stack
        int n = num.length();

        for(int i = 0; i < n; i++) {

            while(result.length() > 0 && result.back() > num[i] && k > 0) {
                result.pop_back();
                k--;
            }

            if(result.length() > 0 || num[i] != '0') {
                result.push_back(num[i]); //to avoid the case when we have preceeding zeros
            }

        }


        while(result.length() > 0 && k > 0) {
            result.pop_back();
            k--;
        }

        if(result == "") {
            return "0";
        }

        return result;

    }
};
*/