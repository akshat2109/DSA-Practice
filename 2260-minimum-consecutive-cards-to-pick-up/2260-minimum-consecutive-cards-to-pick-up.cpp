class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        //sliding window & hashing
        int minc=INT_MAX;
        int i=0, j=0;
        
        unordered_map<int,int> m;
        
        while(j<cards.size())
        {
            m[cards[j]]++;
            
            
            while(m[cards[j]] >1)
            {
                minc = min(minc, j-i+1);
                m[cards[i]]--;
                i++;  
            }
            j++;
                
        }
        return minc==INT_MAX?-1:minc;
        
    }
};