class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map;
        set<string> set;
        vector<string> arr;
        string str = "";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                arr.push_back(str);
                str = "";
            }
            else
            {
                str += s[i];
            }
        }
        arr.push_back(str);
        if(arr.size() != pattern.size())
            return false;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(map.find(pattern[i]) != map.end())
            {
                if(map[pattern[i]] != arr[i])
                    return false;
            }
            else
            {
                if(set.count(arr[i])>0)
                    return false;
                map[pattern[i]] = arr[i];
                set.insert(arr[i]);
            }
        }
        
        return true;
        
    }
};