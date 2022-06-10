class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = true;
        int n = digits.size()-1;
        int carry = 1;
        while(n >=0 && flag)
        {
            if(digits[n]+carry > 9)
            {
                digits[n] = 0;
                carry = 1;
                flag = true;
            }
            else
            {
                digits[n] = digits[n]+carry;
                carry = 0;
                flag = false;
            }
            n--;
        }
        
        if(flag)
            digits.insert(digits.begin(),1);
        
        return digits;
    }
};