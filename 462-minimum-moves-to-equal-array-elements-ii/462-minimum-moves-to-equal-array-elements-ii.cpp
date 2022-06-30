class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), move=0;
        //int max = *max_element(nums.begin(), nums.end());
        int mid = n%2? n/2: n/2 -1;
        for(int i=0; i<n; i++)
            move += abs(nums[i]-nums[mid]);
        return move;
    }
};