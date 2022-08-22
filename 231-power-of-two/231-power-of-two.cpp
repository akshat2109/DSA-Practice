class Solution {
public:
    bool isPowerOfTwo(int n) {
        // only one set of bits
        
        return n > 0 && (n & n-1) == 0;
    }
};