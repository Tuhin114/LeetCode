// LeetCode 2485. Find the Pivot Integer
// My Solution(Binary Search)
/**
 class Solution {
public:
    int pivotInteger(int n) {

        int low = 0;
        int high = n;

        int sum1 = 0;
        int sum2 = 0;

        int totalSum = (n * (n + 1))/2;

        while(low <= high){
            int mid = low + (high - low)/2;
            sum1 = (mid * (mid + 1))/2;
            sum2 = totalSum - sum1 + mid;

            if(sum1 == sum2){
                return mid;
            }else if(sum1 < sum2){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return -1;
    }
};
*/