class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> res;
        vector<int> temp;
        generate(1,k,n,temp,res);
            
        return res;
    }
    
    void generate(int idx, int k, int n, vector<int> &temp, vector<vector<int>> &res )
    {
        if(n==0 && temp.size()==k)
        {
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<=9 && n>0; i++)
        {
            temp.push_back(i);
            generate(i+1,k,n-i,temp,res);
            temp.pop_back();
        }
    }
};