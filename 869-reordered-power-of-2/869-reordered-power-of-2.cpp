class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string pow2 = sortnum(n);
        
        for(int i=0; i<32; i++)
        {
            if(pow2 == sortnum(1 << i))
                return true;
        }
        return false;
    }
    
    string sortnum(int n)
    {
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
};