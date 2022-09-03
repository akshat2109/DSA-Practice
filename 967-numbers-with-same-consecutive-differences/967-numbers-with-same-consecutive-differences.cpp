class Solution {
public:
    vector<int> res;
    void dfs(int n, int k, int num) {
        if(!n) {
            res.push_back(num);
            return;
        }
        
        int digit = num % 10;
        
        if(digit + k < 10)
            dfs(n-1, k, num*10 + digit + k);
        
        if(k && digit - k >= 0)
            dfs(n-1, k, num*10 + digit - k);
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int i=1; i<=9; i++)
            dfs(n-1, k, i);
              
        return res;
    }
};