class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> graph(n);
        for(int i=0; i<edges.size(); i++) 
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        
        if(start == end)
            return true;
        bool visited[n];
        for(int i=0;i<n;i++)
        {
            visited[i] = false;
        }
        
        queue<int> q;
        q.push(start);
        visited[start] = true;
        
        while(!q.empty())
        {
            int u = q.front();
            if(u == end)
                return true;
            q.pop();
            for(int x : graph[u])
            { 
                if(visited[x] == false)
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
        return false;
    }
};