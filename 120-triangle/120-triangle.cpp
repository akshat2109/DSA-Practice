class Solution {
public:
    int path(int i, int j, int n, vector<vector<int>> &dp, vector<vector<int>> &triangle)
    {
        if(i==n)
            return 0;
        if(dp[i][j] !=-1)
            return dp[i][j];
        
        int first= triangle[i][j] + path(i+1,j,n,dp,triangle);
        int sec= triangle[i][j] + path(i+1,j+1,n,dp,triangle);
        dp[i][j] = min(first, sec);
        
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size();
        vector<vector<int>> dp(n, vector<int>(n,-1));
            
        return path(0,0,n,dp,triangle);
    }
};