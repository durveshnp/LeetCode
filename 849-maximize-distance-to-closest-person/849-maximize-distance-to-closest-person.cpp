class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans = 0;
        int cnt = 0;
        int n = seats.size();
        
        for(int i=0;i<n;i++)
        {
            if(seats[i] == 0)
            {
                cnt++;
                ans = max(ans,cnt);
            }
            else
                cnt = 0;
        }
        
        int lcnt = 0;
        cnt = 0;
        
        for(int i=0;i<n;i++)
        {
            if(seats[i] == 0)
            {
                cnt++;
                lcnt = max(cnt,lcnt);
            }
            else
                break;
        }
        
        int rcnt = 0;
        cnt = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i] == 0)
            {
                cnt++;
                rcnt = max(cnt,rcnt);
            }
            else
                break;
        }
        
        return max((ans+1)/2,max(lcnt,rcnt));
    }
};