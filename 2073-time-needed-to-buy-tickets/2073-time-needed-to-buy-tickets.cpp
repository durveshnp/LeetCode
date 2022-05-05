class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt = 0;
        int ele = tickets[k];
        
        int ans = 0;
        
        for(int i=0;i<tickets.size();i++)
        {
            if(i <= k)
                ans += min(ele,tickets[i]);
            else
                ans += min(ele-1,tickets[i]);
        }
        
        
        return ans;
        
    }
};