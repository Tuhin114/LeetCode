// LeetCode 93. Restore IP Addresses
// https://www.youtube.com/watch?v=A0E8YGCAfEE&t=2009s

// Approach - 1
/**
 class Solution {
public:

    int n;
    vector<string> result;

    bool isValid(string str){
        if(str[0] == '0'){
            return false;
        }

        int val = stoi(str);

        if(val > 255){
            return false;
        }

        return true;
    }

    void solve(string &s, int idx, int parts, string curr){
        if(idx == n && parts == 4){
            curr.pop_back();    //remove the last .
            result.push_back(curr);

            return;
        }

        if(idx + 1 <= n){
            solve(s, idx + 1, parts + 1, curr + s.substr(idx, 1) + ".");
        }

        if(idx + 2 <= n && isValid(s.substr(idx, 2))){
            solve(s, idx + 2, parts + 1, curr + s.substr(idx, 2) + ".");
        }

        if(idx + 3 <= n && isValid(s.substr(idx, 3))){
            solve(s, idx + 3, parts + 1, curr + s.substr(idx, 3) + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        n = s.length();
        result.clear();

        if(n > 12){
            return {};
        }

        int parts = 0;
        string curr = "";

        solve(s, 0, parts, curr);

        return result;
    }
};
*/

// Approach - 2
/**
 class Solution {
    bool valid(const string& s, int start, int length) {
        return length == 1 || (s[start] != '0' && (length < 3 || s.substr(start, length) <= "255"));
    }

public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        int length = s.length();
        for (int len1 = max(1, length - 9); len1 <= 3 && len1 <= length - 3; ++len1) {
            if (!valid(s, 0, len1)) {
                continue;
            }
            for (int len2 = max(1, length - len1 - 6); len2 <= 3 && len2 <= length - len1 - 2;
                 ++len2) {
                if (!valid(s, len1, len2)) {
                    continue;
                }
                for (int len3 = max(1, length - len1 - len2 - 3);
                     len3 <= 3 && len3 <= length - len1 - len2 - 1; ++len3) {
                    if (valid(s, len1 + len2, len3) &&
                        valid(s, len1 + len2 + len3, length - len1 - len2 - len3)) {
                        ans.push_back(s.substr(0, len1) + "." + s.substr(len1, len2) + "." +
                                      s.substr(len1 + len2, len3) + "." +
                                      s.substr(len1 + len2 + len3));
                    }
                }
            }
        }
        return ans;
    }
};
*/