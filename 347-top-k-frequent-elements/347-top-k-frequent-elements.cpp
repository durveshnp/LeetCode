class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> cnt;
        priority_queue<int,vector<int>,greater<int>> q;
    
        for(auto x : nums) 
            cnt[x]++;
        
        for(auto x : cnt) 
        {
            q.push(x.second);

            while(q.size() > k) 
                q.pop();
        }
        
        for(auto x : cnt) 
        {
            if(x.second >= q.top()) 
                res.push_back(x.first);
        }
        return res;
    }
};