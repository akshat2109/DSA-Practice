class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        for(string s: strs)
        {
            string a = s;
            sort(a.begin(), a.end());
            mp[a].push_back(s);
        }
        for(auto x: mp)
            res.push_back(x.second);
        
        return res;
    }
};