class Solution {
public:
    
    void combination(int ind,vector<int> nums,vector<int> &seq,vector<vector<int>> &res)
    {
        res.push_back(seq);
        
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i] == nums[i-1])
                continue;
            seq.push_back(nums[i]);
            combination(i+1,nums,seq,res);
            seq.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> seq;
        combination(0,nums,seq,res);
        
        return res;
    }
};