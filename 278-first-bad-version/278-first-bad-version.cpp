// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        if(isBadVersion(1) == true)
            return 1;
        int s = 1;
        int e = n;
        
        while(s <= e)
        {
            int mid = ((long long)s+e)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1) == false)
                return mid;
            else if(isBadVersion(mid) == true)
                e = mid-1;
            else 
                s = mid+1;
        }
        return -1;
        
    }
};