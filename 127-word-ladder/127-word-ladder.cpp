class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int res = 1;
        set<string> s;
        
        for(string str : wordList)
        {
            s.insert(str);
        }
        
        if(s.find(endWord) == s.end())
            return 0;
        
        queue<string> q;
        q.push(beginWord);
        
        while(q.empty() == false)
        {
            int n = q.size();
            
            while(n--)
            {
                string tmp = q.front();
                q.pop();
                
                if(tmp == endWord)
                {
                    return res;
                }
                
                for(int i=0;i<tmp.size();i++)
                {
                    for(char ch = 'a'; ch <= 'z'; ch++)
                    {
                        char x = tmp[i];
                        tmp[i] = ch;
                        if(s.find(tmp) != s.end())
                        {
                            s.erase(tmp);
                            q.push(tmp);
                        }
                        tmp[i] = x;
                    }
                }
                
            }
            res++;
        }
        
        return 0;
    }
};