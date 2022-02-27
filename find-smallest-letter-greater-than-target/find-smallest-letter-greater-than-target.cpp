class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l=0, h=n;
        
        while(l<h)
        {
            int mid=(l+h)/2;
            if(letters[mid]>target)
                h=mid;
            else
                l=mid+1;
        }
        return letters[l%n];
    }
};