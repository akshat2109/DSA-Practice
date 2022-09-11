class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        
        int prev1 = 0, curr1 = 0;
        
        for(int i=0; i<nums.size()-1; i++) {
            int temp = curr1;
            curr1 = max(prev1 + nums[i], curr1);
            prev1 = temp;
        }
        
        int prev2 = 0, curr2 = 0;
        
        for(int i=1; i<nums.size(); i++) {
            int temp = curr2;
            curr2 = max(prev2 + nums[i], curr2);
            prev2 = temp;
        }
        return max(curr1, curr2);
    }
};