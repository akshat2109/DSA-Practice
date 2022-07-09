class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        int pos=0, jump=0, reach=0, i=0;
        if(n==1)
            return 0;
        while(i<n-1)
        {
            reach= max(reach, i+nums[i]);
            if(i==pos)
            {
                jump++;
                pos= reach;
            }
            i++;
        }
        return jump;
    }
};