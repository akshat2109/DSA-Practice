class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res(nums.size(), -1);
        stack<int> s;
        int n = nums.size();
        for(int i=0; i<2*nums.size()-1; i++) {
            
            while(!s.empty() && nums[s.top()] < nums[i%n]) {
                res[s.top()] = nums[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        
        return res;
    }
};