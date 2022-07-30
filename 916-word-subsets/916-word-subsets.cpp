class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> f(26, 0);
        
        for(string w2: words2) 
        {
            vector<int> temp(26, 0);
            
            for(char c: w2) 
                temp[c-'a']++;
            
            for(int i=0; i<26; i++) 
                f[i] = max(f[i], temp[i]);
        }
        
        for(string w1: words1) 
        {
            vector<int> temp(26, 0);
            
            for(char c: w1) 
                temp[c-'a']++;
            
            int i;
            for(i=0; i<26; i++) 
                if(temp[i] < f[i]) 
                    break;
            if(i==26) 
                res.push_back(w1);
        }
        return res;
    }
};