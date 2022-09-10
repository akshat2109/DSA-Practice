class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curbuy = INT_MIN, cursell = 0, lastbuy = INT_MIN, lastsell = 0;
        
        for(int i=0; i<prices.size(); i++) {
            
            curbuy = max(lastbuy, lastsell - prices[i]);
            cursell = max(lastsell, lastbuy + prices[i]);
            lastbuy = curbuy;
            lastsell = cursell;
        }
        return cursell;
    }
};