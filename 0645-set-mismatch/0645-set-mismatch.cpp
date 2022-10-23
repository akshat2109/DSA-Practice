class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        
        map<int, int> m;
        for(auto i: nums) {
            m[i]++;
            if(m[i] > 1)
                res.push_back(i);
        }
        
        for(int i=1; i<=nums.size(); i++) {
            
            if(!m.count(i)) {
                res.push_back(i);
                return res;
            }
        }
        
        return res;
    }
};