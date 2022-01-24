class Solution {
    
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        
        int prev = 1;
        ans.push_back(prev);
        
        for(int j=1;j<=rowIndex;j++)
        {
            long long int cur = ((long long int)prev * (rowIndex-j+1))/j;
            ans.push_back((int)cur);
            prev = cur;
        }
        
        return ans;
    }
};