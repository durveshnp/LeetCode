// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int a[], int n, int k){
        // Your code here
        
        priority_queue<int, vector<int>, greater<int> > pq ;
    vector<int> ans(n) ;
    for(int i=0 ; i<n; i++){
        pq.push(a[i]) ;
        if(i>=k){
            ans[i-k] = pq.top() ;
            pq.pop() ;
        }
    }
    while(pq.size()){
        ans[n-pq.size()] = pq.top() ;
        pq.pop() ;
    }
    return ans ;
        
        
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends