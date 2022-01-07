// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	    void allPermutations(string S,string &str,bool arr[],vector<string> &res)
	    {
	        if(S.size() == str.size())
	        {
	            res.push_back(str);
	            return;
	        }
	        
	        for(int i=0;i<S.size();i++)
	        {
	            if(arr[i] == false)
	            {
	                str.push_back(S[i]);
	                arr[i] = true;
	                allPermutations(S,str,arr,res);
	                str.pop_back();
	                arr[i] = false;
	            }
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> res;
		    string str = "";
		    bool arr[S.size()];
		    
		    for(int i=0;i<S.size();i++)
		        arr[i] = false;
		        
		    allPermutations(S,str,arr,res);
		    
		    sort(res.begin(),res.end());
		    
		    return res;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends