class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        map<char, string> m;
        set<string> st;
        for(int i=0; i<26; i++)
            m['a'+i] = morse[i];
        
        for(auto w: words)
        {
            string s;
            for(auto c: w)
                s += m[c];
            st.insert(s);
        }
        return st.size();
    }
};