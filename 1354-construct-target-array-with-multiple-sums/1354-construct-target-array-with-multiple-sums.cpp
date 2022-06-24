class Solution {
public:
    bool isPossible(vector<int>& target) {
        //reverse array approach
        priority_queue<int> pq(target.begin(), target.end());
        long sum=0;
        for(auto i: target)
            sum+=i;
        
        while(pq.top()>1)
        {
            int x= pq.top();
            pq.pop();
            sum-=x;
            
            if(x<=sum || sum<1)
                return false;
            
            x%=sum;
            sum+=x;
            if(x>=1)
                pq.push(x);
            else
                pq.push(sum);
        }
        return true;
    }
};