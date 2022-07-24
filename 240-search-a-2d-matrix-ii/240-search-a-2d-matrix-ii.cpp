class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size()-1, c=0;
        
        while(r>-1 && c<matrix[0].size())
        {
            int ele = matrix[r][c];
            
            if(ele > target)
                r--;
            
            else if(ele < target)
                c++;
            
            else
                return true;
        }
        return false;
    }
};