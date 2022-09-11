class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev2 = 0, prev1 = 0;
        
        for(int x: nums) {
            int temp = prev1;
            prev1 = max(prev2 + x, prev1);
            prev2 = temp;
        }
        return prev1;
    }
};