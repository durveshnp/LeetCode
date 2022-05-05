class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char ls = s[0], le = s[3];
        char ns = s[1], ne = s[4];
        
        for(char ch = ls; ch<=le; ch++)
        {
            for(char tmp = ns; tmp<=ne; tmp++)
            {
                string s = ""; 
                s += ch;
                s += tmp;
                res.push_back(s);
            }
        }
        return res;
    }
};