class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]] > 0)
                return true;
            mp[arr[i]*2]++;
            if(arr[i]%2 == 0)
                mp[arr[i]/2]++;
        }
        
        return false;
        
    }
};