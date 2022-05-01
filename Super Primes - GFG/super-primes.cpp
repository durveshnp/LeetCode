// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int superPrimes(int n)
	{
	    // Your code goes here
	    
	    bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        
        prime[1] = false;
 
        for (int p = 2; p * p <= n; p++) 
        {
        
            if (prime[p] == true) 
            {
            
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        
        int ans = 0;
        
        for(int i=3;i<=n;i++)
        {
            if(prime[i] && prime[i-2])
                ans++;
        }
	    
	    return ans;
	    
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
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends