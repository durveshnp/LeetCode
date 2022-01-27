class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int n1 = num1.size()-1;
        int n2 = num2.size()-1;
        int carry = 0;
        
        while(n1 >= 0 && n2 >= 0)
        {
            int res = (num1[n1]-48)+(num2[n2]-48)+carry;
            if(res > 9)
            {
                carry = 1;
                res = (res%10);
            }
            else
                carry = 0;
            ans = (char)(res+48) + ans;
            n1--;
            n2--;
        }
        
        while(n1 >= 0)
        {
            int res = (num1[n1]-48)+carry;
            if(res > 9)
            {
                carry = 1;
                res = (res%10);
            }
            else
                carry = 0;
            ans = (char)(res+48) + ans;
            n1--;
        }
        
        while(n2 >= 0)
        {
            int res = (num2[n2]-48)+carry;
            if(res > 9)
            {
                carry = 1;
                res = (res%10);
            }
            else
                carry = 0;
            ans = (char)(res+48) + ans;
            n2--;
        }
        
        if(carry == 1)
            ans = (char)(49) + ans;
        
        return ans;
        
    }
};