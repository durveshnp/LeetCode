// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> jugglerSequence(int N){

        // code here

        vector<int> v;

        v = answer(N,v);

        return v;

        

    }

    vector<int> answer(int N, vector<int> v){

        if(N==1)

        {

            v.push_back(1);

            return v;

        }

        

        v.push_back(N);

        

        if(N%2==0)

        {

            N=pow(N,0.5);

        }

        else 

        {

            N=pow(N,1.5);

        }

        v = answer(N,v);

        return v;

    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends