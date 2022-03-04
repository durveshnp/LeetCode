class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> p(100, 0);
        vector<double> n(100, 0);
        
        p[0]=poured;
        
        for(int i=1;i<=query_row;i++) 
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0) 
                    n[j] = max(0.0, (p[j]-1)/2);
                else if(j==i) 
                    n[j]=max(0.0, (p[i-1]-1)/2);
                else 
                    n[j]=max(0.0, (p[j-1]-1)/2)+max(0.0, (p[j]-1)/2);
            }
            p = n;
        }
        return min(p[query_glass], 1.0);
    }
};