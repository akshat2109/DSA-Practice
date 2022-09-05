/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
            return {};
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        int k = 0;
        while(!q.empty()) {
            int n = q.size();
            vector<int> temp;
            while(n--) {
                Node *p = q.front();
                q.pop();
                temp.push_back(p->val);
                
                for(int i=0; i<p->children.size(); i++)
                    q.push(p->children[i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};