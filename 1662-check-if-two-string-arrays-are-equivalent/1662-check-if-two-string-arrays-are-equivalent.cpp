class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "",str2 = "";
        
        for(string s : word1)
        {
            str1 += s;
        }
        
        for(string s : word2)
        {
            str2 += s;
        }
        
        if(str1 == str2)
            return true;
        else
            return false;
    }
};