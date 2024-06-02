// LeetCode 104. Maximum Depth of Binary Tree
/**
 class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        int left = maxDepth(root -> left);
        int right = maxDepth(root -> right);

        int ans = max(left, right) + 1;

        return ans;
    }
};
*/