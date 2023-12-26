// LeetCode 1482. Minimum Number of Days to Make m Bouquets

// class Solution {
// private:
//     bool possible(vector<int>& bloomDay,int day, int m, int k){
//         int n = bloomDay.size();
//         int count = 0;
//         int noOfBouquet = 0;

//         //Count no of Bouquets
//         for(int i = 0; i < n; i++){
//             if(bloomDay[i] <= day){
//                 count++;
//             }
//             else{
//                 noOfBouquet += (count/k);
//                 count = 0;
//             }
//         }
//         noOfBouquet += (count/k);
//         return noOfBouquet >= m;
//     }
// public:
//     int minDays(vector<int>& bloomDay, int m, int k) {
//         long long val = m * 1ll * k * 1ll;
//         int n = bloomDay.size();

//         //Impossible Case
//         if(val > n){
//             return -1;
//         }

//         //Find maximum and minimum
//         int mini = INT_MAX, maxi = INT_MIN;
//         for(int i = 0; i < n; i++){
//             mini = min(mini, bloomDay[i]);
//             maxi = max(maxi, bloomDay[i]);
//         }

//         //Apply Binary Search
//         int low = mini, high = maxi;
//         while(low <= high){
//             int mid = high + (low - high)/2;
//             if(possible(bloomDay, mid, m, k)){
//                 high = mid - 1;
//             }
//             else {
//                 low = mid + 1;
//             }
//         }
//         return low;
//     }
// };