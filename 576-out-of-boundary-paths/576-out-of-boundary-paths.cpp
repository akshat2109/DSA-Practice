class Solution {
public:
    long int mod= 1e9 +7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(maxMove+1, -1)));
        
        return npath(m,n,maxMove,startRow,startColumn,dp);
    }
    
    int npath(int m, int n, int mm, int sr, int sc, vector<vector<vector<int>>>& dp)
    {
        if(sr<0 || sc<0 || sr>=m || sc>=n)
            return 1;
        if(mm <=0)
            return 0;
        if(dp[sr][sc][mm] !=-1)
            return dp[sr][sc][mm];
        
        dp[sr][sc][mm] = (npath(m,n,mm-1,sr+1,sc,dp)%mod +npath(m,n,mm-1,sr-1,sc,dp)%mod +npath(m,n,mm-1,sr,sc+1,dp)%mod +npath(m,n,mm-1,sr,sc-1,dp)%mod)%mod;
        return dp[sr][sc][mm];
    }
};