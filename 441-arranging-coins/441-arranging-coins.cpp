class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = n, res;
		long row, coins;
        while(l <= r) 
        {
            row = l + ((r-l)/2);                             
            coins = (row * (row + 1))/2;            
            if(coins <= n) 
                l = row + 1, res = row;      
            else 
                r = row - 1;                                  
        }
        return res;
    }
};