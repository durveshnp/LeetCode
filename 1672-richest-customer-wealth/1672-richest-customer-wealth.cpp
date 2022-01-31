class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        
        for(auto customer : accounts)
        {
            int total = 0;
            for(auto  wealth: customer)
            {
                total += wealth; 
            }
            res = max(res,total);
        }
        return res;
    }
};