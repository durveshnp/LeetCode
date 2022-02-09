class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> tmp(n+1, 0);
        
        for (auto x : trust)
        {
            tmp[x[0]]--; 
            tmp[x[1]]++;
        }
            
        for (int i = 1; i <= n; i++)
        {
            if (tmp[i] == n-1) 
                return i;
        }
        return -1;
    }
};