// LeetCode 1207. Unique Number of Occurrences
// https://www.youtube.com/watch?v=b2_rw2NZkr8&list=PLpIkg8OmuX-JVSpdssgeSsB5srSoNn55o&index=2&t=308s

// Approach - 1

/**
 class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        //Store frequency of each numbers
        for(int &x : arr){
            mp[x]++;
        }

        unordered_set<int> st;

        for(auto &it : mp){
            int freq = it.second; //it.first = number

            if(st.find(freq) != st.end()){
                return false;
            }
            st.insert(freq);
        }
        return true;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vec(2001, 0);

        for(int &x : arr){
            vec[x + 1000]++;
        }

        sort(begin(vec), end(vec));

        for(int i = 1; i < 2001; i++){
            if(vec[i] != 0 && vec[i] == vec[i - 1]){
                return false;
            }
        }

        return true;
    }
};
*/
