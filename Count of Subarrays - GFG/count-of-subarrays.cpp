// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    // code here
	    
	   ll p =   n ;
	   
	    p = ((ll)(n)*(n+1))/2;
	    
	    
	    ll s=0 ;
	   int i=0 ;
	   while(i<n)
	   {
	       if(arr[i]>k)
	       {
	           i++ ;
	           continue ;
	           
	       }
	       int cnt =0 ;
	       while(i<n and arr[i]<=k)
	       {
	           cnt++ ;
	           i++;
	       }
	       s+= cnt*(cnt+1)/2 ;
	       
	       
	   }
	   return p-s ;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends