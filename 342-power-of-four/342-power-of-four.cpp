class Solution {
public:
    bool isPowerOfFour(int n) {
          // only one set bit & at odd position
        
        return n > 0 && ((n & n-1) == 0) && (n & 0x55555555);
    }
};