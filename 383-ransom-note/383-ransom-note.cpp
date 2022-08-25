class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r = ransomNote.size(), m = magazine.size();
        int i;
        unordered_map<char, int> mp;
        for(i=0; i<r; i++)
        {
            mp[ransomNote[i]]++;
        }
        for(i=0; i<m; i++)
        {
            mp[magazine[i]]--;
        }
        
        for(i=0; i<r; i++)
            if(mp[ransomNote[i]] > 0)
                return false;
        
        return true;
    }
};