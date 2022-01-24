class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> mat;
        
        int n = matrix[0].size();
        
        for(int i = 0;i<n;i++)
        {
            vector<int> tmp;
            for(int j=n-1;j>=0;j--)
            {
                tmp.push_back(matrix[j][i]);
            }
            mat.push_back(tmp);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                matrix[i][j] = mat[i][j];
        }
        
    }
};