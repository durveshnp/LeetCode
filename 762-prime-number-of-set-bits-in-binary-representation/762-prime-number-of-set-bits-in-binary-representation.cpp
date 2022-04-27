class Solution {
public:
    bool isPrime(int num)
    {
        if(num <= 1)
        {
            return false;
        }
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i == 0)
                return false;
        }
        return true;
    }
    
    int count(int num)
    {
        int cnt = 0;
        while(num)
        {
            num = (num&(num-1));
            cnt++;
        }
        return cnt;
    }
    
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        
        for(int i=left;i<=right;i++)
        {
            if(isPrime(count(i)))
                ans++;
        }
        
        return ans;
    }
};