class Solution {
public:
    int countOrders(int n) {
        long int res = 1;
        long int mod = 1000000007;
        
        for(int i=1;i<=n;i++)
            res = (res%mod * i%mod)%mod;
        
        for(int i=1;i<2*n;i+=2)
            res = (res%mod * i%mod)%mod;
        
        return res;
    }
};