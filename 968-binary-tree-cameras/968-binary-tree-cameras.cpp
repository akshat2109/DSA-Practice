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
    int watch(TreeNode* root, int &c)
    {
        //0:unwatched
        //1:watch, no camera
        //2:watched with camera
        if(root==NULL)
            return 1;
        
        int l= watch(root->left, c);
        int r= watch(root->right, c);
        
        if(l==0||r==0)
        {
            c++;
            return 2;
        }
        if(l==2||r==2)
        {
            return 1;
        }
        return 0;
    }
    int minCameraCover(TreeNode* root) {
        int cam=0;
        
        if(watch(root, cam)==0)
            cam++;
        
        return cam;
    }
};