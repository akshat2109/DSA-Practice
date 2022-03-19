class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back({});
        
        for(int num:nums)
        {
            int n=res.size();
            for(int j=0; j<n; j++)
            {
                res.push_back(res[j]);
                res.back().push_back(num);
            }
            
        }
        return res;
    }
};