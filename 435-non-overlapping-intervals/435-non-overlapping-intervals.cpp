class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int res = 0;
        sort(intervals.begin(), intervals.end()); 
        int ele = intervals[0][1];
        for (int i = 1; i < intervals.size();i++)
        {
            if (intervals[i][0] < ele)
            {
                res++;
                ele = min(ele, intervals[i][1]);
            }
            else
            {
                ele = intervals[i][1];
            }
        }
        return res;
    }
};