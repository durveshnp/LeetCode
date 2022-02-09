// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int count(int x)
    {
        int cnt = 0;
        while(x)
        {
            if(x % 2)
            {
                cnt++;
            }
            x /= 2;
        }
        return cnt;
    }

    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        map<int,vector<int>,greater<int>>mp;
    
       for(int i=0;i<n;i++)
       {
           mp[count(arr[i])].push_back(arr[i]);
       }
       
       int i=0;
       map<int, vector<int>>::iterator it;
       for (it = mp.begin(); it != mp.end(); it++){
          int j=0;
          while(j<it->second.size())
          {
                arr[i++]=it->second[j];
                j++;
          }
       }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends