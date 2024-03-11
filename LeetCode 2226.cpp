// LeetCode 2226. Maximum Candies Allocated to K Children

// My Solution (BS on answers)
/**
 class Solution {
private:
    long long int maximum(vector<int>& candies){
        long long int n = candies.size();
        long long int sum = 0;

        for(long long int i = 0; i < n; i++){
            sum += candies[i];
        }
        return sum;
    }

    long long int maxCandies(vector<int>& candies, int candie){
        long long int maxCandi = 0;

        for(long long int i = 0; i < candies.size(); i++){
            maxCandi += (candies[i]/candie);
        }
        return maxCandi;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long int totalCandies = maximum(candies);

        if(totalCandies < k){
            return 0;
        }

        long long int low = 1;
        long long int high = totalCandies;

        while(low <= high){
            long long int mid = low + (high - low)/2;
            long long int maxCandi = maxCandies(candies, mid);

            if(maxCandi >= k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};
*/

// A little fast solution

/**
 class Solution {
public:
    typedef long long ll;

    int check(vector<int>& candies, long long k, long long x){
        long long cnd = 0;
        if(x == 0){
            return 0;
        }

        for(int i=0; i<candies.size(); i++){
            cnd += (candies[i]/x);
        }

        if(cnd >= k){
            return 1;
        }
        return 0;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int mx = 0;
        for(int i=0;i<n;i++){
            mx = max(mx,candies[i]);
        }

        ll l = 1, r = mx;
        ll ans = 0;

        while(l<=r){
            long long mid = l + (r-l)/2;

            if(check(candies, k, mid) == 1){
                ans = mid;
                cout << mid << endl;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }
};
*/