class Solution {
public:
    int nextGreaterElement(int n) {

        string s = to_string(n);
        
        int i = s.length()-2, j = s.length()-1;
        
        while(i>=0 && s[i] >= s[i+1])
            i--;
        
        if(i < 0)
            return -1;
        
        while(s[i] >= s[j])
            j--;
        
        swap(s[i], s[j]);
        sort(s.begin()+i+1, s.end());
        
        long long res = stoll(s);
        
        return (res > INT_MAX || res <= n)? -1:res;
    }
};