class Solution {
public:
    int myAtoi(string s) {
        
        int n = s.size();
        int i = 0;
        long res = 0;
        bool positive = true;
        
        while(s[i] == ' ')
            i++;
        
        if(i<n and s[i] == '+')
        {
            i++;
        }
        else if(i<n and s[i] == '-')
        {
            positive = false;
            i++;
        }
        
        while (i < n and (s[i] >= '0' and s[i] <= '9')) 
        {
            res *= 10;
            res += (s[i] - '0');
            if (res > INT_MAX)
            {
                if(positive)
                {
                    return INT_MAX;
                }
                else
                {
                    return INT_MIN;
                }
            }
            i++;
        }
        if(positive)
            return res;
        else
            return -1*res;
    }
};