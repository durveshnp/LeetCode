class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int res = INT_MAX;
        int m = INT_MAX;
        priority_queue<int> pq;
        
        for (auto n : nums) 
        {
            n = n % 2 ? n * 2 : n;
            pq.push(n);
            m = min(m, n); 
        }
        
        while (pq.top() % 2 == 0) 
        {
            res = min(res, pq.top() - m);
            m = min(m, pq.top() / 2);
            pq.push(pq.top() / 2);
            pq.pop();
        }
        return min(res, pq.top()-m);
    }
};