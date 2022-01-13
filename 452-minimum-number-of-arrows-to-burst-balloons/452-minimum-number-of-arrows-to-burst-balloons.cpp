class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end());
        int res = 0;
        int minimum = INT_MAX;
       
        for(int i=0;i<points.size();i++) 
        {
            if(points[i][0] > minimum) 
            {
                res++; 
                minimum = points[i][1];
            }
            else 
                minimum = min(minimum, points[i][1]);
        }
       
        return res+1;
    }
};