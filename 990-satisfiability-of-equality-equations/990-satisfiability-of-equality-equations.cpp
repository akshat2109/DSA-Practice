class Solution {
public:
    int uf[26];
    
    int find(int x) {
        return x == uf[x] ? x : uf[x] = find(uf[x]);
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        for (int i = 0; i < 26; ++i) 
            uf[i] = i;
        
        for (string e : equations)
            if (e[1] == '=')
                uf[find(e[0] - 'a')] = find(e[3] - 'a');
        
        for (string e : equations)
            if (e[1] == '!' && find(e[0] - 'a') == find(e[3] - 'a'))
                return false;
        
        return true;
    }
};