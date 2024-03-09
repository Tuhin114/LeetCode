// LeetCode 2540. Minimum Common Value

// My Solution(O(n))
// 2 pointers
/**
 class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int i = 0;
        int j = 0;

        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                return nums1[i];
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        return -1;
    }
};
*/

// Hash map solution
/**
 class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;

        for(int num : nums1){
            mpp[num]++;
        }
        for(int num : nums2){
            if(mpp.find(num) != mpp.end()){
                return num;
            }
        }
        return -1;
    }
};
*/

// Binary search(O(N∗log(M)))
/**
 class Solution {
private:
    int binarySearch(int num, vector<int>& nums) {

        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == num){
                return num;
            }else if (nums[mid] > num){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return -1;
    }
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i < nums1.size(); i++){
            int n = binarySearch(nums1[i], nums2);
            if(n != -1){
                return nums1[i];
            }
        }
        return -1;
    }
};
*/