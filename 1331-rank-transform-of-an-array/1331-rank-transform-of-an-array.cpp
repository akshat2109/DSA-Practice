class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       
        vector<int> res(arr);
        sort(res.begin(), res.end());
        
        map<int, int> m;
        
        for(int i=0; i<res.size(); i++)
        {
            if(m.count(res[i]) <1)
                m[res[i]] = m.size()+1;
        }
        for(int i=0; i<res.size(); i++)
            res[i] = m[arr[i]];
        
        return res;
    }
};