// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int nums[], int n) {
        vector<int> res;
        
        for(int i=0; i<n; i++)
        {
            int pos= nums[i]%n;
            nums[pos]+=n;
        }
        
        for(int i=0; i<n; i++)
        {
            if((nums[i]/n)>1)
                res.push_back(i);
        }
        
        if(res.empty())
        return {-1};
        
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends