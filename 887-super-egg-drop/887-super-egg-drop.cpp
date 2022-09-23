class Solution {
public:
    
    int superEggDrop(int k, int n) {
        vector<vector<int>> dp(n+1, vector<int>(k+1,0));
        int move = 0;
        
        while(dp[move][k] < n) {
            move++;
            for(int i=1; i<=k; i++)
                dp[move][i] = dp[move-1][i-1] + dp[move-1][i] + 1;
        }
        return move;
    }
};