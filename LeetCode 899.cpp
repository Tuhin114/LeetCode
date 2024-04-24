// LeetCode 899. Orderly Queue
//  https://www.youtube.com/watch?v=5TNRCLbU7H4&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=6

/**
 class Solution {
public:
    string orderlyQueue(string s, int k) {
        //Simply sort and return if k > 1
        if(k > 1){
            sort(begin(s), end(s));
            return s;
        }

        string result = s;
        int n = s.length();
        for(int i = 1; i <= n - 1; i++){
            string temp = s.substr(i) + s.substr(0, i);
            result = min(result, temp);
        }
        return result;
    }
};
*/