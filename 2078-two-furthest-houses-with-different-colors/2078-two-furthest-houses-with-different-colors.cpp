class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int s = 0, e = colors.size();
        int res = 0;
        
        for(; s<e; s++) {
            if(colors[0] != colors[s])
                res = max(res, s);
            
            if(colors[e-1] != colors[s])
                res = max(res, e-s-1);
        }
        return res;
    }
};