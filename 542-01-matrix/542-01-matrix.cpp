class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int max = m + n;
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(mat[i][j] == 0)  
                    q.push(make_pair(i, j)) ;
                else
                    mat[i][j] = max;
            }
        }

        int tmp[4][2] = { -1, 0, 1, 0, 0, -1, 0, 1};
        while (!q.empty()) 
        {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            for (int d = 0; d < 4; d++) 
            {
                int x1 = x + tmp[d][0], y1 = y + tmp[d][1];
                if (0 <= x1 && x1 < m && 0 <= y1 && y1 < n) 
                {
                    if (mat[x1][y1] == max) 
                        q.push(make_pair(x1, y1));
                    mat[x1][y1] = min(mat[x1][y1], mat[x][y] + 1);
                }
            }
        }
        return mat;
    }
};