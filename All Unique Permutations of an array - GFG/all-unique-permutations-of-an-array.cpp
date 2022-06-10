// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

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
    
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        vector<vector<int>> ans;
        
        permute(0,arr,ans);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends