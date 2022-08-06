class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int base = minutesToTest/minutesToDie + 1;
        
        int pigs = ceil(log(buckets)/log(base));
        
        return pigs;
    }
};