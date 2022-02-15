class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int l = 0 , r = nums.size()-1;
        
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] < target )
                l = mid + 1;
            else if(nums[mid] > target)
                r = mid - 1;
            else{
                res[0]=mid ;
                r = mid -1;
            }
        }
       
        r = nums.size() - 1;
        
        while(l <= r)
        {
            int mid = l+ (r-l)/2 ;
            if(nums[mid] > target )
                r = mid - 1;
            else if(nums[mid] < target)
                l = mid + 1;
            else{
                res[1]=mid;
                l = mid +1 ;
            }
        }
        
        return res;
    }
};