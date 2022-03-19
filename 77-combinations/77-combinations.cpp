class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        generate(1,n,k,temp,res);
            
        return res;
    }
    
    void generate(int idx, int n, int k,vector<int> &temp,vector<vector<int>> &res )
    {
        if(temp.size()==k)
        {
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<=n; i++)
        {
            temp.push_back(i);
            generate(i+1,n,k,temp,res);
            temp.pop_back();
        }
    }
};