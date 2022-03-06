// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> a){
        // Code here
        vector<vector<int>> res;
        for(int i=0;i<N;i++)
        {
            int c = 0;
            vector<int> row;
            for(int j=0;j<M;j++)
            {
                if(i==0)
                {
                    row.push_back(a[i][j]-c);
                    c=a[i][j];
                }
                else
                {
                    row.push_back(a[i][j]-a[i-1][j]-c);
                    c += row[j];
                }
            }
            res.push_back(row);
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}  // } Driver Code Ends