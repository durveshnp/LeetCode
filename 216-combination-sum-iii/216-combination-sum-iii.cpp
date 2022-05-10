class Solution {
public:
    void combination(vector<vector<int>>& ans, vector<int> comb, int k, int n) {
    if(comb.size() == k && n == 0) 
    { 
        ans.push_back(comb); 
        return; 
    }
        
    if (comb.size() < k) 
    {
      for (int i = comb.empty() ? 1 : comb.back() + 1; i <= 9; i++) 
        {
            if (n - i < 0) 
                break;
            comb.push_back(i);
            combination(ans, comb, k, n - i);
            comb.pop_back();
      }
    }
  }

  vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> ans;
    vector<int> comb;
    combination(ans, comb, k, n);
      
    return ans;
  }
};