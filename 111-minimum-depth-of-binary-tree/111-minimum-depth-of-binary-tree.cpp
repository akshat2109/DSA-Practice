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
    int minDepth(TreeNode* root) { //BFS is best
        if(root == NULL)
            return 0;
        
        int mind = 1;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size())
        {
            int n= q.size();
            while(n--)
            {
                TreeNode* cur = q.front();
                q.pop();
                
                if(!cur->left && !cur->right)
                    return mind;
                
                if(cur->left)
                    q.push(cur->left);
                    
                if(cur->right)
                    q.push(cur->right);
            }
            mind++;
        }
        return mind;
    }
};