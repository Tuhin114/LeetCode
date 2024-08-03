// LeetCode 1460. Make Two Arrays Equal by Reversing Subarrays
/**
 class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        if(target == arr){
            return 1;
        }

        return 0;
    }
};
 */