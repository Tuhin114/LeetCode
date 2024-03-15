// LeetCode 238. Product of Array Except Self
// Optimal Solution
/**
 class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProduct(n);
        vector<int> rightProduct(n);
        vector<int> productArray;

        leftProduct[0] = 1;
        rightProduct[n - 1] = 1;

        int leftMulti = 1;
        int rightMulti = 1;

        for(int i = 1; i < n; i++){
            leftMulti *= nums[i - 1];
            leftProduct[i] = leftMulti;
        }

        for(int i = n - 2; i >= 0; i--){
            rightMulti *= nums[i + 1];
            rightProduct[i] = rightMulti;
        }

        for(int i = 0; i < n; i++){
           int product = leftProduct[i] * rightProduct[i];
           productArray.push_back(product);
        }
        return productArray;
    }
};
*/