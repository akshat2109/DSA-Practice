class Solution {
public:
    vector<vector<string>> res;
    unordered_map<int, bool> r, d1, d2;
    bool safe(vector<string> board, int n, int row, int col)
    {
        if(!(r[row]) && !(d1[row+col]) && !(d2[col-row]))
            return true;
        return false;
    }
    int backtrack(vector<string> board, int n, int col)
    {
        int count = 0;
        if(col == n)
            return 1;
        for(int row=0; row<n; row++)
        {
            if(safe(board, n, row, col))
            {
                board[row][col] = 'Q';
                r[row] = d1[row+col] = d2[col-row] = true;
                
                count += backtrack(board, n, col+1);
                
                board[row][col] = '.';
                r[row] = d1[row+col] = d2[col-row] = false;
            }
        }
        return count;
        
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n,0));
        return backtrack(board, n, 0);
    }
};