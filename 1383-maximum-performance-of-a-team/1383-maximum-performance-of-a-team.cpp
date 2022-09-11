class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long sums = 0, mperf = 0;
        vector<pair<int, int>> eng;
        priority_queue<int, vector<int>, greater<int>> minheap;
        
        
        for(int i=0; i<n; i++)
            eng.push_back({efficiency[i], speed[i]});
        
        sort(rbegin(eng), rend(eng));
        
        for(auto [e, s] : eng) {
            sums += s;
            minheap.push(s);
            
            if(minheap.size() > k) {
                sums -= minheap.top();
                minheap.pop();
            }
            
            mperf = max(mperf, sums*e);
        }
        return mperf % (int)(1e9+7);
    }
};