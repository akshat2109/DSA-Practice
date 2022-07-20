class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<string, int> m;
        int res= 0;
        for(auto x: words)
            m[x]++;
        
        for(auto& w: m)
        {
            string t= w.first;
            int j=0, k=0;
            while(j< s.length() && k< t.length())
            {
                if(s[j] == t[k])
                    j++, k++;
                else
                    j++;
            }
            if(k == t.length())
                res+= w.second;
        }
        return res;
    }
};