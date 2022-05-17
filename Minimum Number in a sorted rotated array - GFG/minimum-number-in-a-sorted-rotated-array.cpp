// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
       int s = low;
       int e = high;
       int mid = s + (e-s)/2;
       
       while(s<e)
       {
           if(arr[mid] >= arr[0])
               s = mid+1;
           else
               e = mid;
           
           mid = s + (e-s)/2;
       }
       
       if(arr[s]<arr[0])
           return arr[s];
       else
           return arr[0];
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
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends