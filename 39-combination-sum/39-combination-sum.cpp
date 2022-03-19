class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        generate(0,candidates,target,temp,res);
            
        return res;
    }
    
    void generate(int idx, vector<int>& candidates, int target,vector<int> &temp,vector<vector<int>> &res )
    {
        if(target==0)
        {
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<candidates.size() && target>=candidates[i]; i++)
        {
            temp.push_back(candidates[i]);
            generate(i,candidates,target-candidates[i],temp,res);
            temp.pop_back();
        }
    } 
};