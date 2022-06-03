class NumMatrix {
public:
    
    vector<vector<int>> mat;
    int isValid(int i,int j,vector<vector<int>>& matrix){
        if(i<0 || j<0 ||j>=matrix[0].size()||i>=matrix.size())
            return 0;
        else
            return matrix[i][j];
    }
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]+=isValid(i-1,j,matrix)+isValid(i,j-1,matrix)-isValid(i-1,j-1,matrix);
            }
        }
        mat=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return isValid(row2,col2,mat)-isValid(row1-1,col2,mat)-isValid(row2,col1-1,mat)+isValid(row1-1,col1-1,mat);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */