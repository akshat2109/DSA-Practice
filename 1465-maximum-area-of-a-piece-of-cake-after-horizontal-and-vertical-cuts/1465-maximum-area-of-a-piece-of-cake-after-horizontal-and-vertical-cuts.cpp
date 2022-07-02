class Solution {
    int mod = 1000000007;
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int l=horizontalCuts[0], b=verticalCuts[0];
        
        for(int i=0; i<horizontalCuts.size()-1; i++)
            l = max(horizontalCuts[i+1]-horizontalCuts[i],l);
                   
        for(int i=0; i<verticalCuts.size()-1; i++)
            b = max(verticalCuts[i+1]-verticalCuts[i],b);
       
        return (1ll*l*b)%mod;
    }
};