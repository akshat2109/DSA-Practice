class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int len=0;
        for(int i: s)
        {
            int con=1;
            if(s.count(i-1))
                continue;
            while(s.count(i+1))
            {
                con++;
                i++;
            }
            len= max(len,con);
        }
        return len;
    }
};