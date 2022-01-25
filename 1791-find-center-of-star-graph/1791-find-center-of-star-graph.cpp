class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int res;
        if(edges[0][0] == edges[1][0])
            res = edges[0][0];
        if(edges[0][0] == edges[1][1])
            res = edges[0][0];
        if(edges[0][1] == edges[1][0])
            res = edges[0][1];
        if(edges[0][1] == edges[1][1])
            res = edges[0][1];
        return res;
    }
};