class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        int res = 0;
        for(string s: ops)
        {
            if(s == "C")
            {
                res -= stk.top();
                stk.pop();
            }
            else if(s == "D")
            {
                res += 2 * stk.top();
                stk.push(2*stk.top());
            }
            else if(s == "+")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.push(a);
                stk.push(a+b);
                res += a+b;
            }
            else
            {
                int a = stoi(s);
                stk.push(a);
                res += a;
            }
        }
        return res;
    }
};