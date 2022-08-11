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
    bool isValidBST(TreeNode* root) {
        return tree(root, LONG_MIN, LONG_MAX);
        
    }
    bool tree(TreeNode* root, long min, long max)
    {
        if(root == NULL)
            return 1;
        
        if(root->val <= min || root->val >= max)
            return 0;
        
        return tree(root->left, min, root->val) && tree(root->right, root->val, max);
    }
};