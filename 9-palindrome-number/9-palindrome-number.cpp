class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int p = x;
        long rev=0;
        while(p)
        {
            rev = rev*10 + p%10;
            p /= 10;
        }
    
        return x==rev;
    }
};