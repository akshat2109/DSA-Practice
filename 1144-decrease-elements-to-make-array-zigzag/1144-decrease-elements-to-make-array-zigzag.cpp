class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        vector<int> sum(2,0);
        for(int i=0; i<nums.size(); i++)
        {
            int left = i==0 ? INT_MAX : nums[i-1];
            int right = i==nums.size()-1 ? INT_MAX : nums[i+1];
            sum[i%2] += max(nums[i] - min(left,right)+1, 0);
        }
        return min(sum[0], sum[1]);
    }
};