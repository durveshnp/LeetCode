// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    
    void reverse(vector<long long> &arr,int n,int k,int i)
    {
        if(i+k < n)
        {
            int s = i;
            int e = k+i-1;
            
            while(s <= e)
            {
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
        }
        else
        {
            int s = i;
            int e = n-1;
            
            while(s <= e)
            {
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
        }
    }
    
    
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0;i<n;i+=k)
            reverse(arr,n,k,i);
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends