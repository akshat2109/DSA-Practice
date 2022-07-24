class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r= matrix.size()-1;
        int c=0;
        
        while(r>=0 && c<matrix[0].size())
        {
            int ele = matrix[r][c];
            
            if(target < ele)
                r--;
            else if(target > ele)
                c++;
            else
                return true;
        }
        return false;
    }
};