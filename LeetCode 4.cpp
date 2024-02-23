// LeetCode 4. Median of Two Sorted Arrays

// Brute Force Solutions
/**
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> nums3;

        //Apply merge sort
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }

        //Copy the left-out elements
        while(i < n1){
            nums3.push_back(nums1[i++]);
        }
        while(j < n2){
            nums3.push_back(nums2[j++]);
        }

        //Find the median
        int n = n1 + n2;
        if(n % 2 == 1){
            return (double)nums3[n/2];
        }else{
            return (double)(nums3[(n - 1) / 2] + nums3[n / 2]) / 2.0;
        }
    }
};
*/

// Better Solution
/**
 class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    int n = n1 + n2;

    //Required indices
    int ind2 = n/2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ind1Elem = -1;
    int ind2Elem = -1;

    //Apply merge sort
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(nums1[i] < nums2[j]){
            if (cnt == ind1) ind1Elem = nums1[i];
            if (cnt == ind2) ind2Elem = nums1[i];
            cnt++;
            i++;
        }else{
            if (cnt == ind1) ind1Elem = nums2[j];
            if (cnt == ind2) ind2Elem = nums2[j];
            cnt++;
            j++;
        }
    }

    //copy the left-out elements:
    while (i < n1) {
        if (cnt == ind1) ind1Elem = nums1[i];
        if (cnt == ind2) ind2Elem = nums1[i];
        cnt++;
        i++;
    }
    while (j < n2) {
        if (cnt == ind1) ind1Elem = nums2[j];
        if (cnt == ind2) ind2Elem = nums2[j];
        cnt++;
        j++;
    }

    //Find the median:
    if (n % 2 == 1) {
        return (double)ind2Elem;
    }

    return (double)((double)(ind1Elem + ind2Elem)) / 2.0;
    }
};
*/

// Optimal Approach
/**
 class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    //if n1 is bigger swap the arrays:
    if (n1 > n2) return findMedianSortedArrays(nums2, nums1);

    int n = n1 + n2; //total length
    int left = (n1 + n2 + 1) / 2; //length of left half
    //apply binary search:
    int low = 0, high = n1;
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = nums1[mid1];
        if (mid2 < n2) r2 = nums2[mid2];
        if (mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = nums2[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; //dummy statement
  }
};
*/