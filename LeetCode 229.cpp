// LeetCode 229. Majority Element II

// Brute force approach
/**
 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(ans.size() == 0 || ans[0] != nums[i]){
                int cnt = 0;
                for(int j = 0; j < n; j++){
                    if(nums[j] == nums[i]){
                        cnt++;
                    }
                }
                if(cnt > (n/3)){
                    ans.push_back(nums[i]);
                }
            }
            if(ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};
*/

// Better Solution (Hash Map)
/**
 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        map<int, int> mpp;
        // least occurrence of the majority element:
        int min = int(n/3) + 1;

        //Starting the elements with its occurence
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
            //checking if nums[i] is the majority element:
            if(mpp[nums[i]] == min){
                ans.push_back(nums[i]);
            }else if(ans.size() == 2){
                break;
            }
        }
    return ans;
    }
};
*/

// Optimal Approach Extended Boyer Moore's Voting Algorithm
/**
 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

       // applying the Extended Boyer Moore's Voting Algorithm:
       for(int i = 0; i < n; i++){
           if(cnt1 == 0 && el2 != nums[i]){
               cnt1 = 1;
               el1 = nums[i];
           }else if(cnt2 == 0 && el1 != nums[i]){
               cnt2 = 1;
               el2 = nums[i];
           }else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--, cnt2--;
            }
       }
       vector<int> ans;
       // Manually check if the stored elements in el1 and el2 are the majority elements:
       cnt1 = 0, cnt2 = 0;
       for(int i = 0; i < n; i++){
           if(nums[i] == el1) cnt1++;
           if(nums[i] == el2) cnt2++;
       }
       int mini = int(n/3) + 1;
       if(cnt1 >= mini){
           ans.push_back(el1);
       }
       if(cnt2 >= mini){
           ans.push_back(el2);
       }
       sort(ans.begin(), ans.end());
       return ans;
    }
};
*/