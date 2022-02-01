class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min = INT_MAX;
        
        for(int stk : prices)
        {
            if(stk < min)
            {
                min = stk;
            }
            else
            {
                ans = max(ans,stk-min);
            }
        }
        
        return ans;
    }
};