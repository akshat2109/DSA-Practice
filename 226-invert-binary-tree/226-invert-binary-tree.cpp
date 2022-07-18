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
    TreeNode* tree(TreeNode* root)
    {
        if(!root)
            return NULL;
        TreeNode* invert= new TreeNode(root->val);
        invert->left= tree(root->right);
        invert->right= tree(root->left);
        
        return invert;
    }
    TreeNode* invertTree(TreeNode* root) {
        return tree(root);
    }
};