// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int suma = 0, sumb = 0;
        for(int i=0;i<n;i++)
            suma += A[i];
            
        for(int i=0;i<m;i++)
            sumb += B[i];
            
        int dif = abs(suma-sumb);
        
        if(dif%2 != 0)
            return -1;
        else
        {
            int add=dif/2;
           unordered_map<int ,int> map;

            // store the array values in hash map which have greater sum and traverse another array .
           if(suma>=sumb)
           {
               for(int i=0;i<n;i++)
               {
                   map[A[i]]++;
               }
               for(int i=0;i<m;i++)
               {

                  // check the below condition .
                   if(map.find(B[i]+add)!=map.end())
                   {
                       return 1;
                   }
               }
               return -1;
           }
           else if(sumb>suma)
           {
               for(int i=0;i<m;i++)
               {
                   map[B[i]]++;
               }
               for(int i=0;i<n;i++)
               {
                   if(map.find(A[i]+add)!=map.end())
                   {
                       return 1;
                   }
               }
               return -1;
           }
        }
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends