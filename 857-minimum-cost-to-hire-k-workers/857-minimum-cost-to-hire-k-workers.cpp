class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double, double>> worker;
        
        for(int i=0; i<quality.size(); i++)
            worker.push_back({(double)wage[i]/quality[i], (double)quality[i]});
        
        sort(begin(worker), end(worker));
        
        double sumq = 0, minmoney = DBL_MAX;
        priority_queue<double> heap;
        
        for(auto [r, q] : worker) {
            sumq += q;
            heap.push(q);
            
            if(heap.size() > k)
                sumq -= heap.top(), heap.pop();
            
            if(heap.size() == k)
                minmoney = min(minmoney, sumq*r);
        }
        return minmoney;
    }
};