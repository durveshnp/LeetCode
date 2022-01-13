// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    
    int ans = 0;
        int n = s.size(); 

        for (int i = 0; i < n; i++) 
        {
            vector<bool> visited(256);  

            for (int j = i; j < n; j++) 
            {
                if (visited[s[j]] == true)
                    break;
                else 
                {
                    ans = max(ans, j - i + 1);
                    visited[s[j]] = true;
                }
            }
        }
        return ans;
}