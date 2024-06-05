// LeetCode 1002. Find Common Characters
// https://www.youtube.com/watch?v=0sMVPGsY84w
/**
 class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int hash[26] = {0};
        vector<string> result;

        for(int i = 0; i < words[0].size(); i++){
            hash[words[0][i] - 'a']++;
        }

        for(int i = 1; i < words.size(); i++){
            int hashNew[26] = {0};

            for(int j = 0; j < words[i].size(); j++){
                int ind = words[i][j] - 'a';
                hashNew[ind]++;
            }

            for(int k = 0; k < 26; k++){
                hash[k] = min(hash[k], hashNew[k]);
            }
        }

        for(int i = 0; i < 26; i++){
            int count = hash[i];
            while(count--){
                result.push_back(string(1, i + 'a'));
            }
        }
        return result;
    }
};
*/