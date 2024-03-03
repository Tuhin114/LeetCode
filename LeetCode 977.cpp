// LeetCode 977. Squares of a Sorted Array
/**

//My Solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int square = (nums[i]*nums[i]);
            ans.push_back(square);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
*/

// My Solution 2
/**
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
*/

// Optimal Solution
// Two pointer approach
/**
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        vector<int>ans(n);
        for(int i = n - 1; i >= 0; i--){
            if(abs(nums[s]) >= abs(nums[e])){
                ans[i] = nums[s]*nums[s];
                s++;
            }else{
                ans[i] = nums[e]*nums[e];
                e--;
            }
        }
        return ans;
    }
};
*/