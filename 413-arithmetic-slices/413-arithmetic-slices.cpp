class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0;
        
        if(nums.size() <= 2)
        {
            return 0;
        }

        for(int i=0;i<=nums.size()-3;i++)
        {
            int difference = nums[i+1] - nums[i];
            
            for(int j=i+2;j<nums.size();j++)
            {
                if(nums[j]-nums[j-1] == difference)
                {
                    res++;
                }
                else
                    break;
            }
        }
        return res;
    }
};