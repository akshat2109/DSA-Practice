class Solution {
public:
    bool isSquare(vector<int>& matchsticks, vector<int> allSide, int side, int idx)
    {
        if(idx == matchsticks.size())
            return true;
        
        for(int i=0; i<4; i++)
        {
            if (allSide[i] + matchsticks[idx] > side)
                continue;
            
            int j = i ;
            while ( --j >= 0) 
                if ( allSide[i] == allSide[j])
                    break;
            
            if ( j != -1 ) continue ;
            
            allSide[i] += matchsticks[idx];
            if(isSquare(matchsticks, allSide, side, idx+1))
                return true;
            allSide[i] -= matchsticks[idx];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
            
        int sum= 0;
        for(int m: matchsticks)
            sum += m;
        
        if(sum % 4)
            return false;
        
        vector<int> allSide(4,0);
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        
        return isSquare(matchsticks, allSide, sum/4, 0);
    }
};