class Solution {
public:
    
    void permute(int i,string str,string s,vector<string> &res)
    {
        if(i == s.length())
        {
            res.push_back(str);
            return;
        }
        
        if(isdigit(s[i]) == true)
        {
            str += s[i];
            permute(i+1,str,s,res);
        }
        else
        {
            str += tolower(s[i]);
            permute(i+1,str,s,res);
            str.pop_back();
            str += toupper(s[i]);
            permute(i+1,str,s,res);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string str = "";
        permute(0,str,s,res);
        return res;
    }
};