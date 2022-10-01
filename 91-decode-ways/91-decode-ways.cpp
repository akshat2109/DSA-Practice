class Solution {
public:
    int helper(int i, string &s, vector<int> &dp) {
        if(dp[i] > -1)
            return dp[i];
        
        if(s[i] == '0')
            return dp[i] = 0;
        
        int res = helper(i+1, s, dp);
        
        if(i<s.size()-1 && (s[i] == '1' || s[i] == '2' && s[i+1] < '7'))
            res += helper(i+2, s, dp);
        
        return dp[i] = res;
    }
    
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1, -1);
        dp[n] = 1;
        
        return s.empty()? 0 : helper(0, s, dp);
    }
};
