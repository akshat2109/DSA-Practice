class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size()==0)
            return res;
        vector<string> let{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        generate(digits, 0, let, temp, res);
        return res;
    }
    void generate(string digits, int idx, vector<string> &let, string &temp, vector<string> &res)
    {
        if(idx == digits.size())
        {
            res.push_back(temp);
            return;
        }
        
        
            string str = let[digits[idx]-'2'];
            for(int i=0; i<str.size(); i++)
            {
                temp.push_back(str[i]);
                generate(digits, idx+1, let, temp, res);
                temp.pop_back();
            }
        
    }
};