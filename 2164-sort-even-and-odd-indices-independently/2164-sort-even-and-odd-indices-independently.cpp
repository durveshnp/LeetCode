class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i%2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
        vector<int> res(nums.size());
        int i = 0, j = 0;
        
        for(int k=0;k<nums.size();k++)
        {
            if(k%2 == 0)
                res[k] = even[i++];
            else
                res[k] = odd[j++];
        }
        return res;
    }
};