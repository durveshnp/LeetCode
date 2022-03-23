class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    
        int ans  = 0;
        
        for(string str : sentences)
        {
            int cnt = 0;
            for(char ch : str)
            {
                if(ch == ' ')
                    cnt++;
            }
            
            cnt++;
            ans = max(cnt,ans);
        }
        return ans;
    }
};