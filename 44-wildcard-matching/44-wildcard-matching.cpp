class Solution {
public:
//     bool solve(string s, string p, vector<vector<int>>& dp, int i, int j)
//     {
//         if(i<0 && j<0)
//             return true;
        
//         if(i>=0 && j<0)
//             return false;
        
//         if(i<0 && j>=0)
//         {
//             for(int k=j; k>=0; k--) {
//                 if(p[k] != '*')
//                     return false;
//             }
//             return true;
//         }
        
//         if(dp[i][j] != -1)
//             return dp[i][j];
        
//         if(s[i] == p[j] || p[j] == '?')
//             return dp[i][j] = solve(s, p, dp, i-1, j-1);
        
//         else if(p[j] == '*')
//             return dp[i][j] = (solve(s, p, dp, i-1, j)) || (solve(s, p, dp, i, j-1));
        
//         else
//             return dp[i][j] = false;
//     }
    bool isMatch(string s, string p) {
        // vector<vector<int>> dp(s.length(), vector<int>(p.length(), -1));
        // return solve(s, p, dp, s.length()-1, p.length()-1);

        int m=s.length(),n=p.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

        dp[0][0] = true;

        for(int i=1; i<=n; i++) 
        {
            if(p[i-1] == '*')
                dp[0][i] = true;
            else
                break;
        }
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s[i-1] == p[j-1] || p[j-1]=='?')
                    dp[i][j] = dp[i-1][j-1];
                
                else if(p[j-1] == '*')
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                
                else 
                    dp[i][j] = false;
            }
        }
        return dp[m][n];
    }
};