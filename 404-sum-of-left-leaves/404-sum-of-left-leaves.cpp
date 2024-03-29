/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int lefy = 0;
    void dfs(TreeNode* root, bool isleft) {
        if(!root)
            return;
        
        if(isleft && !root->left && !root->right)
        lefy += root->val;
        
        dfs(root->left, true);
        dfs(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, false);
        return lefy;
    }
};