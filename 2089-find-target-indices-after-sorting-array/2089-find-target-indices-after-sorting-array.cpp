class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        
        int left=0, right= nums.size()-1, f, t;
        
        while(left <= right)
        {
            int mid= left + (right-left)/2;
            if(nums[mid] < target)
                left= mid+1;
            else if(nums[mid] > target)
                right= mid-1;
            else
            {
                f=mid;
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
                t=mid;
                left= mid+1;
            }
        }
        
        for(int i=f; i<=t; i++)
             res.push_back(i);
        
        return res;
    }
};