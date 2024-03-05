// LeetCode 18. 4Sum

// Better Approach(O(n^3))
/**
 class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        //checking all possible quadruplets:
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                set<long long> hashset;
                for(int k = j + 1; k < n; k++){
                    // taking bigger data type to avoid integer overflow:
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - sum;
                    if(hashset.find(fourth) != hashset.end()){
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    //Put the kth element into the hashset:
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};
*/

// Optimal Approach
// 2 Pointers

/**
 class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        //Sort the given array
        sort(nums.begin(), nums.end());

        //calculating the quadruplets:
        for(int i = 0; i < n; i++){
            // avoid the duplicates while moving i:
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for(int j = i + 1; j < n; j++){
                // avoid the duplicates while moving j:
                if(j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                // 2 pointers:
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;

                    //skip the duplicates:
                    while(k < l && nums[k] == nums[k - 1]){
                            k++;
                        }
                    while(k < l && nums[l] == nums[l + 1]){
                            l--;
                        }
                    }else if(sum < target){
                        k++;
                    }else{
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};
*/