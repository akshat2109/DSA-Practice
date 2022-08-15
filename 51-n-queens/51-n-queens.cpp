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
    void backtrack(vector<string> board, int n, int col)
    {
        if(col == n)
        {
            res.push_back(board);
            return;
        }
        for(int row=0; row<n; row++)
        {
            if(safe(board, n, row, col))
            {
                board[row][col] = 'Q';
                r[row] = true;
                d1[row+col] = true;
                d2[col-row] = true;
                
                backtrack(board, n, col+1);
                
                board[row][col] = '.';
                r[row] = false;
                d1[row+col] = false;
                d2[col-row] = false;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        backtrack(board, n, 0);
        return res;
    }
};