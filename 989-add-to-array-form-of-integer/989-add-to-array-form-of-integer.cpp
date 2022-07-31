class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n= num.size()-1, d= k;
        vector<int> res;
        for(int i=n; i>=0 || d>0; i--)
        {
            if(i>=0)
                d += num[i];
            res.push_back(d%10);
            d /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};