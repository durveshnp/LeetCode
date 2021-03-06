// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
    public:
    int build_bridges(string str1, string str2)
    {
        // code here
            int n=str1.length(),m=str2.length();
            int dp[n+1][m+1];
            for(int i=0;i<n+1;i++)
            {
               for(int j=0;j<m+1;j++)
               {
                   if(i==0 || j==0)
                   {
                       dp[i][j]=0;
                   }
               }
           }
           
           for(int i=1;i<n+1;i++)
           {
               for(int j=1;j<m+1;j++)
               {
                   if(str1[i-1]==str2[j-1])
                   {
                       dp[i][j]=1+dp[i-1][j-1];
                   }
                   else
                   {
                       dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                   }
               }
           }
           return dp[n][m];
    }
};

// { Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends