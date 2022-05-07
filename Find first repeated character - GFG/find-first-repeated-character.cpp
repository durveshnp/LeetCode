// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_map<char,int> mp;
    
    string ans = "";
    
    for(char ch : s)
    {
        if(mp[ch] > 0)
        {
            ans += ch;
            return ans;
        }
        else
            mp[ch]++;
    }
    
    return "-1";
}