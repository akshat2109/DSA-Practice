class Solution {
public:
    static bool rule(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), rule);
        int max=0;
        for(auto b: boxTypes)
        {
            if(truckSize <= 0)
                break;
            int x =  min(b[0], truckSize);
            truckSize -= x;
            max += (x*b[1]);
        }
        
        return max;
    }
};