class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        set<long long> s;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(i > k)
                s.erase(nums[i-k-1]);
            
            auto lower = s.lower_bound((long long)nums[i]-t);
            
            if(lower != s.end() && *lower - nums[i] <= t)
                return true;
            
            s.insert(nums[i]);
        }
        return false;
    }
};