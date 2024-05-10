// LeetCode 424. Longest Repeating Character Replacement

// Approach - 1
/**
 class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int maxLength = 0;
        int maxCount = 0;
        vector<int> charCounts(26, 0); // Assuming only uppercase English letters

        for (int j = 0; j < s.length(); j++) {
            maxCount = max(maxCount, ++charCounts[s[j] - 'A']);
            if (j - i + 1 - maxCount > k) {
                charCounts[s[i] - 'A']--;
                i++;
            }
            maxLength = max(maxLength, j - i + 1);
        }

        return maxLength;
    }
};

*/

// Approach - 2
/**
 class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int maxLen = 0;
        int maxFreq = 0;
        int hash[26] = {0};

        while(r < s.size()){
            hash[s[r] - 'A']++;
            maxFreq = max(maxFreq, hash[s[r] - 'A']);

            while((r - l + 1) - maxFreq > k){
                hash[s[l] - 'A']--;
                maxFreq = 0;

                for(int i = 0; i < 26; i++){
                    maxFreq = max(maxFreq, hash[i]);
                }
                l++;
            }
            if((r - l + 1) - maxFreq <= k){
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }
        return maxLen;
    }
};
*/

// Approach - 3
/**
 class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int n = s.length(), l = 0, maxCount = 0;

        for (int r = 0; r < n; r++) {
            freq[s[r] - 'A']++;
            maxCount = max(maxCount, freq[s[r] - 'A']);
            if (r - l + 1 - maxCount > k) {
                freq[s[l] - 'A']--;
                l++;
            }
        }
        return n - l;
    }
};
*/