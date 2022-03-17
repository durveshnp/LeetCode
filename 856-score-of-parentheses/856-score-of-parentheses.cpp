class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        int res=0;
        stk.push(0);
        int i=1;
        while(i < s.size())
        {
            if(s[i]=='(')
            {
                stk.push(0);
            }            
            else
            {
                int top = stk.top();                                         
                stk.pop();
                int cur;
                if(top)
                    cur = top;
                else
                    cur = 1;
                if(stk.empty())
                {
                    res += cur;  
                }
                else
                {
                    int newtop=stk.top();
                    stk.pop();
                    cur = cur<<1; 
                    stk.push(newtop+cur); 
                }
            }
            i++;
        }
        return res;
    }
};