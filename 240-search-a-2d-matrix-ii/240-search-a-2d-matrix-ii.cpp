class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0, c=matrix[0].size()-1;
        
        while(r<matrix.size() && c>-1)
        {
            int ele = matrix[r][c];
            
            if(ele > target)
                c--;
            
            else if(ele < target)
                r++;
            
            else
                return true;
        }
        return false;
    }
};