class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b) {
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(), properties.end(), compare);
        
        int weak = 0;
        int maxdefense = INT_MIN;
        
        for(int i=0; i<properties.size(); i++) {
            if(maxdefense > properties[i][1])
                weak++;
            else
                maxdefense = properties[i][1];
        }
        return weak;
    }
};