// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    set<vector<int>> s;
    void solve(int i,int n,vector<int> &arr,vector<int> &temp)
    {
        if(i==n)
        {
            vector<int> curr=temp;
            sort(curr.begin(),curr.end());
            s.insert(curr);
            return;
        }
        solve(i+1,n,arr,temp);
        temp.push_back(arr[i]);
        solve(i+1,n,arr,temp);
        temp.pop_back();
    }
    
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<int> temp;
        solve(0,n,arr,temp);
        vector<vector<int>> ans;
        for(auto x:s)
        {
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends