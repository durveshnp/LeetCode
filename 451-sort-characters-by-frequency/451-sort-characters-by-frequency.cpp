class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> cnt;      
        priority_queue<pair<int,char>> maxheap;
        string res = "";
        
        for(char ch : s)
            cnt[ch]++;
        
        for(auto x: cnt)
            maxheap.push({x.second,x.first});
          
        while(maxheap.empty() == false)
        {
            res += string(maxheap.top().first,maxheap.top().second); 
            maxheap.pop();
        }
        return res;
    }
};