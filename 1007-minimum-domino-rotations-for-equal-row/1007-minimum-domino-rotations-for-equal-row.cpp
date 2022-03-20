class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> cnttop(7), cntbottom(7), cntSame(7);
        int n = tops.size();
        for (int i = 0; i < n; i++) 
        {
            int a = tops[i], b = bottoms[i];
            cnttop[a] += 1;
            cntbottom[b] += 1;
            if (a == b) 
                cntSame[a] += 1;
        }
        int ans = n;
        for (int i = 1; i <= 6; i++) 
        {
            if(cnttop[i] + cntbottom[i] - cntSame[i] == n) 
            {
                int swap = min(cnttop[i], cntbottom[i]) - cntSame[i];
                ans = min(ans, swap);
            }
        }   
        if(ans == n)
            return -1;
        else
            return ans;
    }
};