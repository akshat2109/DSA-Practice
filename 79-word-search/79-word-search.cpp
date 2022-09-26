class Solution {
public:
    //vector<vector<int>> dp(n, vector<int>(m, 0));
    bool helper(vector<vector<char>>& board, string s, int i, int j, int k) {
        
        if(k >= s.size())
            return true;
        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != s[k])
            return false;
        
        // if(dp[i][j])
        //     return true;
        
        //dp[i][j] = 1;
        
        board[i][j] = '@';
        
        bool found = helper(board, s, i, j+1, k+1) || helper(board, s, i, j-1, k+1) || helper(board, s, i+1, j, k+1) || helper(board, s, i-1, j, k+1);
        
        //dp[i][j] = 0;
        
        board[i][j] = s[k];
        
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size(), m = board[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(helper(board, word, i, j, 0))
                    return true;
            }
        }
        
        return false;;
    }
};