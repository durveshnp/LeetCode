class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.size()-1;
        int n2 = b.size()-1;
        string res = "";
        int carry = 0;
        
        while(n1 >= 0 && n2 >= 0)
        {
            int num1,num2;
            if(a[n1] == '1')
                num1 = 1;
            else
                num1 = 0;
            
            if(b[n2] == '1')
                num2 = 1;
            else
                num2 = 0;
           
            int ans = num1+num2+carry;
            
            switch(ans)
            {
                case 0:
                    res = '0'+res;
                    carry = 0;
                    break;
                case 1:
                    res = '1'+res;
                    carry = 0;
                    break;
                case 2:
                    res = '0'+res;
                    carry = 1;
                    break;
                case 3:
                    res = '1'+res;
                    carry = 1;
                    break;
            }
            
            n1--;
            n2--;
        }
        
        while(n1>=0)
        {
           int num1,num2;
            if(a[n1] == '1')
                num1 = 1;
            else
                num1 = 0;
            
            int ans = num1+carry;
            
            switch(ans)
            {
                case 0:
                    res = '0'+res;
                    carry = 0;
                    break;
                case 1:
                    res = '1'+res;
                    carry = 0;
                    break;
                case 2:
                    res = '0'+res;
                    carry = 1;
                    break;
                case 3:
                    res = '1'+res;
                    carry = 1;
                    break;
            }
            
            n1--;
        }
        while(n2>=0)
        {
            int num1,num2;
            
            if(b[n2] == '1')
                num2 = 1;
            else
                num2 = 0;
            
            int ans = num2+carry;
            
            switch(ans)
            {
                case 0:
                    res = '0'+res;
                    carry = 0;
                    break;
                case 1:
                    res = '1'+res;
                    carry = 0;
                    break;
                case 2:
                    res = '0'+res;
                    carry = 1;
                    break;
                case 3:
                    res = '1'+res;
                    carry = 1;
                    break;
            }
            n2--;
        }
        
        if(carry == 1)
        {
            res = '1'+res;
        }
            
        
        return res;
    }
};