// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int k )
{
    // code here
    
     int first = -1;
   int last = -1;

   int si = 0;
   int ei = n - 1;

   // To find first position
   while(si <= ei)
   {
       int mid = si + (ei - si) / 2;

       if(arr[mid] == k)
       {
           first = mid;
           ei = mid - 1;
       }
       else if(arr[mid] < k)
       {
           si = mid + 1;
       }
       else
       {
           ei = mid - 1;
       }
   }

   si = 0;
   ei = n - 1;

   // To find last position
   while(si <= ei)
   {
       int mid = si + (ei - si) / 2;

       if(arr[mid] == k)
       {
           last = mid;
           si = mid + 1;
       }
       else if(arr[mid] < k)
       {
           si = mid + 1;
       }
       else
       {
           ei = mid - 1;
       }
   }

   return {first, last};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends