class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump=0, i=0;
        while(i<nums.size())
        {
            if(jump<i)
                return false;
            jump= max(jump, i+nums[i]);
            i++;
        }
        return true;
    }
};