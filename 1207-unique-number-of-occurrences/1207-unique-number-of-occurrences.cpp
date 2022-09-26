class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_set<int> s;
        
        for(int x: arr)
            m[x]++;
        
        for(auto y: m)
            s.insert(y.second);
        
        return s.size() == m.size();
    }
};