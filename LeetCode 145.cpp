// LeetCode 145. Binary Tree Postorder Traversal

/**
 class Solution {
public:
    void postorder(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;

        postorder(root->left, result);
        postorder(root->right, result);
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorder(root, result);
        return result;
    }
};
*/