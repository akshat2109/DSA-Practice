class Solution {
public:
    int majorityElement(vector<int>& a) {
        int size = a.size();
        
        if(size == 1)
            return a[0];
        
        sort(a.begin(),a.end());
            
        int max = 0, count = 1, maj = a[0], ele;
        
        for(int i=1; i<size; i++)
        {

            if(maj == a[i])
                count++;
                
            else
            {
                count = 1;
                maj = a[i];
            }
                
            if(max < count)
            {
                max = count;
                ele = a[i];
                
                if(max > (size/2))
                    return ele;
            }
        }
        return -1;
    }
};