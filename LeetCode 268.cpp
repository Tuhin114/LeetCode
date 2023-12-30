// LeetCode-268. Missing Number

// class Solution
// {
// public:
// My Approach

// int missingNumber(vector<int>& nums) {
//     vector <int> ans = nums;
//     sort(ans.begin(), ans.end());
//     int n = ans.size();
//     int i = 0;

//     if(ans[i] != 0){
//         return 0;
//     }
//     if(ans[n - 1] != n){
//         return n;
//     }

//     while(i < n-1){
//         if(ans[i + 1] != ans[i] + 1 ){
//             return ans[i + 1] - 1;
//         }else{
//             i++;
//         }
//     }
//     return -1;
// }

// Aliter
//  int missingNumber(vector<int>& nums) {
//      // Step 1: Find the length of the array.
//      int n = nums.size();

//     // Step 2: Calculate the actual sum using mathematical formula.
//     long actualSum = (long)n * (n + 1) / 2;

//     // Step 3: Calculate the given sum.
//     long sum = 0;
//     for (int element : nums) {
//         sum += element;
//     }

//     // Step 4: Return the difference between the actual and given sums.
//     return (int)(actualSum - sum);

// }
// }
// ;