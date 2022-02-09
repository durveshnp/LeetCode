class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        unordered_set<int> visited;
        visited.insert(0);
        queue<int> q;
        q.push(0);
        
        while (!q.empty()) 
        {
            int u = q.front(); 
            q.pop();
            for (int x : rooms[u]) 
            {
                if (visited.count(x)) 
                    continue;
                visited.insert(x);
                q.push(x);
            }
        }
        return visited.size() == n;
    }
};