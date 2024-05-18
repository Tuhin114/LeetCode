// LeetCode 979. Distribute Coins in Binary Tree
//  https://www.youtube.com/watch?v=FmHxY2104hc&list=PLpIkg8OmuX-K23LhcamOcDlTBisiNJy5E&index=36

/**
 class Solution {
public:
    int solve(TreeNode* root, int &moves){
        if(root == NULL){
            return 0;
        }

        int left = solve(root -> left, moves);
        int right = solve(root -> right, moves);

        moves += abs(left) + abs(right);

        return (left + right + root -> val) - 1;
    }

    int distributeCoins(TreeNode* root) {
        int moves = 0;
        solve(root, moves);
        return moves;
    }
};
*/