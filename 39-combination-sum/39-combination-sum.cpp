class Solution {
public:
    
    void combination(int ind,vector<int> nums,int target,vector<int> &seq,vector<vector<int>> &res)
    {
        if(target < 0)
            return;
        if(ind == nums.size())
        {
            if(target == 0)
            {
                res.push_back(seq);
            }
            return;
        }
        
        seq.push_back(nums[ind]);
        combination(ind,nums,target-nums[ind],seq,res);
        seq.pop_back();
        combination(ind+1,nums,target,seq,res);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> seq;
        
        combination(0,candidates,target,seq,res);
        return res;
    }
};