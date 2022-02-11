class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> q;
        
        for(auto x : points)
        {
            int dist = (x[0]*x[0])+(x[1]*x[1]);
            q.push({-1*dist,x[0],x[1]});
        }
        
        vector<vector<int>> res;
        
        for(int i=0;i<k;i++)
        {
            res.push_back({q.top()[1],q.top()[2]});
            q.pop();
        }
        return res;
    }
};