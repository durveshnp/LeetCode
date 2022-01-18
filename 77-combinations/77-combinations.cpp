class Solution {
public:
    
    void combinations(int i,int k,vector<int> &v,vector<vector<int>> &res,int n)
    {
        if(i > n+1)
            return;
        if(v.size() == k)
        {
            res.push_back(v);
            return;
        }
        v.push_back(i);
        combinations(i+1,k,v,res,n);
        v.pop_back();
        combinations(i+1,k,v,res,n);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> v;
        
        combinations(1,k,v,res,n);
        
        return res;
    }
};