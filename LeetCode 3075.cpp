// LeetCode 3075. Maximize Happiness of Selected Children
// My Solution(O(n))
// Beats 98% of users

/**
 class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        long long int sum = 0;
        long long j = 1;
        while(j <= k){
            if(happiness[n - 1] > 0){
                sum += happiness[n - 1];
            }

            if(n < 2){
                sum += happiness[0];
                break;
            }

            happiness[n - 2] -= j;
            n--;
            j++;
        }
        if(happiness.size() == k){
            return sum - happiness[0];
        }else{
            return sum;
        }
    }
};
*/