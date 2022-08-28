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
    set<int> s;
    vector<TreeNode*> res;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        for(int x: to_delete)
            s.insert(x);
        
        tree(root);
        if(s.find(root->val) == s.end())
            res.push_back(root);
        
        return res;
    }
    
    TreeNode* tree(TreeNode* root)
    {
        if(root == NULL)
            return NULL;
        
        root->left = tree(root->left);
        root->right = tree(root->right);
        
        if(s.find(root->val) != s.end())
        {
            if(root->left)
                res.push_back(root->left);
            
            if(root->right)
                res.push_back(root->right);
            
            return NULL;
        }
        return root;
    }
};