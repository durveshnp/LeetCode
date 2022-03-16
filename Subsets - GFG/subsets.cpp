// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void allSubset(int ind,vector<int> A, vector<int> &res,vector<vector<int>> &ans)
    {
        if(ind==A.size())
        {
            ans.push_back(res);
            return;
        }
    
        allSubset(ind+1,A,res,ans);
        res.push_back(A[ind]);
        allSubset(ind+1,A,res,ans);
        res.pop_back(); 
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>> ans;
        if(A.size()==0)
            return ans;
        vector<int> res;
        allSubset(0,A,res,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends