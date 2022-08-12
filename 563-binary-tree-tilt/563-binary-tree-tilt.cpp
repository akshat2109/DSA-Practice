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
    int tilt=0;
    int sum(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int lsum = sum(root->left);
        int rsum = sum(root->right);
        
        tilt += abs(rsum-lsum);
        
        return root->val + lsum + rsum;
    }
    int findTilt(TreeNode* root) {
        sum(root);
        return tilt;
    }
};