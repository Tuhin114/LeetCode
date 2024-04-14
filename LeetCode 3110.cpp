// LeetCode 3110. Score of a String

// Biweekly contest 128
// My solutions
/**
 class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int n = s.length() - 1;

        for(int i = 0; i < n; i++){
            int first = s[i] - 'a' + 97;
            int second = s[i + 1] - 'a' + 97;
            int diff = abs(second - first);
            sum += diff;
        }

        return sum;
    }
};
*/