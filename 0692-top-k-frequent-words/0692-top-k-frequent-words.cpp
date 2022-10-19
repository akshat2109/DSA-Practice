class Solution {
public:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            
            if(a.first != b.first)
                return a.first < b.first;
            
            else
                return a.second > b.second;
        }
    };  
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        vector<string> res;
        
        for(string& word : words)
            m[word]++;
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        
        for(auto it = m.begin(); it != m.end(); ++it)
            pq.push(make_pair(it->second, it->first));
        
        while(k-- && !pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};