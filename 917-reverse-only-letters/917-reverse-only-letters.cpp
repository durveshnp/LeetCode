class Solution {
public:
    
    bool isLetter(char ch)
    {
        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
            return true;
        else 
            return false;
    }
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.size()-1;
        
        while(start < end)
        {
            if(isLetter(s[start]) && isLetter(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isLetter(s[start]) == false)
                start++;
            else
                end--;
        }
        return s;
    }
};