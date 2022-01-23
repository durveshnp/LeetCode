class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int i=1;i<=9;i++)
        {
            int num = 0;
            for(int j=i;j<=9;j++)
            {
                num *= 10;
                num += j;
                
                if(num >= low && num<= high)
                    res.push_back(num);
                if(num > high)
                    break;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};