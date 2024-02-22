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