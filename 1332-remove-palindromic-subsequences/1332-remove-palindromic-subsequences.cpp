class Solution {
public:
    
    bool isPalindrome(string s)
    {
        int n = s.size()-1;
        int i = 0;
        
        while(i <= n)
        {
            if(s[i] != s[n])
                return false;
            i++;
            n--;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        if(s.size() == 0)
            return 0;
        if(isPalindrome(s))
            return 1;
        else
            return 2;
    }
};