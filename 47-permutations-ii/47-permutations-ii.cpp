class Solution {
public:
    void permute(int pos,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(pos >= nums.size())
        {
            ans.push_back(nums);
        }
        
        unordered_set<int> set;
        
        for(int i=pos;i<nums.size();i++)
        {
            if(set.find(nums[i]) != set.end())
                continue;
            set.insert(nums[i]);
            swap(nums[i],nums[pos]);
            permute(pos+1,nums,ans);
            swap(nums[i],nums[pos]);
        }
        
    }
    
    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int>> ans;
        
        permute(0,num,ans);
        
        return ans;
    }
};