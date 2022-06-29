class Solution {
public:
    static bool sortby(vector<int> &a, vector<int> &b)
    {
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin(), people.end(), sortby);
        vector<vector<int>> res;
        
        for(auto p: people)
            res.insert(res.begin() + p[1], p);
        
        return res;
    }
};