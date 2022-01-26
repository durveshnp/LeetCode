class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i=0;i<n;i++)
            res[i] = 1;
        int s = 1;
        int e = 1;
        
        for(int i=0;i<n;i++)
        {
            res[i] *= s;
            s *= nums[i];
            res[n-i-1] *= e;
            e *= nums[n-i-1];
        }
        return res;
    }
};