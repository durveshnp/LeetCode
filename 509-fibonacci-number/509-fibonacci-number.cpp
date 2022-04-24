class Solution {
public:
    int solve(int num,vector<int> &memo)
    {
        if(memo[num] == -1)
        {
            int res;
            if(num <= 1)
                res = num;
            else
                res = solve(num-1,memo)+solve(num-2,memo);
            memo[num] = res;
        }
        return memo[num];
    }
    int fib(int n) {
        vector<int> memo(n+1,-1);
        return solve(n,memo);
    }
};