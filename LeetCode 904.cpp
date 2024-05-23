// LeetCode 904. Fruit Into Baskets

// Approach - 1
// TLE
/**
 class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLength = 0;



        for(int i = 0; i < n; i++){
            set<int> st;
            for(int j = i; j < n; j++){
                st.insert(fruits[j]);
                if(st.size() <= 2){
                    maxLength = max(maxLength, j - i + 1);
                }else{
                    break;
                }
            }
        }
        return maxLength;
    }
};
*/

// Approach - 2
// Optimal - Two pointers & sliding window
/**
 class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLength = 0;
        map<int, int> mp;

        int l = 0, r = 0;
        while(r < n){
            mp[fruits[r]]++;
            if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]] == 0){
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLength = 0;
        map<int, int> mp;

        int l = 0, r = 0;
        while(r < n){
            mp[fruits[r]]++;
            if(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
*/