class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long res = 0;
        long long cnt1 = 0, cnt2 = 0;
        for (char ch: text) 
        {   
            if (ch == pattern[1])
            {
                res += cnt1;
                cnt2++;
            }
            if (ch == pattern[0])
                cnt1++;
        }
        return res + max(cnt1, cnt2);
    
    }
};