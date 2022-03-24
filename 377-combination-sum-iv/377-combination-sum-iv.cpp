class Solution {
public:
    int combinationSum4(vector<int>& candidates, int target) {
        
        vector<int> dp(target+1,-1);
        helper(candidates,target,dp);
        return dp[target];
 
    }
    int helper(vector<int>& candidates, int target, vector<int>& dp)
    {
        if(target==0)
            return 1;
        
        if(dp[target]!=-1) return dp[target];
        
        dp[target]=0;
        
        for(int& num:candidates)
        {
            if(target>=num)
                dp[target]+=helper(candidates,target-num,dp);
        }
        
        return dp[target];
    }
};