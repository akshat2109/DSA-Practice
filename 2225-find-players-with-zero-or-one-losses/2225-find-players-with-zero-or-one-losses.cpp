class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> m;
        set<int> s;
        vector<vector<int>> res(2);
        
        for(int i=0; i<matches.size(); i++)
        {
            m[matches[i][1]]++;
            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
        }
            
        for(int x: s)
        {
            if(m.count(x) == 0)
                res[0].push_back(x);
            
            else if(m[x] == 1)
                res[1].push_back(x);
        }
        return res;    
    }
};