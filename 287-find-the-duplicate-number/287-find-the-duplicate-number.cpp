class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int &n : nums)
        {
            if(mp[n] > 0)
                return n;
            else
                mp[n]++;
        }
        
        return -1;
    }
};