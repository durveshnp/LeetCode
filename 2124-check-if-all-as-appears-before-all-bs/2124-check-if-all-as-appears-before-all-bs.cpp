class Solution {
public:
    bool checkString(string s) {
        int a = -1, b = -1;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a')
                a = i;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'b')
            {
                b = i;
                break;
            }
        }
        if(b == -1)
            return true;
        if(a < b)
            return true;
        else
            return false;
            
    }
};