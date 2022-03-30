class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0, e = row * col - 1;

        while(s <= e)
        {
            int mid = (s + e) / 2;
            int value = matrix[mid/col][mid%col];

            if( value == target)
            {
                return true;

            }
            else if(value < target)
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }

	    return false;
    }
};