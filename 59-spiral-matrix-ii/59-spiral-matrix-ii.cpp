class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int> (n));
        int val=1;
        
        for(int l=0; l<(n+1)/2; l++){
            
            for(int i=l; i<n-l; i++)
                res[l][i] = val++;
            
            for(int i=l+1; i<n-l; i++)
                res[i][n-l-1] = val++;
            
            for(int i=n-l-2; i>=l; i--)
                res[n-l-1][i] = val++;
            
            for(int i=n-l-2; i>l; i--)
                res[i][l] = val++;
        }
        
        return res;
    }
};