// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPanagram(string str){
    
    //Your code here
int n=str.length();
   int p,q;
   for(int i=0;i<26;i++){
       char ch='A'+i;
       char ch2='a'+i;
       q=str.find(ch);
       p=str.find(ch2);
       if(p==(string::npos) && q==(string::npos))return false;
   }
   return true;
    
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
	cout << obj.isPanagram(s) << endl;
	}
	
	return 0;
	
}

  // } Driver Code Ends