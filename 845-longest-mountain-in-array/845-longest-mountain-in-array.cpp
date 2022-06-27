class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res=0;
        int u,d, i=0;
        while(i<arr.size()-1)
        {
            while(i < arr.size()-1 && arr[i] == arr[i+1])
                i++;
            
            u=0, d=0;
            while(i < arr.size()-1 && arr[i] < arr[i+1])
                u++,i++;
            
            while(i < arr.size()-1 && arr[i] > arr[i+1])
                d++,i++;
            
            if(u && d)
                res = max(res, u+d+1);
        }
        return res;
    }
};