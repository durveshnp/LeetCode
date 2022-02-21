// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int optimalSearchTree(int keys[], int freq[], int n)
    {
        // code here
        int sum=0;
       vector<int> pre(n+1);
       pre[0]=0;
       for(int i=1;i<=n;i++)
       {
           pre[i]=pre[i-1]+freq[i-1];
       }
     int dp[n][n];
  
     for(int g=0;g<n;g++)
     {
         for(int i=0,j=g;j<n;i++,j++)
         {
             if(g==0)
             {
                 dp[i][j]=freq[i];
             }
             else if(g==1)
             {
                 dp[i][j]=min(freq[i]*1+freq[j]*2,freq[i]*2+freq[j]*1);
             }
             else{
                 int ans=INT_MAX;
                 for(int k=i;k<=j;k++)
                 {
                     int left,right;
                     if(k==i)       
                     left=0;
                     else left=dp[i][k-1];
                     
                     if(k==j)
                     {
                         right=0;
                     }
                     else right=dp[k+1][j];
                     ans=min(ans,left+right);
                 }
                 dp[i][j]=ans+pre[j+1]-pre[i];
             }
         }
     }
     return dp[0][n-1];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int keys[n];
        for(int i=0;i<n;i++)cin>>keys[i];
        int freq[n];
        for(int i=0;i<n;i++)cin>>freq[i];
        Solution ob;
        cout<<ob.optimalSearchTree(keys, freq, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends