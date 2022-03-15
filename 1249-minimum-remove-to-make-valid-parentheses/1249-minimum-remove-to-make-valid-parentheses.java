class Solution {
    public String minRemoveToMakeValid(String str) {
        StringBuilder s = new StringBuilder(str);
        Stack<Integer> stk = new Stack<>(); 
        
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i) == '(')
                stk.push(i);
            if(s.charAt(i) == ')')
            {
                if(stk.empty() == true)
                    s.setCharAt(i,'#');
                else
                    stk.pop();
            }
        }
        
        while(stk.empty() == false)
        {
            s.setCharAt(stk.pop(),'#');
        }
        
        String ans = "";
        
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i) != '#')
                ans += s.charAt(i);
        }
        return ans;
    }
}