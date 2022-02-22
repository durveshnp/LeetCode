class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        
        for(char ch : columnTitle)
        {
            res *= 26;
            res += (ch-'A'+1);
        }
        return res;
    }
};