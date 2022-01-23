class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());
        
        int n = intervals.size();
        int j = 0;
        int s0,e0,s1,e1;
        
        for(int i=0; i<n; i++)
        { 
            s0 = intervals[i][0];
            e0 = intervals[i][1];
            j++;
            while(j<n)
            {
                s1 = intervals[j][0];
                e1 = intervals[j][1];
                if(s1 <= e0)
                {
                    e0 = max(e0,e1);
                    j++;
                }
                else
                {
                    j--;
                    break;
                }
            }
            i = j;
            vector<int> tmp{s0,e0};
            ans.push_back(tmp);
        }
        return ans;
    }
};