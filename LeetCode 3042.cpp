// LeetCode 3042. Count Prefix and Suffix Pairs I
// My Solution(O(n*2))
/**
 class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            int n1 = words[i].size();
            for(int j = i + 1; j < words.size(); j++){
                int n2 = words[j].size();
                if (n2 >= n1) {
                    string prefix = words[j].substr(0, n1);
                    string suffix = words[j].substr(n2 - n1, n1);
                    if(prefix == words[i] && suffix == words[i]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
*/

// Optimal Approach
/**
 class Solution {
private:
    bool isPrefixAndSuffix(const string& s, const string& of) {
        const int n = s.size();
        const int m = of.size();
        if (n > m) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] != of[i]) {
                return false;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[n-i-1] != of[m-i-1]) {
                return false;
            }
        }
        return true;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        const int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                count += int(isPrefixAndSuffix(words[i], words[j]));
            }
        }
        return count;
    }
};
*/