class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-2;
        int mid;
        if(arr.size() == 3)
            return arr[1];
        while(s <= e)
        {
            mid = s + (e-s)/2;
            
            if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1])
                return mid;
            else if(arr[mid] < arr[mid-1])
                e = mid-1;
            else
                s = mid+1;
        }
        return mid;
    }
};