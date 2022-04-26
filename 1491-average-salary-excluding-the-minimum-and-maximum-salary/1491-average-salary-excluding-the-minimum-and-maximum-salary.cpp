class Solution {
public:
    double average(vector<int>& salary) {
        long long total = 0;
        int mx = INT_MIN;
        int mn = INT_MAX;
        
        for(int num : salary)
        {
            total += num;
            mx = max(mx,num);
            mn = min(mn,num);
        }
        return (double)(total-mx-mn)/(salary.size()-2);
    }
};