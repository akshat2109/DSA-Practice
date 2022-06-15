class Solution {
public:
    static bool sortlen(string& s1, string& s2)
    {
        return s1.size() < s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), sortlen);
        
        map<string, int> dp;
        int res=0;
        
        for(string word: words)
        {
            for(int i=0; i<word.size(); i++)
            {
                string pred= word.substr(0,i) + word.substr(i+1,word.size());
                dp[word] = max(dp[word], dp[pred]+1);
            } 
            res= max(res, dp[word]);
        }
        return res;
    }
};