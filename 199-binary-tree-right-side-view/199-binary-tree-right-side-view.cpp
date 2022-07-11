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
    void RevPreOrder(TreeNode* root, int level, vector<int> &res) {
        if(root==NULL)
            return;
        if(level==res.size())
            res.push_back(root->val);
        
        RevPreOrder(root->right, level+1, res);
        RevPreOrder(root->left, level+1, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        RevPreOrder(root, 0, res);
        return res;
    }
};