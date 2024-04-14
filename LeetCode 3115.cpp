// LeetCode 3115. Maximum Prime Difference

// Weekly contest 393
// My solutions
/**
 class Solution {
private:
    bool checkPrime(int x){

        if(x == 0 || x == 1){
            return false;
        }

        int i = 2;
        while(i < x){
            if(x % i != 0){
                i++;
            }else{
                return false;
            }
        }
        return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> primes;

        for(int i = 0; i < nums.size(); i++){
            if(checkPrime(nums[i])){
                primes.push_back(i);
            }
        }

        int n = primes.size() - 1;
        int maxDiff = primes[n] - primes[0];

        return maxDiff;
    }
};
*/