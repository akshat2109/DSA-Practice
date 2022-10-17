class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        
        if(n < d)
            return -1;
        
        vector<vector<int>> dp(n+1, vector<int>(d+1, -1));
        
        return solve(jobDifficulty, dp, d, 0);
    }
    
    int solve(vector<int>& jobDifficulty, vector<vector<int>>& dp, int d, int idx) {
        if(d == 1)
            return *max_element(jobDifficulty.begin()+idx, jobDifficulty.end());
        
        if(dp[idx][d] != -1)
            return dp[idx][d];
        
        int maxdiff = INT_MIN, res = INT_MAX, n = jobDifficulty.size();
        
        for(int i=idx; i<=n-d; i++) {
            maxdiff = max(maxdiff, jobDifficulty[i]);
            res = min(res, maxdiff + solve(jobDifficulty, dp, d-1, i+1));
        }
        return dp[idx][d] = res;
    }
};