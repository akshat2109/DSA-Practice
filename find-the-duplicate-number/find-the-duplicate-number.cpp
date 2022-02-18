class Solution {
public:
    int dup(vector<int> &nums, int pres)
    {
        if(pres==nums[pres] )
            return nums[pres];
        int next = nums[pres];
        nums[pres] = pres;
        
        return dup(nums,next);
    }
    int findDuplicate(vector<int>& nums) {
        return dup(nums,0);
    }
};