// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    
    bool DFS(vector<int> adj[],int s,bool visited[],bool rec[])
    {
        visited[s] = true;
        rec[s] = true;
        
        for(int u : adj[s])
        {
            if(visited[u] == false)
            {
                if(DFS(adj,u,visited,rec) == true)
                    return true;
            }
            else if(rec[u] == true)
                return true;
        }
        
        rec[s] = false;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        bool visited[V];
        bool rec[V];
        
        for(int i=0;i<V;i++)
        {
            visited[i] = false;
            rec[i] = false;
        }
        
        for(int i=0;i<V;i++)
        {
            if(visited[i] == false)
            {
                if(DFS(adj,i,visited,rec) == true)
                    return true;
            }
        }
        
        return false;
        
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends