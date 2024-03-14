// LeetCode 930. Binary Subarrays With Sum
// Brute force Solution
// My Solution(O(n*2))
/**
 class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            sum = nums[i];
            for(int j = i + 1; j < n + 1; j++){
                if(sum == goal){
                    count++;
                    sum += nums[j];
                }else if(sum < goal){
                    sum += nums[j];
                }else{
                    break;
                    sum = 0;
                }
            }
        }
        return count;
    }
};
*/

// Optimal approach 1(Hash map)
/**
 class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int result = 0;
        int currSum = 0;
        mpp[0] = 1;

        for(int &num : nums){
            currSum += num;
            int remaining_sum = currSum - goal;
            if(mpp.find(remaining_sum) != mpp.end()){
                result += mpp[remaining_sum];
            }
            mpp[currSum]++;
        }
        return result;
    }
};
*/

// Optimal approach 2(Sliding Window)
/**
 class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        int count = 0;
        int windowSum = 0;
        int countZero = 0;

        while(j < n){
            windowSum += nums[j];

            while(i < j && (nums[i] == 0 || windowSum > goal)){
                if(nums[i] == 0){
                    countZero++;
                }else{
                    countZero = 0;
                }

                windowSum -= nums[i];
                i++;
            }

            if(windowSum == goal){
                count += 1 + countZero;
            }
            j++;
        }
        return count;
    }
};
*/