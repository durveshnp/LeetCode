class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int res = 0;
        int maxxor = INT_MIN;
        
        int n = nums.size();
        
        for(int i=0;i<(1<<n);i++)
        {
            int x = 0;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                    x |= nums[j];
            }
            if(x > maxxor)
            {
                maxxor = x;
                res = 1;
            }
            else if(x == maxxor)
                res++;
        }
        return res;
    }
};