class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, sell = 0;
        
        for(int p: prices) {
            buy = min(buy, p - sell);
            sell = max(sell, p - buy);
            //cout<<buy <<" "<<sell<<endl;
        }
        return sell;
    }
};