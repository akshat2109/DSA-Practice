class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0, len=0;
        int i=0, j=0;
        
        unordered_set<int> st;
        
        while(j<s.size())
        {
            while(st.count(s[j]) > 0)
            {
                st.erase(s[i]);
                len--;
                i++;
                
            }
            
            st.insert(s[j]);
            len++;
            j++;
            
            res = max(res, len);
        }
        
        return res;
    }
};