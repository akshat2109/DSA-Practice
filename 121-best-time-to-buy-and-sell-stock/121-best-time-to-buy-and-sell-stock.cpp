class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //kadane's algorithm
        int cur=0, max=0;
        for(int i=1; i<prices.size(); ++i)
        {
            cur+= (prices[i]-prices[i-1]);
            
            if(cur>max) max=cur;
            
            if(cur<0) cur=0;
        }
        
        return max;
    }
};