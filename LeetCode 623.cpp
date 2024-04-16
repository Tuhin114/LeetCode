// LeetCode 623. Add One Row to Tree
// https://youtu.be/Za2OFfRLp70?si=B1T1WB5QD4Paq6nt

/**
 class Solution {
public:
    TreeNode* add(TreeNode* root, int val, int depth, int curr){
        if(root == NULL){
            return NULL;
        }

        if(curr == depth - 1){
            TreeNode* leftTemp = root -> left;
            TreeNode* rightTemp = root -> right;

            root -> left = new TreeNode(val);
            root -> right = new TreeNode(val);

            root -> left -> left = leftTemp;
            root -> right -> right = rightTemp;
        }

        root -> left = add(root -> left, val, depth, curr + 1);
        root -> right = add(root -> right, val, depth, curr + 1);

        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot -> left = root;

            return newRoot;
        }

        int curr = 1;
        return add(root, val, depth, curr);
    }
};
*/