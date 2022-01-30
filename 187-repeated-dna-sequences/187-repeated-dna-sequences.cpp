class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> cnt;
        vector<string> res;
        
        if (s.size() < 10) 
            return res;
        
        for (int i=0; i<s.size()-9; i++)
            cnt[s.substr(i, 10)]++;
        
        for (auto mp: cnt)
        {
            if (mp.second > 1)
                res.push_back(mp.first);
        }
        return res;
    }
};