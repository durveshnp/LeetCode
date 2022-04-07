class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(stones.begin(),stones.end());
        
        while(q.size()>1)
        {
            int tmp1 = q.top();
            q.pop();
            int tmp2 = q.top();
            q.pop();
            if(tmp1 != tmp2) 
                q.push(tmp1-tmp2);
        }
        if(q.empty())
            return 0;
        return q.top();
    }
};