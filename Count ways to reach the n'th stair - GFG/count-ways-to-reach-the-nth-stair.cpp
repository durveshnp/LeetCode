// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        vector<int> res(n,0);
        if(n == 1 || n == 2)
            return n;
        int mod = 1000000007;
        res[0] = 1;
        res[1] = 2;
        
        for(int i=2;i<n;i++)
            res[i] = ((res[i-1]%mod)+(res[i-2]%mod))%mod;
        
        return res[n-1];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends