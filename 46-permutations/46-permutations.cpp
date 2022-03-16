class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n= nums.size();
        
        int f=1;
        for(int k=2;k<=n;k++)
            f*=k;
        
        while(f--)
        {
            int i=n-2;
            while(i>=0 && nums[i]>=nums[i+1])
                i--;

            if(i>=0)
            {
                int j=n-1;
                while(nums[i]>=nums[j])
                    j--;
                swap(nums[i],nums[j]);
            }
                reverse(nums.begin()+i+1,nums.end());
                res.push_back(nums);
            
        }
        return res;
    }
};