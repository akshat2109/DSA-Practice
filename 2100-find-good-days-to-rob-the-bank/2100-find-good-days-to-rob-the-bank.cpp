class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n=security.size();
        vector<int> day;
        vector<int> before(n,0), after(n,0);
        
        for(int i=1; i<n; i++)
            if(security[i-1] >= security[i])
                before[i] = before[i-1] + 1;

        for(int i=n-2; i>=0; i--)
            if(security[i+1] >= security[i])
                after[i] = after[i+1] + 1;

        for(int i=0; i<n; i++)
            if(before[i] >= time && after[i] >= time)
                day.push_back(i);
        
        return day;
    }
};