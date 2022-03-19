class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        gensubsets(0,nums,temp,res);
        return res;
    }
    void gensubsets(int idx, vector<int> nums, vector<int> &temp, vector<vector<int>> &res)
    {
        res.push_back(temp);
        for(int i=idx;i<nums.size();i++)
        {
            if(i!=idx && nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            gensubsets(i+1,nums,temp,res);
            temp.pop_back();
        }
            
    }
};