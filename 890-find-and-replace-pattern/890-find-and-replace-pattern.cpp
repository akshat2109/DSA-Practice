class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(string w: words)
        {
            map<char, char> wp, pw;
            int flag = 1;
            for(int i=0; i<w.size(); i++)
            {
                if(!wp.count(w[i]))
                    wp[w[i]] = pattern[i];
                
                if(!pw.count(pattern[i]))
                    pw[pattern[i]] = w[i];
                
                if(wp[w[i]] != pattern[i] || pw[pattern[i]] != w[i])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                res.push_back(w);
        }
        return res;
    }
};