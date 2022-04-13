class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n, vector<int>(n));
        
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        int dir = 1;
        int num = 1;
        
        
        while(left <= right && top <= bottom)
        {
            if(dir == 1)
            {
                for(int i = left; i <= right; i++) 
                    ans[top][i] = num++;
                dir = 2;
                top++;
            }
            else if(dir ==  2)
            {
                for(int i = top; i <= bottom; i++) 
                    ans[i][right] = num++;
                dir = 3;
                right--;
            }
            else if(dir == 3)
            {
                for(int i = right; i >= left; i--) 
                    ans[bottom][i] = num++;
                dir = 4;
                bottom--;
            }
            else 
            {
                for(int i = bottom; i  >= top; i--) 
                    ans[i][left] = num++;
                dir = 1;
                left++;
            }
        }
        return ans;
    }
};