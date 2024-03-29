class Solution {
public:
    int helper(int n, int k, int target, vector<vector<int>>& dp) {
        if(n == 0 || target <= 0)
            return n == target;
        
        if(dp[n][target] != -1)
            return dp[n][target];
        
        long ways = 0;
        for(int i=1; i<=k; i++)
            ways = (ways + helper(n-1, k, target-i, dp)) % 1000000007;
        
        return dp[n][target] = ways;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        
        return helper(n, k, target, dp) % 1000000007;
    }
};