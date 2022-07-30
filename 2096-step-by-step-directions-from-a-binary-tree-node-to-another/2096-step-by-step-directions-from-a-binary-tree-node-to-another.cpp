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
    string str, dtr ;
    string getDirections(TreeNode* root, int startValue, int destValue) {
        
        TreeNode* lcat = lca(root, startValue, destValue);
        steps(lcat, startValue, true);
        steps(lcat, destValue, false);
        
        reverse(dtr.begin(), dtr.end());
        
        str += dtr;
        return str;
    }
    
    TreeNode* lca(TreeNode* root, int bg, int ed)
    {
        if(root == NULL || root->val == bg || root->val == ed)
            return root;
        
        TreeNode* left= lca(root->left, bg, ed);
        TreeNode* right= lca(root->right, bg, ed);
        
        if(left && right)
            return root;
        
        return right == NULL ? left : right;
    }
    
    bool steps(TreeNode* root, int start, bool dir)
    {
       if(root == NULL)
           return false;
        
        if(root->val == start)
            return true;
        
        bool left= steps(root->left, start, dir);
        if(left)
        {
            if(dir)
                str += "U";
            else
                dtr += "L";
            return true;
        }
        bool right= steps(root->right, start, dir);
        if(right)
        {
            if(dir)
                str += "U";
            else
                dtr += "R";
            return true;
        }
        return false;
    }
};
