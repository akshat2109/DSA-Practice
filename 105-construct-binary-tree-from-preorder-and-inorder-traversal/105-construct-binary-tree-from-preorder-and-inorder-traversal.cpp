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
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder, int pre, int left, int right)
    {
        if(left > right )
            return NULL;
        
        TreeNode* root= new TreeNode(preorder[pre]);
        
        int in;
        for(in=left; in<= right; in++)
            if(inorder[in] == preorder[pre])
                break;
        
        root->left= tree(preorder, inorder, pre+1, left, in-1);
        root->right= tree(preorder, inorder, pre+in-left+1, in+1, right);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(preorder, inorder, 0, 0, preorder.size()-1);
    }
};