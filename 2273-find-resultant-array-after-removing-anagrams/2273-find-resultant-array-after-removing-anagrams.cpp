class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        unordered_map<string, string> m;
        for(int i=0; i<words.size(); i++)
        {
            string s = words[i];
            sort(s.begin(), s.end());
            m[words[i]] = s;
            
            res.push_back(words[i]);
            if(i>0 && m[words[i-1]] == m[words[i]])
                res.pop_back();
        }
        return res;
    }
};