class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        priority_queue<pair<int, int>> pq;

        for(int i = 0; i < m; i++) 
        {
            int j = mat[i].size();
            int start = 0, end = mat[i].size()-1;
            while(start <= end)
            {
                int mid = (start + end) / 2;
                if(mat[i][mid] == 0) 
                {
                    j = mid;
                    end = mid-1;
                } 
                else 
                {
                    start = mid+1;
                }
            }

            if(pq.size() < k) 
            {
                pq.push({j, i});
            } 
            else if(j < pq.top().first)
            {
                pq.pop();
                pq.push({j, i});
            } 
            else if(j == pq.top().first and i < pq.top().second) 
            {
                pq.pop();
                pq.push({j, i});
            }
        }

        vector<int> ans(k);
        while(!pq.empty()) 
        {
            ans[--k] = pq.top().second;
            pq.pop();
        }

        return ans;
    }
};