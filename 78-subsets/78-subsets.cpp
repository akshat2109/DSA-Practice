class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
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
            temp.push_back(nums[i]);
            gensubsets(i+1,nums,temp,res);
            temp.pop_back();
        }
            
    }
};