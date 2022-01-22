class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int low = i+1;
            int high = n-1;
            
            while(low < high)
            {
                if((nums[i]+nums[low]+nums[high]) == 0)
                {
                    vector<int> tmp = {nums[i],nums[low],nums[high]};
                    res.push_back(tmp);
                    
                    while(low < high && nums[high] == nums[high-1])
                        high--;
                    while(low < high && nums[low] == nums[low+1])
                        low++;
                    
                    low++;
                    high--;
                }
                else if((nums[i]+nums[low]+nums[high]) > 0)
                    high--;
                else
                    low++;
            }
            
        }
        return res;
    }
};