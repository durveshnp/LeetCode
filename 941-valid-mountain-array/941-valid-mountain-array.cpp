class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        int inc = 0;
        int dec = 0;
        
        while(i+1 < n)
        {
            if(arr[i]<arr[i+1])
                inc++;
            else if(arr[i] == arr[i+1])
                return false;
            else
                break;
            i++;
        }
        
        while(i+1 < n)
        {
            if(arr[i]>arr[i+1])
                dec++;
            else if(arr[i] == arr[i+1])
                return false;
            else 
                return false;
            i++;
        }
        if(inc > 0 && dec > 0)
            return true;
        else
            return false;
    }
};