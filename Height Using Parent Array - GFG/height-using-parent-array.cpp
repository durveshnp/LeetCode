// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findHeight(int N, int arr[]){
        // code here
        int res = 0 ;
       
       for(int i=0;i<N;i++)
       {
           int cnt = 1 ;
           int cur = i ;
           
           while(arr[cur] != -1)
           {
               cur = arr[cur] ;
               cnt++ ;
           }
           
           res = max(res,cnt) ;
       }
       
       return res ;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends