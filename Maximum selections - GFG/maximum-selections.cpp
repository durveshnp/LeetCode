// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    
    int max_non_overlapping( vector< vector<int> >& v )
    {
        // code here
        sort(v.begin(),v.end(),comp);
        int n = v.size();
        int cnt = 1;
        vector<int> prev = v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i][0] >= prev[1]){
                cnt++;
                prev = v[i];
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends