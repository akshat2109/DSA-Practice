class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s;
        
        for(int a: asteroids) {
            
            while(!s.empty() && s.back()>0 && s.back()<-a)
                s.pop_back();
            
            if(s.empty() || a>0 || s.back()<0)
                s.push_back(a);
            
            else if(a<0 && s.back() == -a)
                s.pop_back();
        }
        return s;
    }
};