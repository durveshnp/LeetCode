class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        auto cmp = [&matrix](pair<int, int> a, pair<int, int> b) {
            return matrix[a.first][a.second] > matrix[b.first][b.second];
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> minHeap(cmp);
        minHeap.push({0, 0});
        pair<int, int> id;
        while (k-- > 0) {
            id = minHeap.top();
            minHeap.pop();
            if (id.first + 1 < n) {
                minHeap.push({id.first + 1, id.second});
            }
            if (id.first == 0 && id.second + 1 < n) {
                minHeap.push({id.first, id.second + 1});
            }
        }
        return matrix[id.first][id.second];
    }
};