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
    int sum = 0;
    void bst(TreeNode* root, int low, int high) {
        if(!root)
            return;
        
        if(low <= root->val && root->val <=high)
            sum += root->val;
        
        bst(root->left, low, high);
        bst(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        bst(root, low, high);
        return sum;
    }
};