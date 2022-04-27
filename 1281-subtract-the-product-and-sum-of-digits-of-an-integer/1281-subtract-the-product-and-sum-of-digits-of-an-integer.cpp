class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = 1;
        long long sum = 0;
        
        while(n)
        {
            int dig = n%10;
            sum += dig;
            prod *= dig;
            n /= 10;
        }
        
        return prod-sum;
    }
};