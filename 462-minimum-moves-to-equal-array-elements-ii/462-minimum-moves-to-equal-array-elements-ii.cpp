class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int n = nums.size();
        
        int mid = nums[n/2];
        
        for(int i=0;i<nums.size();i++)
        {
            cnt += abs(nums[i]-mid);
        }
        return cnt;
    }
};