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
    void inorder(TreeNode* root, vector<TreeNode*>& bst) {
        if(!root)
            return;
        
        inorder(root->left, bst);
        bst.push_back(root);
        inorder(root->right, bst);
    }
    TreeNode* arraytobst(vector<TreeNode*> bst, int l, int h) {
        
        if(l > h)
            return NULL;
        
        int mid = (l+h) /2;
        TreeNode* balroot = bst[mid];
        balroot->left = arraytobst(bst, l, mid-1);
        balroot->right = arraytobst(bst, mid+1, h);
        
        return balroot;
    
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> bst;
        inorder(root, bst);
        return arraytobst(bst, 0, bst.size()-1);
    }
};