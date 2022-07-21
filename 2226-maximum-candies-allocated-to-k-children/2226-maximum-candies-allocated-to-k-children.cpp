class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int high = *max_element(candies.begin(), candies.end());
        int low = 0;
        
        
        while(low < high)
        {
            int mid = (high+low+1)/2;
            long sum = 0;
            for(int i = 0; i<candies.size(); i++)
            {
                sum += candies[i]/mid;
            }
            if(sum < k)
                high = mid-1;
            else
                low = mid;
            
        }
        return low;
    }
};