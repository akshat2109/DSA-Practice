class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int mlen=1, sign=0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1] > nums[i] && sign != 1)
                sign=1,mlen++;
            
            else if(nums[i+1] < nums[i] && sign != -1)
                sign=-1,mlen++;
        }
        
        return mlen;
    }
};