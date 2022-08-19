class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> m, c;
        
        for(auto x: nums)
            m[x]++;
        
        for(int i=0; i<nums.size();i++)
        {
            if(m[nums[i]]==0) 
                continue;
            
            if(c[nums[i]-1]>0)
            {
                m[nums[i]]--;
                c[nums[i]-1]--;
                c[nums[i]]++; 
            }
            else if(m[nums[i]+1]>0 && m[nums[i]+2]>0)
            {   
                m[nums[i]]--;
                m[nums[i]+1]--;
                m[nums[i]+2]--;
                c[nums[i]+2]++;
              
            }    
            else
                return false;
        }
        return true;
        
    }
};