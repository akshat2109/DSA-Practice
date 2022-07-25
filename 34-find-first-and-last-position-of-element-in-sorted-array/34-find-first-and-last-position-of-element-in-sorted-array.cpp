class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int left=0, right=nums.size()-1;
        
        while(left <= right)
        {
            int mid= left + (right-left)/2;
            
            if(nums[mid] < target)
                left= mid+1;
            
            else if(nums[mid] > target)
                right= mid-1;
            
            else
            {
                res[0]= mid;
                right= mid-1;
            }
        }
        
        right= nums.size()-1;
        
        while(left <= right)
        {
            int mid= left + (right-left)/2;
            
            if(nums[mid] < target)
                left= mid+1;
            
            else if(nums[mid] > target)
                right= mid-1;
            
            else
            {
                res[1]=mid;
                left= mid+1;
            }
        }
        return res;
    }
};