class Solution {
public:
    bool canBeValid(string s, string locked) {
        int unlock=0, open=0, close=0;
        
        if(s.size()%2)
            return false;
        for(int i=0; i<s.size(); i++)
        {
            if(locked[i]=='0')
                unlock++;
            else 
            {
                if(s[i]=='(')
                open++;
            else
                close++;
            }
            if(close>(unlock+open))
                return false;
        }
        
        unlock=0, open=0, close=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(locked[i]=='0')
                unlock++;
            else 
            {
                if(s[i]=='(')
                open++;
            else
                close++;
            }
            if(open>(unlock+close))
                return false;
        }
        
        return true;
    }
};