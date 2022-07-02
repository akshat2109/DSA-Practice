class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> left;
        for(int i=0; i<capacity.size(); i++)
        {
            left.push_back(capacity[i]-rocks[i]);
        }
        sort(left.begin(),left.end());
        int full=0;
        for(int i=0; i<capacity.size(); i++)
        {
            if(additionalRocks <=0)
                break;
            if(left[i] <= additionalRocks)
            {
                additionalRocks -= left[i];
                full++;
            }
        }
        return full;
    }
};