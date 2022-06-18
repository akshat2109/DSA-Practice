class WordFilter {
public:
    unordered_map<string,int> m;
    WordFilter(vector<string>& words) {
        
        for(int i=0; i<words.size(); i++)
        {
            string word= words[i];
            for(int j=0; j<=word.size(); j++)
            {
                string prefix= word.substr(0,j);
                
                for(int k=0; k<word.size(); k++)
                {
                    string suffix= word.substr(k,word.size());
                    m[prefix+ '#' +suffix]= i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string s= prefix+ '#' +suffix;
        return m[s]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */