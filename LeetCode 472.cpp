// LeetCode 472. Concatenated Words
// https://www.youtube.com/watch?v=zZsnMAgM6Q0&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=13

// Approach - 1 (TLE)(42/43 test)
/**
 class Solution {
public:

    bool isConcatenated(string word, unordered_set<string> &st){
        int l = word.length();

        for(int i = 0; i < l; i++){
            string prefix = word.substr(0, i + 1);
            string suffix = word.substr(i + 1); // To get upto end substr

            if((st.find(prefix) != st.end() && isConcatenated(suffix, st)) ||
               (st.find(prefix) != st.end() && st.find(suffix) != st.end())){
                return true;
            }
        }
        return false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();

        unordered_set<string> st(begin(words), end(words));

        vector<string> result;

        for(int i = 0; i < n; i++){
            string word = words[i];

            if(isConcatenated(word, st)){
                result.push_back(word);
            }
        }

        return result;
    }
};
*/

// Approach - 2(Optmal)(Memoization)
/**
 class Solution {
public:
    unordered_map<string, bool> mp;

    bool isConcatenated(string word, unordered_set<string> &st){

        if(mp.find(word) != mp.end()){
            return mp[word];
        }

        int l = word.length();

        for(int i = 0; i < l; i++){
            string prefix = word.substr(0, i + 1);
            string suffix = word.substr(i + 1); // To get upto end substr

            if((st.find(prefix) != st.end() && isConcatenated(suffix, st)) ||
               (st.find(prefix) != st.end() && st.find(suffix) != st.end())){
                return mp[word] = true;
            }
        }
        return mp[word] = false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();
        mp.clear();

        unordered_set<string> st(begin(words), end(words));

        vector<string> result;

        for(int i = 0; i < n; i++){
            string word = words[i];

            if(isConcatenated(word, st)){
                result.push_back(word);
            }
        }

        return result;
    }
};
*/