// LeetCode 2279. Maximum Bags With Full Capacity of Rocks
// My Solution(Greedy & Sorting)
/**
 class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> arr;
        int count = 0;

        for(int i = 0; i < capacity.size(); i++){
            arr.push_back(capacity[i] - rocks[i]);
        }
        sort(arr.begin(), arr.end());
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == 0 || arr[j] <= additionalRocks){
                count++;
                additionalRocks = additionalRocks - arr[j];
            }
        }
        return count;
    }
};
*/