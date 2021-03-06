class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> seq;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                    seq.push_back(nums[j]);
            }
            res.push_back(seq);
        }
        return res;
    }
};