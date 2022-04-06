class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());

        int mod = 1e9 + 7;
        int res = 0;
        
        for(int i=0;i<arr.size()-2;i++)
        {
            int low = i+1;
            int high = arr.size()-1;
            
            while(low < high)
            {
                if(arr[i]+arr[low]+arr[high] == target)
                {
                    int lowc = 1;
                    int highc = 1;
                    
                    while(low < high && arr[low] == arr[low+1])
                    {
                        low++;
                        lowc++;
                    }
                    
                    while(low < high && arr[high] == arr[high-1])
                    {
                        highc++;
                        high--;
                    }
                    if (low == high) 
                        res = (res + lowc*(lowc-1)/2) % mod;
                    else 
                        res = (res + lowc*highc) % mod;
                    
                    low++; 
                    high--; 
                }
                else if(arr[i]+arr[low]+arr[high] > target)
                    high--;
                else
                    low++;
            }
        }
        return res;
    }
};