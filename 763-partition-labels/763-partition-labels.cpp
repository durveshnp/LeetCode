class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++) 
            mp[s[i]]=i;
        
        int j=0,k=0;
        for(int i=0;i<s.size();i++) 
        {
            j = max(j, mp[s[i]]);
            if(i==j) 
            {
                res.push_back(i-k+1);
                k=i+1;
            }
        }
        return res;
    }
};