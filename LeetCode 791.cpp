// LeetCode 791. Custom Sort String

// https://www.youtube.com/watch?v=oGPfmp71Zm4

// Approach 1 (char array)
/**
 class Solution {
public:
    string customSortString(string order, string s) {
        int count[26] = {0};

        for(char &ch : s){
            count[ch - 'a']++;
        }

        string result = "";
        for(char &ch : order){
            while(count[ch - 'a'] > 0){
                result.push_back(ch);
                count[ch - 'a']--;
            }
        }

        for(char &ch : s){
            if(count[ch - 'a'] > 0){
                result.push_back(ch);
            }
        }
        return result;
    }
};
*/

// Approach 2(Custom comparator)(New Approach)
/**
 class Solution {
public:
    string customSortString(string order, string s) {
         vector<int> index(26, -1);

        for(int i = 0; i < order.size(); i++){
            char ch = order[i];
            index[ch - 'a'] = i;
        }

        auto myComparator = [&index](char& ch1, char& ch2){
            if(index[ch1 - 'a'] < index[ch2 - 'a']){
                return true;
            }else{
                return false;
            }
        };

        sort(s.begin(), s.end(), myComparator);

        return s;
    }
};
*/