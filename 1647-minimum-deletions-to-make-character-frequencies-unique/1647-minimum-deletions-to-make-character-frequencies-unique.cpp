class Solution {
public:
    int minDeletions(string s) {

        unordered_map<char, int> m;
        set<int> st;
        int res=0;
        
        for(int i=0; i<s.length(); i++)
            m[s[i]]++;
        
        for(auto x: m)
        {
            while(st.find(x.second)!=st.end())
            {
                 x.second--;
                 res++;
            }   
            if(x.second>0)
                st.insert(x.second); 
        }
        return res;
    }
};