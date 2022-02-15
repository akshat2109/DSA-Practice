// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &nums, int n, int target) {
        vector<int> res;
        int l = 0 , r = n-1, temp=-1;
        
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] < target )
                l = mid + 1;
            else if(nums[mid] > target)
                r = mid - 1;
            else{
                temp=mid ;
                r = mid -1;
            }
        }
        
        if(temp==-1)
        {
            res.push_back(temp);
            return res;
        }
        res.push_back(temp);
        r = nums.size() - 1;
        
        while(l <= r)
        {
            int mid = l+ (r-l)/2 ;
            if(nums[mid] > target )
                r = mid - 1;
            else if(nums[mid] < target)
                l = mid + 1;
            else{
                temp=mid;
                l = mid +1 ;
            }
        }
        res.push_back(temp);
        return res;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends