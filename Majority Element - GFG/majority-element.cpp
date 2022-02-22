// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    //Moore Voting Algorithm
    
    int majorityElement(int a[], int size)
    {
        int max = 0, count = 1, maj = 0;
        
        if(size == 1)
            return a[0];
        
        for(int i=1; i<size; i++)
        {
            if(a[i] == a[max])
            count++;
            
            else
            count--;
            
            if(count == 0)
            {
                max = i;
                count = 1;
            }
            
        }
        
        for(int i=0; i<size; i++)
            if(a[i] == a[max])
                maj++;
        
        if(maj > size/2)
        return a[max];
        
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends