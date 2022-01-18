class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        int res = 0;
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        int sz = flowerbed.size();
        
        for(int i=0;i<sz;i++)
        {
            if(flowerbed[i] == 1)
            {
                res += ((cnt-1)/2);
                cnt = 0;
            }
            else
                cnt++;
        }
        res += ((cnt-1)/2);
        if(res>=n)
            return true;
        else
            return false;
    }
};