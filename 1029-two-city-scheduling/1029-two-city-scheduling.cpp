class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int ans = 0;
        
        vector<int> dif(n);
        
        for(int i=0;i<n;i++)
        {
            dif[i] = costs[i][0]-costs[i][1];
            ans += costs[i][0];
        }
        
        sort(dif.begin(),dif.end(),greater<int>());
        
        for(int i=0;i<n/2;i++)
            ans -= dif[i];
        
        return ans;
        
    }
};