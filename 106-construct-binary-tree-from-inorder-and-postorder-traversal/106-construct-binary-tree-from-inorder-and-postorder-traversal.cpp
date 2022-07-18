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
    TreeNode* tree(vector<int>& inorder, vector<int>& postorder, int post, int left, int right) {
        if(left>right)
            return NULL;
        
        TreeNode* root= new TreeNode(postorder[post]);
        
        int in;
        for(in=left; in<= right; in++)
            if(inorder[in] == postorder[post])
                break;
        
        root->right= tree(inorder, postorder, post-1, in+1, right);
        root->left= tree(inorder, postorder, post-1+in-right, left, in-1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return tree(inorder, postorder, postorder.size()-1, 0, inorder.size()-1);
    }
};