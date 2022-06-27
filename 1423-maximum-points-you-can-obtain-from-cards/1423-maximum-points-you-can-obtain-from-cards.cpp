class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        int total = 0, score = 0;
        for(int i=0; i<k; i++)
            total += cardPoints[i];
        
        score = total;
        
        for(int i=0; i<k; i++)
        {
            total += cardPoints[n-1-i] - cardPoints[k-1-i];
            score = max(score, total);
        }
        return score;
    }
};