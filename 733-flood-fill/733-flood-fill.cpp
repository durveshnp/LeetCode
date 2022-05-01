class Solution {
public:
    
    void dfs(int i,int j,int newc,int oldc, vector<vector<int>> &image)
    {
        if(i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != oldc)
            return;
        image[i][j] = newc;
        dfs(i+1,j,newc,oldc,image);
        dfs(i-1,j,newc,oldc,image);
        dfs(i,j+1,newc,oldc,image);
        dfs(i,j-1,newc,oldc,image);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor)
        {
            dfs(sr,sc,newColor,image[sr][sc],image);
        }
        return image;
    }
};