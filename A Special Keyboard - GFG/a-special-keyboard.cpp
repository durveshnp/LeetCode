// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string s1, string s2) {
        // code here
        int start=0,v=0;
       for (int i = 0; i < s2.size(); i++)
       {
           int temp=0;
           for (int j = 0; j < s1.size(); j++)
           {
               if (s2[i]==s1[j])
               {
                   temp=j;break;
               }
               
           }
           v+=abs(temp-start);
           start=temp;
           
       }
       return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends