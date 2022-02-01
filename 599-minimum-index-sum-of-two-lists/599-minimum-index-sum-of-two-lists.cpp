class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> map2;
        
        for(int i=0;i<list2.size();i++)
            map2[list2[i]] = i;
        
        int m = INT_MAX;
        
        for(int i=0;i<list1.size();i++)
        {
            if(map2.find(list1[i]) != map2.end())
            {
                m = min(m,i+map2[list1[i]]);
            }
        }
        
        vector<string> res;
        for(int i=0;i<list1.size();i++)
        {
            if(map2.find(list1[i]) != map2.end())
            {
                if(m == (i+map2[list1[i]]))
                   res.push_back(list1[i]);
            }
        }
        
        return res;
    }
};











