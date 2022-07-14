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
    void dfs(TreeNode* root, vector<double>& sum, vector<int>& count, int level)
    {
        if(!root)
            return;
        
        if(level == sum.size())
        {
            sum.push_back({});
            count.push_back({});
        }
        
        sum[level] += root->val;
        count[level]++;
        
        dfs(root->left, sum, count, level+1);
        dfs(root->right, sum, count, level+1);

    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avg;
        vector<int> count;
        dfs(root, avg, count, 0);
        
        for(int i=0; i<avg.size(); i++)
            avg[i] /= count[i];
        
        return avg;
    }
};