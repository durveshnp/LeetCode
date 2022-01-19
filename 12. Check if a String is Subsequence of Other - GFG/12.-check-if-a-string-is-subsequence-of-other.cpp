// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    
    
    bool isSubSequence(string A, string B)
    {
        int ptr1 = 0;
        int ptr2 = 0;
        
        while(ptr1 < A.size() and ptr2 < B.size()) {
            
            if(A[ptr1] == B[ptr2]) 
                ptr1++;
            ptr2++;
            
        }
        
        if(ptr1 == A.size()) 
            return true;
            
        return false;
        
    }
};

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends