class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int diff=0, i;
        for(i=0; i<heights.size()-1; i++)
        {
            diff= heights[i+1]-heights[i];
            
            if(diff<=0)
                continue;
            
            bricks-=diff;
            pq.push(diff);
            
            if(bricks<0)
            {
                ladders--;
                bricks+=pq.top();
                pq.pop();  
            }
            
            if(ladders<0)
                break;
        }
        return i;
    }
};