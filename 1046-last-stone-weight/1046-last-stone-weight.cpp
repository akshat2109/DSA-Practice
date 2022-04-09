class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(),stones.end());
        
        while(heap.size()>1)
        {
            int x,y;
            y=heap.top();
            heap.pop();
            x=heap.top();
            heap.pop();
            
            if(x!=y)
                heap.push(y-x);
        }
        
        return heap.size()?heap.top():0;
    }
};