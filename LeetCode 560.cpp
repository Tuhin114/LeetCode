// LeetCode 560.Subarray Sum Equals K

// Brute force
/**
 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(); // size of the given array.
    int cnt = 0; // Number of subarrays:

    for (int i = 0 ; i < n; i++) { // starting index i
        for (int j = i; j < n; j++) { // ending index j

            // calculate the sum of subarray [i...j]
            int sum = 0;
            for (int K = i; K <= j; K++)
                sum += nums[K];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
    }
};
*/

// Better Approach
/**
 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(); // size of the given array.
    int cnt = 0; // Number of subarrays:

    for (int i = 0 ; i < n; i++) { // starting index i
        int sum = 0;
        for (int j = i; j < n; j++) { // ending index j
            // calculate the sum of subarray [i...j]
            // sum of [i..j-1] + arr[j]
            sum += nums[j];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
    }
};
*/

// Optimal Solutions
/**
 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int preSum = 0, cnt = 0;

        mpp[0] = 1; //Setting 0 in the map
        for(int i = 0; i < n; i++){
            //Add current element to prefix Sum:
            preSum += nums[i];

            //Calculate x-k
            int remove = preSum - k;

            //Add the number of subarrays to be removed
            cnt += mpp[remove];

            //Update the count of prefix sum i  the map
            mpp[preSum] += 1;
        }
        return cnt;
    }
};
*/