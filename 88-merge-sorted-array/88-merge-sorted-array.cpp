class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp(m+n);
        int i=0,j=0,k=0;
       
        while(j<m&&k<n)
        {
            if(nums1[j]<nums2[k])
                tmp[i++]=nums1[j++];
            else
                tmp[i++]=nums2[k++];  
        }
        
        while(j<m)
            tmp[i++]=nums1[j++];
        
        
        while(k<n)
            tmp[i++]=nums2[k++];
        
        nums1 = tmp;
        
    }
};