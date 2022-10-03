class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int mintime = 0, curmaxt = 0;
        
        for(int i=0; i<colors.length(); i++) {
            
            if(i>0 && colors[i] != colors[i-1])
                curmaxt = 0;
            
            mintime += min(curmaxt, neededTime[i]);
            curmaxt = max(curmaxt, neededTime[i]);
        }
        
        return mintime;
    }
};