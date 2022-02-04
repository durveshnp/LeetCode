class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        
        while(n  > 1)
        {
            res += n/2;
            n = ceil((float)n/2);
        }
        
        return res;
    }
};