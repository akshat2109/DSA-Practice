class Solution {
public:
    long long int mod= 1e9 + 7;
    int kInversePairs(int n, int k) {
        if(k==0)
            return 1;
        
        vector<vector<int>> dp(n+1,vector<int>(k+1));
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            dp[i][0] =1;
            for(int j=1; j<=k; j++)
            {
                dp[i][j]= (dp[i-1][j] + dp[i][j-1]) %mod;
                if(j-i >=0)
                    dp[i][j]= (dp[i][j] + mod - dp[i-1][j-i]) %mod;
            }
        }
        
        return dp[n][k];
    }
};