class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size(), n=matrix[0].size();
        for(int l=0; l<(m+1)/2; l++)
        {
            int flag=0;
            for(int i=l; i<n-l; i++) {
                res.push_back(matrix[l][i]);
                flag=1;
            }
            
            if(flag==1)
            for(int i=l+1; i<m-l; i++) {
                res.push_back(matrix[i][n-l-1]);
                flag=2;
            }
            
           if(flag==2)
            for(int i=n-l-2; i>=l; i--) {
                res.push_back(matrix[m-l-1][i]);
                flag=3;
            }
            
           if(flag==3)
            for(int i=m-l-2; i>l; i--)
                res.push_back(matrix[i][l]);
        }
        
        return res;
    }
};