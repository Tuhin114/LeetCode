// LeetCode 1662. Check If Two String Arrays are Equivalent

// My Solutions

// Approach 1
/**
 class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        vector<char> res1;
        vector<char> res2;

        for(int i = 0; i < word1.size(); i++){
            for(int j = 0; j < word1[i].size(); j++){
                res1.push_back(word1[i][j]);
            }
        }

        for(int i = 0; i < word2.size(); i++){
            for(int j = 0; j < word2[i].size(); j++){
                res2.push_back(word2[i][j]);
            }
        }

        if(res1.size() != res2.size()){
            return false;
        }

        for(int i = 0; i < res1.size(); i++){
            if(res1[i] != res2[i]){
                return false;
            }
        }

        return true;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        for(int i = 0; i < word1.size(); i++){
            str1 += word1[i];
        }

        for(int i = 0; i < word2.size(); i++){
            str2 += word2[i];
        }

        return str1 == str2;
    }
};
*/