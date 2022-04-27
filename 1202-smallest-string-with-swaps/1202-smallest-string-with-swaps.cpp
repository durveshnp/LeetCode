class Solution {
public:
    int find(vector<int>& parent,int x)
    {
        return parent[x] < 0 ? x : parent[x]=find(parent,parent[x]); 
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.length();
        vector<int> parent(n,-1);
        
        for(int i=0;i<pairs.size();i++)
        {
            int p1=find(parent,pairs[i][0]);
            int p2=find(parent,pairs[i][1]);
            if(p1!=p2)
            {
                parent[p2]=p1;
            }
        }
        
        
        vector<vector<int>> store(n);
        for(int i=0;i<n;i++)
        {
            int p=find(parent,i);
            store[p].push_back(i);
        }
        
        for(auto ind:store)
        {
            string ss="";
            for(auto i:ind)
            {
                ss.push_back(s[i]);
            }
            sort(ss.begin(),ss.end());
            int j=0;
            for(auto i:ind)
            {
                s[i]=ss[j++];
            }
        }
        
        return s;
        
    }
};