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

// Better Solution(2 pass solution, O(n))
/**
 class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(101);
        int maxFreq = 0;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            arr[num]++;
            maxFreq = max(maxFreq, arr[num]);
        }

        return count(arr.begin(), arr.end(), maxFreq)*maxFreq;
    }
};
*/

// Better Solution(1 pass solution)
/**
 class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(101);
        int maxFreq = 0;
        int total = 0;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            arr[num]++;

            int freq = arr[num];

            if(freq > maxFreq){
                maxFreq = freq;
                total = freq;
            }else if(maxFreq == freq){
                total += freq;
            }
        }
        return total;
    }
};
*/