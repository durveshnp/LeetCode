class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> maps(26), mapp(26);
        
        for(int i=0;i<p.size();i++)
        {
            mapp[p[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            maps[s[i]-'a']++;
            if(i >= p.size())
                maps[s[i-p.size()]-'a']--;
            if(mapp == maps)
            {
                res.push_back(i-p.size()+1);
            }
        }
        
        return res;   
    }
};