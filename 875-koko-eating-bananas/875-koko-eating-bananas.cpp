class Solution {
public:
   
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = INT_MIN;
        
        for(auto x : piles)
        {
            if(x > high)
                high = x;
        }
        
        if(h == piles.size()) 
            return high;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            int cnt=0;
            
            for(auto x : piles)
            {
                cnt += x/mid;
                if(x%mid) 
                    cnt++;
            }
        
            if(cnt > h) 
                low = mid+1;
            else 
                high= mid-1;
        }
        return low;
    }
};