class Solution {
public:
    int candy(vector<int>& ratings) {
        int i, sum=0;
        vector<int> candyy(ratings.size(),1);
        for(i=1; i<ratings.size(); i++)
        {
            if(ratings[i] > ratings[i-1])
                candyy[i] = candyy[i-1]+1;
        }
        sum+=candyy[ratings.size()-1];
        for(i=i-2; i>=0; i--)
        {
            if(ratings[i] > ratings[i+1])
                candyy[i] = max( candyy[i], candyy[i+1]+1 );
            
            sum+=candyy[i];
        }
        return sum;
    }
};