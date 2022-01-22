class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> res(n+1, false);
        
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j * j <= i; j++) 
            {
                if (res[i - j*j] == false) 
                {
                    res[i] = true;
                    break;
                }
            }
        }
        return res[n];
    }
};