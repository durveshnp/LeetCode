class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(n == 1)
            return true;
        int f = 0;
        int small = 0;
        int capital = 0;
        
        if(word[0]>='A' && word[0]<='Z')
            f = 1;
        
        for(char ch : word)
        {
            if(ch>='A' && ch<='Z')
                capital++;
            else
                small++;
        }
        
        if(f)
        {
            if(capital == n || small == n-1)
                return true;
            else
                return false;
        }
        else
        {
            if(small == n)
                return true;
            else
                return false;
        }
        
    }
};