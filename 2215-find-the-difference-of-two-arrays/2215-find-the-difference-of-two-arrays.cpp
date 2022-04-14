class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        
        for(int num : nums1)
            mp1[num]++;
        
        for(int num : nums2)
            mp2[num]++;
        
        vector<vector<int>> res;
        
        vector<int> v1,v2;
        
        for(auto ele : mp1)
        {
            if(mp2[ele.first] == 0)
                v1.push_back(ele.first);
        }
        
        for(auto ele : mp2)
        {
            if(mp1[ele.first] == 0)
                v2.push_back(ele.first);
        }
        
        res.push_back(v1);
        res.push_back(v2);
        
        return res;
    }
};