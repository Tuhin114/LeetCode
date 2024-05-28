// LeetCode 1208. Get Equal Substrings Within Budget
// My Solution
/**
 class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int l = 0, r = 0;
        int currCost = 0;
        int count = 0;
        int maxCount = 0;

        while(r < n){
            int val1 = s[r] - 'a';
            int val2 = t[r] - 'a';
            int diff = abs(val1 - val2);

            if(currCost + diff <= maxCost){
                currCost += diff;
                r++;
                count++;
            }else{
                diff = abs(s[l] - t[l]);
                currCost -= diff;
                l++;
                count--;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
*/