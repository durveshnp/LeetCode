class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0)
            return true;
        int start = 0;
        int len  = s.length();
        for(int i=0;i<t.size();i++)
        {
            if(s[start] == t[i])
                start++;
            if(start == len)
                return true;
        }
        return false;
    }
};