class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        vector<int> sum1;
        unordered_map<int,int> sum2;
        int res = 0;
        int n = nums1.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum1.push_back(nums1[i]+nums2[j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum2[nums3[i]+nums4[j]]++;
            }
        }
        
        for(auto x : sum1)
        {
            int ele = (-1)*x;
            if(sum2[ele] > 0)
            {
                res += sum2[ele];
                // sum2[ele]--;
            }
        }
        
        return res;
    }
};