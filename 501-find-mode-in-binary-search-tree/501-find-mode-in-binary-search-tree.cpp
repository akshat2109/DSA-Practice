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
    vector<int> mode;
    int cnt=0, max=0, prev=0;
    void tree(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        tree(root->left);
        
        if(root->val == prev)
             cnt++;
        else
            cnt=1;

        if(cnt > max)
        {
            mode.clear();
            mode.push_back(root->val);
            max = cnt;
        }
        else if(cnt == max)
            mode.push_back(root->val);
        
        prev = root->val;
        tree(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        
        tree(root);
        return mode;
    }
};