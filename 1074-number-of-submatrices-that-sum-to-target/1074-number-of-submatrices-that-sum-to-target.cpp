class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int res = 0;
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 1; j < matrix[0].size(); j++)
                matrix[i][j] += matrix[i][j - 1];  // prefix sum of matrix row wise 

        unordered_map<int, int> counter;
        
        for (int i = 0; i < matrix[0].size(); i++) 
        {
            for (int j = i; j < matrix[0].size(); j++) 
            {
                counter = {{0,1}};
                int cur = 0;
                for (int k = 0; k < matrix.size(); k++) 
                {
                    cur += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
                    res += counter.find(cur - target) != counter.end() ? counter[cur - target] : 0; 
                    counter[cur]++;
                }
            }
        }
        return res;
    }
};