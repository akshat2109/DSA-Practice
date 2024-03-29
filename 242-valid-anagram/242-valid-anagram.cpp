class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        map<char, int> m;
        
        for(int i=0; i<s.length(); i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        
        for(int i=0; i<s.length(); i++)
            if(m[s[i]])
                return false;
  
        return true;
    }
};