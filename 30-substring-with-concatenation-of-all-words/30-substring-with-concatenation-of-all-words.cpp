class Solution {
public:
    bool check(string s, map<string, int> m, int wlen)
    {
        for(int j=0; j<s.size(); j+=wlen)
        {
            string t = s.substr(j, wlen);
            if(m.find(t) != m.end())
            {
                if(m[t] == 0)
                    return false;
                m[t]--;
            }
            else
                return false;
        }
        return true;
        
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        map<string, int> m;
        int wlen = words[0].size();
        int subslen = words.size()*wlen;
        
        for(auto w: words)
            m[w]++;
        
        for(int i=0; i+subslen<=s.size(); i++)
            if(check(s.substr(i, subslen), m, wlen))
                res.push_back(i);
        
        return res;
    }
};