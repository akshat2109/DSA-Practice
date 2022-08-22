class Solution {
public:
    int trap(vector<int>& height) {
        int rain = 0;
        int lmax = 0, rmax = 0;
        int i = 0, j = height.size()-1;
        
        while(i <= j)
        {
            if(height[i] <= height[j])
            {
                if(height[i] > lmax)
                    lmax = height[i];
                else
                    rain += lmax - height[i];
                
                i++;
            }
            
            else
            {
                if(height[j] > rmax)
                    rmax = height[j];
                else
                    rain += rmax - height[j];
                
                j--;
            }
        }
        return rain;
    }
};