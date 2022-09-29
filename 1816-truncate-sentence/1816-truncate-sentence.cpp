class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string res;
        int f = 0;
        for(auto i: s) {
            if(isspace(i))
                f++;
                
            if(f==k)
                break;
                
            res += i;
        }
        return res;
    }
};