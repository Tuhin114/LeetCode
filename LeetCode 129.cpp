// LeetCode 129. Sum Root to Leaf Numbers
/**
 class Solution {
private:
    int solve(TreeNode* root, int curr){
        if(!root){
            return 0;
        }
        curr = (curr*10) + root -> val;

        //Leaf node
        if(root -> left == NULL && root -> right == NULL){
            return curr;
        }

        int l = solve(root -> left, curr);
        int r = solve(root -> right, curr);

        return l + r;
    }
public:
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};
*/