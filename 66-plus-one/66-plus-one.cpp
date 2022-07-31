class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size()-1;
        int carry=1;
        for(int i=n; i>=0 && carry!=0; i--)
        {
            int a= digits[i]+carry;
            carry= a/10;
            digits[i] =  a%10 ;
        }
        if(carry)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};