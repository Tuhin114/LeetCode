// LeetCode 404. Sum of Left Leaves

// Approach - 1
/**
 class Solution {
private:
    int solve(TreeNode* curr, bool isLeft){

        if(curr == NULL){
            return 0;
        }

        if(curr -> left == NULL && curr -> right == NULL && isLeft == true){
            return curr -> val;
        }

        return solve(curr -> left, true) + solve(curr -> right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, false);
    }
};
*/

// Approach - 2
/**
 class Solution {
private:
    int solve(TreeNode* curr, TreeNode* parent){
        if(curr == NULL){
            return 0;
        }

        //Leaf Node
        if(curr -> left == NULL && curr -> right == NULL){
            if(parent != NULL && parent -> left == curr){
                return curr -> val;
            }
        }

        int left = solve(curr -> left, curr);
        int right = solve(curr -> right, curr);

        return left + right;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, NULL);
    }
};
*/