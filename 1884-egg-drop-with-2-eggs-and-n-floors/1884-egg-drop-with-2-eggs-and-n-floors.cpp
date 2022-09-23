class Solution {
public:

    int twoEggDrop(int n) {
        vector<vector<int>> dp(n+1, vector<int>(3,0));
        int move = 0;
        
        while(dp[move][2] < n) {
            move++;
            for(int i=1; i<=2; i++)
                dp[move][i] = dp[move-1][i-1] + dp[move-1][i] + 1;
        }
        return move;
    }
};