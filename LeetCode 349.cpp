// LeetCode 349. Intersection of Two Arrays

// Time complexicity O(n^2)
// Use of ans.erase(unique(ans.begin(),ans.end()), ans.end()) STL
/**
 class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()), ans.end());
        return ans;
    }
};
*/

// Better Approach (Hash Map)
/**
 class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int map[1000] = {0};
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            if(map[nums1[i]] == 0){
                map[nums1[i]]++;
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            if(map[nums2[i]] != 0){
                ans.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }
        return ans;
    }
};
*/