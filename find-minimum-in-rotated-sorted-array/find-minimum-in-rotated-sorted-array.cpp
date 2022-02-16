class Solution {
public:
    int findMin(vector<int>& nums) {
        int r=nums.size()-1,l=0;
        
        if(nums.size()==1)
            return nums[0];
        
        if(nums[r]>nums[0])
            return nums[0];
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            
            if(nums[mid]<nums[mid-1])
                return nums[mid];
            
            if(nums[0]<nums[mid])
                l=mid+1;
                
            else
                r=mid-1;
        }
        return -1;
    }
};