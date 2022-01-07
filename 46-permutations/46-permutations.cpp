class Solution {
public:
    
    void allPermutations(vector<int> nums,vector<int> &per,bool arr[],vector<vector<int>> &res)
    {
        if(nums.size() == per.size())
        {
            res.push_back(per);
            //return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i] == false)
            {
                arr[i] = true;
                per.push_back(nums[i]);
                allPermutations(nums,per,arr,res);
                per.pop_back();
                arr[i] = false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> per;
        int n = nums.size();
        bool arr[n];
        for(int i=0;i<n;i++)
            arr[i] = false;
        allPermutations(nums,per,arr,res);
        
        return res;
    }
};