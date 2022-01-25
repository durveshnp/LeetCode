// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s) {
        // code here
        int n = s.size();
        
        if(n == 1)
        {
            if(s[0] >= '0' && s[0] <= '9')
                return 4;
            else
                return 1;
        }
       else
       {
           for (int i = 0; i < n; i++)
           {
               if(s[i] == '.')
               {
                   if (n-i-1 >= 6)
                   {
                       return 8;
                   }
                   else
                   {
                       return 4;
                   }
               }
               else if (i ==  n-1)
               {
                   return 4;
               }
               else
               {
                   continue;
               }        
               
           }
           
       }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}  // } Driver Code Ends