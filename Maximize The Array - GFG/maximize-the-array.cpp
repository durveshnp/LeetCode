// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
            // code here 
        vector<int> store;
        vector<int> ans;
        set<int> s;
        
        for(int i=0;i<n;i++)
        {
            store.push_back(arr1[i]);
            store.push_back(arr2[i]); 
        }
        
        sort(store.begin(),store.end());
        
        
           for(int i=2*n-1;;i--) 
           {
           
              if(s.size()==n) 
                break;
              s.insert(store[i]);
           }
           
           for(int i=0;i<n;i++)
           {
               if(s.empty()) 
                    return ans;
               if(s.find(arr2[i])!=s.end()) 
               {
                   ans.push_back(arr2[i]);
                   s.erase(s.find(arr2[i]));
               }
               
               
           }
           for(int i=0;i<n;i++){
               if(s.empty()) 
                return ans;
               if(s.find(arr1[i])!=s.end()) {
                   ans.push_back(arr1[i]);
                    s.erase(s.find(arr1[i]));
               }
           }
           return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends