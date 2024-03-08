// LeetCode 3005. Count Elements With Maximum Frequency

// Brute force(O(n^2))
/**
 class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxFreq = 0;

        for(int i = 0; i < n; i++){
            int freq = 1;
            for(int j = i + 1; j < n; j++){
                if(nums[i] == nums[j]){
                    freq++;
                }
            }
            maxFreq = max(maxFreq, freq);
        }

        int totalFreq = 0;
        for(int i = 0; i < n; i++){
            int freq = 1;
            for(int j = i + 1; j < n; j++){
                if(nums[i] == nums[j]){
                    freq++;
                }
            }
            if(freq == maxFreq){
                totalFreq += maxFreq;
            }
        }
        return totalFreq;
    }
};
*/