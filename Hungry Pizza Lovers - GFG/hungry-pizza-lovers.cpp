// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends

bool cmp(vector<int>& a,vector<int>& b)
{
   if(a[0]!=b[0])
      return a[0]<b[0];
      
    return a[1]<b[1];
}

vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
    vector<vector<int>>v;
   for(int i=0;i<arr.size();i++)
   {
       int a=arr[i][0];
       int b=arr[i][1];
       v.push_back({a+b,i+1});
   }
   
   sort(v.begin(),v.end(),cmp);
   vector<int>ans;
   for(auto it:v){
       ans.push_back(it[1]);
       
   }
   return ans;
    
}