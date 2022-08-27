class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        int res = INT_MIN;
        for(int i=0; i<matrix[0].size(); i++)
        {
            vector<int> sum(matrix.size(), 0);
            for(int c=i; c<matrix[0].size(); c++)
            {
                for(int r=0; r<matrix.size(); r++)
                    sum[r] += matrix[r][c];

                int sumrect = 0, maxrect = INT_MIN;
                set<int> s;
                s.insert(0);
                for(int x: sum)
                {
                    sumrect += x;
                    auto lower = s.lower_bound(sumrect - k);
                    if(lower != s.end())
                        maxrect = max(maxrect, sumrect - *lower);
                    s.insert(sumrect);
                }
                res = max(res, maxrect);
            }
        }
        return res;
    }
};