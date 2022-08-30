class Solution {
public:
    void count(vector<vector<char>>& grid, int i, int j){
        int n = grid.size(), m = grid[0].size();
        
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        count(grid, i+1, j);
        count(grid, i-1, j);
        count(grid, i, j+1);
        count(grid, i, j-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int island = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    island++;
                    count(grid, i, j);
                }
            }
        }
        return island;
    }
};