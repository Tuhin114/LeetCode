// LeetCode 2331. Evaluate Boolean Binary Tree
//  https://www.youtube.com/watch?v=PeNJKq_8pEM

/**
 class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root -> left == NULL && root -> right == NULL){
            return root -> val;
        }

        if(root -> val == 2){
            return evaluateTree(root -> left) || evaluateTree(root -> right);
        }
        return evaluateTree(root -> left) && evaluateTree(root -> right);
    }
};
*/