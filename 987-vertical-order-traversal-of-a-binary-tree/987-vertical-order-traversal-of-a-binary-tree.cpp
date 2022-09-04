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
    map<int, map<int, multiset<int>>> m;
    void dfs(TreeNode* root, int col, int row) {
        if(!root)
            return;
        m[col][row].insert(root->val);
        dfs(root->left, col-1, row+1);
        dfs(root->right, col+1, row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root, 0, 0);
        
        for(auto x: m) {
            vector<int> vot;
            
            for(auto y: x.second)
                vot.insert(vot.end(), y.second.begin(), y.second.end());
            
            res.push_back(vot);
        }
            
        return res;
    }
};