class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = num;
        while(l<=r)
        {
            int mid = l+ (r-l)/2;
            if(mid == (float)num/mid)
                return true;
            else if(mid < num/mid)
                l = mid+1;
            else
                r = mid-1;
        }
        return false;
    }
};