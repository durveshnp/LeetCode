class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> s1mp(26), s2mp(26);
	    for(char ch : s1) 
            s1mp[ch - 'a']++;
	    for(int i = 0; i < s2.size(); i++) 
        {
		    s2mp[s2[i] - 'a']++;
		    if(i >= s1.size()) 
                s2mp[s2[i - s1.size()] - 'a']--;
		    if(s1mp == s2mp) 
                return true;
	    }
	    return false;
        
    }
};

