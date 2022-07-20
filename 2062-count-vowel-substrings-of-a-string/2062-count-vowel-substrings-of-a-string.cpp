class Solution {
public:
    bool isVowel(char v)
    {
        return v=='a' || v=='e' || v=='i' || v=='o' || v=='u';
    };
    int countVowelSubstrings(string word) {
        
        unordered_map<char, int> m;
        int res=0;
        
        for(int i=0; i<word.length(); i++)
        {
            m.clear();
           for(int j=i; j<word.length(); j++)
           {
               if(!isVowel(word[j]))
                   break;
                m[word[j]]++;
               
               if(m.size() == 5)
                    res++;
            }
        }
        return res;
    }
};