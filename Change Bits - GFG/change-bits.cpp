// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int n) {
        // code here
       vector<int>  arr(2);
       if(n == 0){
           arr[0] = -1;
           arr[1] = -1;
           return arr;
       }
       int x = log2(n)+1;
       int y = (1<<x)-1;
       arr[0] = y-n;
       arr[1] = y;
       return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends