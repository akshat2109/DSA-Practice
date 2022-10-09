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
    bool twosum(TreeNode* root, TreeNode* cur, int value) {
        if(!root)
            return false;
        
        if(value == root->val && root != cur)
            return true;
        
        return (root->val > value && twosum(root->left, cur, value)) || (root->val < value && twosum(root->right, cur, value));
    }
    
    bool dfs(TreeNode* root, TreeNode* cur, int k) {
        if(!cur)
            return false;
        
        return twosum(root, cur, k-cur->val) || dfs(root, cur->left, k) || dfs(root, cur->right, k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        return dfs(root, root, k);
    }
};