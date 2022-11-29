class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_map<int,int> m;
        vector<long> dp(arr.size(), 1);
        long res = 0, mod = 1e9+7;
        for(int i=0; i<arr.size(); i++)
            m[arr[i]] = i;
        
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<i; j++)
            {
                if(arr[i]%arr[j] == 0)
                {
                    int rem = arr[i]/arr[j];
                    if(m.count(rem))
                        dp[i] = (dp[i] + dp[j] * dp[m[rem]]) % mod;
                }
            }
            res += dp[i] % mod;
        }
        return res % mod;
    }
};