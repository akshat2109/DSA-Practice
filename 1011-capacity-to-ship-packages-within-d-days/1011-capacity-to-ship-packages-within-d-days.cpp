class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int x= *max_element(weights.begin(), weights.end());
        int y= accumulate(weights.begin(), weights.end(), 0);
        
        while(x<y)
        {
            int mid= x+ (y-x)/2;
            int cnt=1, sum=0;
            for(int i=0; i<weights.size(); i++)
            {
                if(mid < sum+weights[i])
                {
                    cnt++;
                    sum=0;
                }
                sum+= weights[i];
            }
            if(cnt > days)
                x= mid+1;
            else
                y= mid;
        }
        return x;
    }
};