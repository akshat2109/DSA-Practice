class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> res(searchWord.size());
        int i=0, a=0, b=products.size()-1;
        
        while(i<searchWord.size() && a<=b)
        {
            while(a<=b && products[a][i] != searchWord[i])
                a++;
            
            while(a<=b && products[b][i] != searchWord[i])
                b--;
            
            for(int j=a; j<=b && j<a+3; j++)
                res[i].push_back(products[j]);
            
            i++;
        }
        
        return res;
    }
};