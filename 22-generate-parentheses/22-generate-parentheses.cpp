class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        
        string temp;
        generate(0,0,n,temp,res);
        return res;
    }
    
    void generate(int open, int close, int n, string &temp, vector<string> &res)
    {
        if(temp.size()==n*2)
            res.push_back(temp);
        
        string str="()";
        if(open<n)
        {
            temp.push_back(str[0]);
            generate(open+1,close,n,temp,res);
            temp.pop_back();
        }
        if(close<open)
        {
            temp.push_back(str[1]);
            generate(open,close+1,n,temp,res);
            temp.pop_back();
        }
    }
};