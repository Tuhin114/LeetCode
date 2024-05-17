// LeetCode 1325. Delete Leaves With a Given Value
// https://www.youtube.com/watch?v=OzueBIOLJ44

/**
 class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == NULL){
            return NULL;
        }

        root -> left = removeLeafNodes(root -> left, target);
        root -> right = removeLeafNodes(root -> right, target);

        if(root -> val == target && root -> left == NULL && root -> right == NULL){
            return NULL;
        }

        return root;
    }
};
*/