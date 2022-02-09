class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0;
       
        for(int num:nums)
        {
            if(k == 0 && mp[num] == 1)
            {
                ans++;
            }
            else if(k > 0 && mp[num] == 0)
            {
                ans += mp.count(num - k) + mp.count(num + k);
            }
            mp[num]++;
        }
        return ans;
    }
};