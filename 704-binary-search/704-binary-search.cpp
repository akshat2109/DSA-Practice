class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int a = nums.size()-1;
        while(i<=a){
            int mid=(i+a)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                a=mid-1;
            else
                i=mid+1;
        }
        return -1;
    }
};