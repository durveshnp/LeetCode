class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        int j=0;
        stack<int> stk;
        while(i < pushed.size() && j < popped.size())
        {
            if(pushed[i] == popped[j])
            {
                i++;
                j++;
            }
            else
            {
                if(stk.empty() == false && stk.top() == popped[j])  
                {
                    stk.pop();
                    j++;
                }
                else
                {
                    stk.push(pushed[i]);
                    i++;
                }
            }
        }
        while(j < popped.size())  
        {
            if(stk.empty() == false && stk.top() == popped[j])
            {
                stk.pop();
                j++;
            }
            else
                break;
        }
        if(stk.empty() == true && j == popped.size()) 
            return true;
        return false;
    }
};