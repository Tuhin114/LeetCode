// LeetCode 2815. Max Pair Sum in an Array

// My Solution(O(n^2))
/**
 class Solution {
private:
    bool check(int n1, int n2){
        int max1 = 0;
        int max2 = 0;
        while(n1 > 0){
           int digit = n1 % 10;
           max1 = max(max1, digit);
           n1 = n1/10;
        }
        while(n2 > 0){
           int digit = n2 % 10;
           max2 = max(max2, digit);
           n2 = n2/10;
        }

        if(max1 == max2){
            return 1;
        }else{
            return 0;
        }
    }
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                int checkMax =  check(nums[i], nums[j]);
                if(checkMax == 1){
                    sum = nums[i] + nums[j];
                    ans = max(ans, sum);
                }
            }
        }
        if(ans == 0){
            return -1;
        }else{
            return ans;
        }
    }
};
*/

// Optimal Approach(nlog(n))
// Hash Map
/**
 class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = -1;
        for(int  i = 0; i < nums.size(); i++){
            int num = nums[i];
            int maxDigit = 0;

            while(num > 0){
                maxDigit = max(maxDigit, num % 10);
                num /= 10;
            }

            if(mp.find(maxDigit) != mp.end()){
                maxi = max(maxi, mp[maxDigit] + nums[i]);
            }

            mp[maxDigit] = max(mp[maxDigit], nums[i]);
        }
        return maxi;
    }
};
*/
// For Explanation
/*
 Certainly! Let's walk through another example to illustrate how the code works. Consider the input vector nums:

cpp
Copy code
std::vector<int> nums = {123, 456, 789, 98, 76};
Now, let's go through the code step by step:

Initialization:

mp: An unordered_map to store the maximum value associated with each maxDigit.
maxi: Initialized to -1; it will store the maximum sum.
First Iteration (123):

num: 123
Find the maximum digit: 3
Check if 3 is in mp. It's not.
Update mp[3] to the maximum of its current value (0) and the current element in nums (123): mp[3] = max(0, 123) = 123
Second Iteration (456):

num: 456
Find the maximum digit: 6
Check if 6 is in mp. It's not.
Update mp[6] to the maximum of its current value (0) and the current element in nums (456): mp[6] = max(0, 456) = 456
Third Iteration (789):

num: 789
Find the maximum digit: 9
Check if 9 is in mp. It's not.
Update mp[9] to the maximum of its current value (0) and the current element in nums (789): mp[9] = max(0, 789) = 789
Fourth Iteration (98):

num: 98
Find the maximum digit: 9
Check if 9 is in mp. It is.
Update maxi with the maximum of its current value (0) and the sum of the element in nums (98) and the value associated with 9 in mp (789): maxi = max(0, 789 + 98) = 887
Update mp[9] to the maximum of its current value (789) and the current element in nums (98): mp[9] = max(789, 98) = 789
Fifth Iteration (76):

num: 76
Find the maximum digit: 7
Check if 7 is in mp. It's not.
Update mp[7] to the maximum of its current value (0) and the current element in nums (76): mp[7] = max(0, 76) = 76
Final Result:

The maximum sum (maxi) is 887, which occurred when considering the element 98 with the maximum digit 9.
In summary, the code identifies the maximum digit in each number, maintains a record of the maximum value associated with each unique maximum digit in mp, and calculates the maximum sum considering the conditions outlined in the code.
*/