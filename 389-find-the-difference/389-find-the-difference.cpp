class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> maps;
        unordered_map<char,int> mapt;
        
        for(char ch : s)
            maps[ch]++;
        
        for(char ch : t)
            mapt[ch]++;
        
        for(char ch : t)
        {
            if(maps[ch] != mapt[ch])
                return ch;
        }
        // return '';
        return 'a';
    }
};