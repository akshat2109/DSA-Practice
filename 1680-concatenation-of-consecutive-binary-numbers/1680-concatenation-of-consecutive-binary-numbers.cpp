class Solution {
public:
    int concatenatedBinary(int n) {
        long res = 0, mod = 1e9+7;

        for(int i=1; i<=n; i++) {
            int l = (int)(log2(i) + 1);
            res = ((res << l) % mod + i) % mod;
        }
        
        return res;
    }
};