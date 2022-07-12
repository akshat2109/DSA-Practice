class Solution {
public:
    int dp[101][21][101];
    int helper(int i, int prev, int aim, vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target)
    {
        if(aim > target)
            return INT_MAX/2;
        
        if(i==m)
            return (aim==target)? 0: INT_MAX/2; 
        
        if(dp[i][prev][aim] != -1)
            return dp[i][prev][aim];
        else
        {
            int ans= INT_MAX/2;
            if(houses[i]==0)
            {
                for(int j=0; j<n; j++)
                {
                    ans= min(ans, cost[i][j]+helper(i+1, j+1, (prev==j+1) ? aim: aim+1, houses, cost, m, n, target));
                }
            }
            else
            {
                ans= min(ans, helper(i+1, houses[i], (houses[i]==prev) ? aim: aim+1, houses, cost, m, n, target));
            }
            return dp[i][prev][aim] = ans;
        }
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        
        memset(dp, -1, sizeof(dp));
        int ans= helper(0,0,0,houses,cost,m,n,target);
        return (ans==INT_MAX/2) ? -1 :ans;
    }
};