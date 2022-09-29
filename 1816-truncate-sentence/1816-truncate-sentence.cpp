class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string res, t;
        int f = 0;
        for(int i=0; i<s.length(); i++) {
            if(isspace(s[i])) {
                res += t;
                t = "";
                f++;
                if(f == k)
                    break;
            }
            
            t += s[i];
        }
        res += t;
        return res;
    }
};