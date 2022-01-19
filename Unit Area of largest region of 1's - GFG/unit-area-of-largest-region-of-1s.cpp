// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    int dfs(vector<vector<int>> &grid,int i,int j,int row,int col)
    {
        if(i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == 0)
            return 0;
        grid[i][j] = 0;
        return 1 + dfs(grid,i+1,j,row,col)+dfs(grid,i-1,j,row,col)+dfs(grid,i,j+1,row,col)+dfs(grid,i,j-1,row,col)+dfs(grid,i-1,j-1,row,col)+dfs(grid,i+1,j-1,row,col)+dfs(grid,i-1,j+1,row,col)+dfs(grid,i+1,j+1,row,col);
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int res = 0;
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j] == 1)
                    res = max(res,dfs(grid,i,j,row,col));
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends