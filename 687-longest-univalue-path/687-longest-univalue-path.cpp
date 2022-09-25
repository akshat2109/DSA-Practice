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
    int res = INT_MIN;
    int dfs(TreeNode* root, int value) {
        if(!root)
            return 0;
        
        int left = dfs(root->left, root->val);
        int right = dfs(root->right, root->val);
        
        res = max(res, left+right);
        
        if(value == root->val)
            return max(left, right) + 1;
        
        return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        
        if(!root)
            return 0;
        
        dfs(root, root->val);
        return res;
    }
};