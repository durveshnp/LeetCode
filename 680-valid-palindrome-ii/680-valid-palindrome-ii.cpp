class Solution {
public:
    bool validPalindrome(string str) {
        
        if(str.size() <= 2) 
            return true;
        
        int s = 0, e = str.size()-1;
        
        while(s <= e)
        {
            if(str[s]==str[e])
            {
                s++;
                e--;
            }
            else 
            {
                int tmps = s+1;
                int start = e;
                while(tmps <= start && str[tmps] == str[start])     
                {
                    tmps++;
                    start--;
                }
                
                if(tmps >= start) 
                    return true;
                
            
                int tmpe = s;
                int end = e-1;
                while(tmpe <= end && str[tmpe]==str[end]) 
                {
                    tmpe++;
                    end--;
                }
                if(tmpe>=end) 
                    return true;

                return false;

            }
 
        }
        
        return true; 
    }
};