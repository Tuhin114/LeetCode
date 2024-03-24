// LeetCode 287. Find the Duplicate Number

// My Solution(Brute-force)
/**
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == nums[i]){
                return nums[i];
            }
        }
        return 0;
    }
};
*/

// Optimal Solution(Hare & tortoise problem)
/**
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        slow = nums[0];
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
*/