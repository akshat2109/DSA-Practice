class Solution {
public:
    int minMoves(vector<int>& nums) {
        int move = 0;
        int min = *min_element(nums.begin(), nums.end());
        
        for(auto a: nums)
            move += a - min;    //move = sum - size * min
        
        return move;
    }
};