class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int cnt = 0;
        for(int i=0;i<intervals.size()-1;i++)
        { 
            if(intervals[i][0] <= intervals[i+1][0] &&  intervals[i][1] >= intervals[i+1][1])
            {
                cnt++;
                intervals[i+1] = intervals[i];
            } 
            else if(intervals[i][1] <= intervals[i+1][1] &&  intervals[i][0] >= intervals[i+1][0])
            {
                cnt++;
            }
             
        }
        return intervals.size()-cnt;
    }
};