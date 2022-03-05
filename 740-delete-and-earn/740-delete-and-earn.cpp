class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size() == 0) 
            return 0;
        
        sort(nums.begin(), nums.end());
        
        int in = nums[0];
        int ex = 0;

        for(int i=1; i < nums.size(); i++) 
        {
            int last = max(in,ex);
            if(nums[i] > nums[i-1] + 1) 
            {
                in = last + nums[i];
                ex = last;
            }
            else if(nums[i] == nums[i-1])
            {
                in = in + nums[i];
            }
            else 
            {
                in = ex + nums[i];
                ex = last;
            }
        }
        return max(in,ex);
    }
};