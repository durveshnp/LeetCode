class Solution {
public:
    int color[101];
    
    bool dfs(int ele,int c,vector<vector<int>>& graph)
    {
        
        color[ele]=c;
        
        for(auto it:graph[ele])
        {
            if(color[it]==-1)
            {
                if(!dfs(it,!c,graph))
                    return false;         
            }
            else
            {
                if(color[it]==color[ele])
                    return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        memset(color,-1,sizeof color);
        
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!dfs(i,0,graph))return false;
            }
        }
        return true;
    }
};