// LeetCode - 1011. Capacity To Ship Packages Within D Days

// class Solution {
// private:
//     int findDays(vector<int>& weights, int cap){
//         int calculatedDays = 1;
//         int load = 0;
//         int n = weights.size();
//         for(int i = 0; i < n; i++){
//             if(load + weights[i] > cap){
//                 calculatedDays += 1;
//                 load = weights[i];
//             }else{
//                 //Load the weight on the same day
//                 load += weights[i];
//             }
//         }
//         return calculatedDays;
//     }
// public:
//     int shipWithinDays(vector<int>& weights, int days) {
//         int low = *max_element(weights.begin(), weights.end());
//         int high = accumulate(weights.begin(), weights.end(),0);

//         while(low <= high){
//             int mid = (low + high)/2;
//             int numberOfDays = findDays(weights, mid);
//             if(numberOfDays <= days){
//                 //Eleminate right side
//                 high = mid - 1;
//             }else{
//                 //Eleminate left side
//                 low = mid + 1;
//             }
//         }
//         return low;
//     }
// };