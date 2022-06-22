// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        
        vector<int> dig;
        
        int tmp = n;
        int len = 0;
        
        while(tmp)
        {
            dig.push_back(tmp%10);
            len++;
            tmp /= 10;
        }
        
        int arm = 0;
        
        for(auto x : dig)
        {
            arm += pow(x,len);
        }
        
        if(arm == n)
            return "Yes";
        else
            return "No";
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends