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
    string res = "";
    void preorder(TreeNode* root) {
        if(!root)
            return;
        
        res += to_string(root->val);
        
        if(!root-> left && !root->right)
            return;
        
        res += "(";
        preorder(root->left);
        res += ")";
        
        if(root->right) {
            res += "(";
            preorder(root->right);
            res += ")";
        }
        
    }
    string tree2str(TreeNode* root) {
        preorder(root);
        return res;
    }
};