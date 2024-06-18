// LeetCode 3121. Count the Number of Special Characters II
/**
 class Solution {
public:
    int numberOfSpecialChars(string s) {
        int n = s.length();
        int count = 0;
        vector<int> a(150, -1); // upperCase
        vector<int> b(150, -1); // lowerCase
        for(int i = 0; i < n; i++){
            if(s[i] >= 65 && s[i] <= 90){ // count first occurrence of capital letters
                if(a[s[i]] == -1) a[s[i]] = i;
            }
            else{ // count last occurrence of small letters
                b[s[i]] = i;
            }
        }
        // iterate on either of vector and according to the condition increase count
        for(int i = 0; i < a.size(); i++){
            if(a[i] == -1 || b[i + 32] == -1) continue;
            if(b[i + 32] < a[i]) count++;
        }
        return count;
    }
};
*/

// Approach 2
/**
 class Solution {
public:
    int numberOfSpecialChars(string word) {
        int hashCap[26] = {0};
        int hashSma[26] = {0};
        int hashCapFreq[26];
        int hashSmaFreq[26];

        fill_n(hashCapFreq, 26, -1); // Initialize with -1 indicating no occurrence
        fill_n(hashSmaFreq, 26, -1);


        for(int i = 0; i < word.length(); i++){
            char ch = word[i];

            if((ch - 'A') < 26){
                hashCap[ch - 'A']++;
                if(hashCapFreq[ch - 'A'] == -1){
                    hashCapFreq[ch - 'A'] = i;
                }
            }else{
                hashSma[ch - 'a']++;
                hashSmaFreq[ch - 'a'] = i;
            }
        }

        int count = 0;

        for(int i = 0; i < 26; i++){
            if(hashSma[i] >= 1 && hashCap[i] >= 1 && hashCapFreq[i] > hashSmaFreq[i])  count++;
        }

        return count;
    }
};
 */