// LeetCode - 875. Koko Eating Bananas

// class Solution {
// private:
//     int findMax(vector<int>& piles){
//         int maxi = INT_MIN;
//         int n = piles.size();

//         //Find the maximum
//         for(int i = 0; i < n; i++){
//             maxi = max(maxi, piles[i]);
//         }
//         return maxi;
//     }
//      long long calculateTotalHours(vector<int>& piles, int hourly){
//         long long int totalHour = 0;

//         //find total hours
//         for(int i = 0; i < piles.size(); i++){
//             totalHour += ceil((piles[i])/(double)(hourly));
//         }
//         return totalHour;
//     }
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low = 1;
//         int high = findMax(piles);

//         //Apply binary search
//         while(low <= high){
//             int mid = low + (high - low) / 2;
//             long long int  totalHour = calculateTotalHours(piles, mid);
//             if(totalHour <= h){
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }
//         return low;
//     }
// };