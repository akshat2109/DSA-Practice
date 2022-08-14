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
    vector<string> res;
    void tree(TreeNode* root, string t) {
        if(!root)
            return;
        t += to_string(root->val);
        if(!root->left && !root->right) {
            res.push_back(t);
            return;
        }
        
        t += "->";
        //if(root->left)
        tree(root->left, t);
        
        //if(root->right)
        tree(root->right, t);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string t="";
        tree(root, t);
        return res;
        
    }
};