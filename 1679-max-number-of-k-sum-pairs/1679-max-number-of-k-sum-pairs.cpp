class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int,int> mp;
        
        for(int &num : nums)
        {
            if(mp[k-num])
            {
                cnt++;
                mp[k-num]--;
            }
            else
                mp[num]++;
        }
        return cnt;
    }
};