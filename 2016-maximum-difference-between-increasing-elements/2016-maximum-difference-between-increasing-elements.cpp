class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minele = INT_MAX, res = -1;
        
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] < nums[i+1]) {
                minele = min(minele, nums[i]);
                res = max(res, nums[i+1] - minele);
            }
        }
        return res;
    }
};