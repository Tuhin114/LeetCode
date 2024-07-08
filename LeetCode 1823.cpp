// LeetCode 1823. Find the Winner of the Circular Game

/**
 class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            ans = (ans + k) % i;
        }
        // add 1 to convert back to 1 indexing
        return ans + 1;
    }
};
 */
// Many more approaches are available in editorial section