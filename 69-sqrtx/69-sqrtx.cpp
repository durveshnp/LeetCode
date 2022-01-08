class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if((long long)mid*mid == x)
            {
                return mid;
            }
            else if(((long long)mid*mid)>x)
                e = mid-1;
            else
                s = mid+1;
        }
        return e;
    }
};