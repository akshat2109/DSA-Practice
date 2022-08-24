class Solution {
public:
    bool isPowerOfThree(int n) {
        int large3 = pow(3,19);
        return n > 0 && large3 % n == 0;
    }
};