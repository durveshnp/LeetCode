// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
        long long int ans=0;
        long long int sum=0;
        for(long long int i=1;i<=n;i++){
            sum+=(i*i);
            if(sum<=n){
                ans=i;
            }else{
                break;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends