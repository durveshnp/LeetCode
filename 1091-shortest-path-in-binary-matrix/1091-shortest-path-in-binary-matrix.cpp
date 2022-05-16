class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size(); 
        
        if(grid[0][0]!=0 || grid[n-1][n-1]!=0)
            return -1; 
        
        if(n==1)
            return 1; 
      
        
        queue<pair<int,int>> q; 
        q.push({0,0});
        grid[0][0]=1;
        
        int dirx[8] = {0,1,0,-1,1,-1,1,-1};
        int diry[8] = {1,0,-1,0,1,1,-1,-1};
        
        while(!q.empty())
        {
            
            auto curr = q.front();  
            q.pop();
            int row = curr.first;
            int col = curr.second;
            
            for(int i=0;i<8;i++)
            {
                int x = dirx[i];
                int y= diry[i];
                
                if(row+x<0||col+y<0||row+x>=n||col+y>=n||grid[row+x][col+y]>=1)
                {
                    continue; 
                }
                
                    grid[row+x][col+y] = 1 + grid[row][col]; 
                    if(row+x==n-1&&col+y==n-1)
                        return grid[n-1][n-1];
                    q.push({row+x,col+y}); 
                }
                
            }
            
        return -1; 
    }
};