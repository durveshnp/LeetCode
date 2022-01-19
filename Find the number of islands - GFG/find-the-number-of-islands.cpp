// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    void dfs(vector<vector<char>>& grid , int i , int j , int n , int m)
   {
       if(i>=0 && j>=0 && i<n && j<m && grid[i][j]=='1' )
       {
           grid[i][j]='0';
           dfs(grid , i-1 , j , n , m);
           dfs(grid , i , j-1 , n , m);
           dfs(grid , i+1 , j , n , m);
           dfs(grid , i , j+1 , n , m);
           dfs(grid , i+1 , j+1 , n , m);
           dfs(grid , i-1 , j+1 , n , m);
           dfs(grid , i+1 , j-1 , n , m);
           dfs(grid , i-1 , j-1 , n , m);
       }
   }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        
        int res=0;
        int m=grid.size();
        int n=grid[0].size();
           
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    res++;
                    dfs(grid , i , j , m , n);
                }
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends