// { Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    string missingPanagram(string str){
    
     //Your code here
     
        string ans = "";
        
        unordered_map<char,int> map;
        
        for(char ch : str)
        {
            map[tolower(ch)]++;
        }
        
        for(char ch='a';ch<='z';ch++)
        {
            if(map.find(ch) == map.end())
                ans += ch;
        }
        
        if(ans.size() == 0)
            return "-1";
        
        return ans;
        
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	Solution obj;
	cout << obj.missingPanagram(s) << endl;
	}
	return 0;
	
}

  // } Driver Code Ends