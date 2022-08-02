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
    int bbt(TreeNode* root, int &depth)
    {
        if(!root)
            return 0;
        
        int left = bbt(root->left, depth);
        int right = bbt(root->right, depth);
        
        if(abs(left-right)>1)
            depth= 0;
        
        return 1+ max(left, right);
        
    }
    bool isBalanced(TreeNode* root) {
        
        int depth= 1;
        bbt(root, depth);
        
        return depth;
    }
};