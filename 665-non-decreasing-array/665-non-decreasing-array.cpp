class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                if(c>=1)
                    return false;
                c++;
                
                if(i>=1 && nums[i-1] > nums[i+1])
                    nums[i+1] = nums[i];
                else
                    nums[i] = nums[i+1];
            }
            
            
        }
        return true;
    }
};