class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int last = col-1;
        int res = 0;
        int low=0;
        int high;
        for(int i=0;i<row;i++)
        {
            if(grid[i][col-1] > 0)
                continue;
           
            if(grid[i][0] < 0)
            {
                res += col;
                continue;
            }
            
            high = last;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(grid[i][mid]>=0)
                {
                    low=mid+1;
                }
                else 
                {
                    high=mid-1;
                }
            }
        
            res += col-low;
            last = low; 
            low=0;
            
        }
        return res;
    }
};