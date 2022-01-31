class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        
        for(auto x : arr)
        {
            mp[x]++;
        }
        
        vector<int> cnt;
        
        for(auto x : mp)
        {
            cnt.push_back(x.second);
        }
        
        sort(cnt.begin(),cnt.end());
        
        int s = 0;
        
        while(k)
        {
            if(cnt[s] > 0)
            {
                cnt[s]--;
            }
            else if(cnt[s] == 0)
            {
                s++;
                cnt[s]--;
            }
            k--;
        }
        
        int res  = 0;
        for(int i = cnt.size()-1;i>=0;i--)
        {
            if(cnt[i] != 0)
                res++;
            else
                break;
        }
        
        return res;
    }
};