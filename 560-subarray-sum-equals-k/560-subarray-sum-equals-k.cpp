class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int sum = 0;
        map<int,int> mp;
        mp[0]++;
        
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            res += mp[sum-k];
            mp[sum]++;
        }
       
        return res;
        
    }
};