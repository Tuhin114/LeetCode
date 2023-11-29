// Leetcode 66. Plus One
//  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//  Increment the large integer by one and return the resulting array of digits.

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         // if the last digit on adding to 1 doesn't generates any carry then simply add 1 and return
//         if( digits[digits.size()-1] <9)
//            {
//                 digits[digits.size()-1]++;
//             }
//         else {
//             int i = digits.size()-1 ;
//             //in case adding one results in carry then check that
//             //for how many digits are there which will also generate carry or get affected by that generated carry
//             while(i >=0 && digits[i] == 9) {
//                 digits[i]= 0 ;
//                 i--;
//             }
//             if ( i < 0 ) {
//                 digits.insert(digits.begin(),1) ;
//             }
//             else {
//                 digits[i]++;
//             }
//         }
//         return digits;
//     }
// };
