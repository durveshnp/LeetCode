class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        int mask = 0;
        unordered_set<int> set;
        
        for(int i = 31; i>=0; i--)
        {
            mask |= (1<<i);
            
            for(int j = 0; j<n; j++)
            {
                set.insert(mask & nums[j]);
            }
            
            int xr = res | (1<<i);
            
            for(auto x : set)
            {
                if(set.find(x ^ xr) != set.end())
                {
                    res = xr;
                    break;
                }
            }
            
            set.clear();
        }
        return res;
    }
};