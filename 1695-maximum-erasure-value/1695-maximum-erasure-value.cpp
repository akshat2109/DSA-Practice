class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int max_sum = 0, curr_sum = 0;
        int i=0, j=0;
        
        unordered_set<int> s;
        
        while(j<nums.size())
        {
            while(s.count(nums[j]) >0)
            {
                s.erase(nums[i]);
                curr_sum -= nums[i];
                i++;
            }
            
            s.insert(nums[j]);
            curr_sum += nums[j++];
            
            max_sum = max(max_sum,curr_sum);
        }
        
        return max_sum;
    }
};