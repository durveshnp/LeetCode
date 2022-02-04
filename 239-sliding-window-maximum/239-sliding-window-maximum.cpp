class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        
        if (k == 0) 
            return res;
        
        deque<int> q;
        
        for (int i = 0, n = nums.size(); i < n; i++) 
        {
            while (q.empty() == false && q.front() <= i-k)
                q.pop_front();
            while (q.empty() == false && nums[q.back()] <= nums[i])
                q.pop_back();
            q.push_back(i);
            if (i >= k-1)
                res.push_back(nums[q.front()]);
        }
        
        return res;
    }
};