class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minnum = 0, maxsum = 0;
        for(int i=0; i<nums.size()-1; i+=2)
        {
            minnum = min(nums[i], nums[i+1]);
            maxsum += minnum;
        }
        return maxsum;
    }
};