class Solution {
public:
    vector<vector<int>> dp;
    int helper(int n, int eggs) {
        if(n <= 1 || eggs == 1)
            return n;
        
        if(dp[n][eggs] != -1)
            return dp[n][eggs];
        
        int mini = INT_MAX;
        
        for(int i=1; i<=n; i++)
            mini = min(mini, max(helper(i-1, eggs-1), helper(n-i, eggs))+1);
        
        return dp[n][eggs] = mini;
    }
    
    int twoEggDrop(int n) {
        dp.resize(n+1, vector<int>(3,-1));
        return helper(n, 2);
    }
};