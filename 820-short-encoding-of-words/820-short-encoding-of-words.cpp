class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s(words.begin(), words.end());
        int res=0;
        for(string word: words)
        {
            for(int i=1; i<word.length(); i++)
                s.erase(word.substr(i));
        }
        for(string word: s)
            res+= word.length()+1;
        return res;
    }
};