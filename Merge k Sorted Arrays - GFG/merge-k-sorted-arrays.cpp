// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    
    
    vector<int> merge(vector<int> a,vector<int> b)
    {
        
        vector<int> ans;
        int n1 = a.size();
        int n2 = b.size();
        
        int i = 0, j = 0;
        
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        
        
        while(i < n1)
        {
             ans.push_back(a[i]);
                i++;
        }
        
        while(j < n2)
        {
             ans.push_back(b[j]);
                j++;
        }
        
        return ans;
    }
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        
        while(arr.size() > 1)
        {
            vector<int> a = arr[arr.size()-1];
            vector<int> b = arr[arr.size()-2];
            arr.pop_back();
            arr.pop_back();
            vector<int> tmp = merge(a,b);
            arr.push_back(tmp);
        }
        return arr[0];
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends