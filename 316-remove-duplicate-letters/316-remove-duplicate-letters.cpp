class Solution {
public:
    string removeDuplicateLetters(string s) {
        string res = "";
        int cnt[26] = {};
        int appear[26] = {};
        for (auto ch : s) 
            cnt[ch - 'a']++;
        for (auto ch : s) 
        {
            cnt[ch - 'a']--;
            if (appear[ch - 'a']++ > 0) 
                continue;
            while(!res.empty() && res.back() > ch && cnt[res.back() - 'a'] > 0) 
            {
              appear[res.back() - 'a'] = 0;
              res.pop_back();
            }
            res.push_back(ch);
         }
        
         return res;
    }
};