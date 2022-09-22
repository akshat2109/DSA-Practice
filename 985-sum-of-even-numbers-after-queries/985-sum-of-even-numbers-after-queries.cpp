class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        for(int x: nums)
            if(x % 2 == 0)
                sum += x;
        
        vector<int> res;
        
        for(auto q: queries) {
            
            if(nums[q[1]] % 2 == 0) 
                if(q[0] % 2 == 0)
                    sum += q[0];
                else
                    sum -= nums[q[1]];
            
            else
                if(q[0] % 2 != 0)
                    sum += nums[q[1]] + q[0];
            
            nums[q[1]] += q[0];
            
            res.push_back(sum);
        }
        return res;
    }
};