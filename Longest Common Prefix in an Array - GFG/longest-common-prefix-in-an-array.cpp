// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        vector<string>vs;
       for(int i=0; i<N; i++)
       {
           vs.push_back(arr[i]);
       }
       sort(vs.begin(), vs.end());
       string ans="";
       for(int i=0; i<min(vs[0].size(), vs[N-1].size()); i++)
       {
           if(vs[0][i]==vs[N-1][i])
           {
               ans+=vs[0][i];
           }
           else{
               break;
           }
       }
       if(ans.size()>0){
       return ans;
       }
       return "-1";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends