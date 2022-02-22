class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l = 0;
        int h = nums[n - 1] - nums[0];
        while (l < h) {
            int mid = (l + h) / 2;
            int count = 0, left = 0;
            for (int right = 0; right < n ; ++right) 
            {
                while (nums[right] - nums[left] > mid) 
                    left++;
                count += right - left;
            }
            if (count >= k) 
                h = mid;
            else 
                l = mid + 1;
        }
        return l;
    }
};