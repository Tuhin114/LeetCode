// LeetCode 988. Smallest String Starting From Leaf
// https://www.youtube.com/watch?v=SX7dC8htok0

// Approach - 1(using DFS)
/**
 class Solution {
public:
    string result = "";


    void solve(TreeNode* root, string curr) {
        if(root == NULL) {
            return;
        }

        curr = char(root->val + 'a') + curr; //This will take O(length of curr) but I have ignored this. You can condiser this as well in calculating T.C

        if(root->left == NULL && root->right == NULL) {
            if(result == "" || result > curr) {
                result = curr;
            }
            return;
        }

        solve(root->left, curr);
        solve(root->right, curr);


    }

    string smallestFromLeaf(TreeNode* root) {
        solve(root, "");

        return result;
    }
};

*/

// Approach - 2(BFS)
/**
 class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        queue<pair<TreeNode*, string>> que;

        que.push({root, string(1, char(root -> val + 'a'))});
        string result = "";

        while(!que.empty()){
            auto[node, curr] = que.front();
            que.pop();

            if(!node -> left && !node -> right){
                if(result == "" || result > curr){
                    result = curr;
                }
            }

            if(node -> left){
                que.push({node -> left, char(node -> left -> val + 'a') + curr});
            }

            if(node -> right){
                que.push({node -> right, char(node -> right -> val + 'a') + curr});
            }
        }

        return result;
    }
};
*/