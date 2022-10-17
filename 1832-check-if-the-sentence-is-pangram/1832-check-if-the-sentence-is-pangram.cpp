class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> m;
        
        for(char c: sentence) {
            m[c]++;
        }
        return m.size()==26 ? true : false;
    }
};