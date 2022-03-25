// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    // Complete the functionp
    int *ans = new int[n];
    vector<int> tmp(n);
    
    for(int i=0;i<n;i++)
        tmp[i] = arr[i];
        
    sort(tmp.begin(),tmp.end());
        
    unordered_map<int,int> mp;
    
    for(int i=0;i<n-1;i++)
    {
        mp[tmp[i]] = tmp[i+1];
    }
    
    mp[tmp[n-1]] = -10000000;
    
    for(int i=0;i<n;i++)
        ans[i] = mp[arr[i]];
        
    return ans;
    
    
}
