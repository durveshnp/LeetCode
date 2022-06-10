class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long long rev = 0;
        int num = x;
        
        while(num)
        {
            rev = rev * 10;
            rev += num%10;
            
            num /= 10;
        }
        
        if(rev == x)
            return true;
        else
            return false;
        
    }
};