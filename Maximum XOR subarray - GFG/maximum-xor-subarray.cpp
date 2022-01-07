// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++



class Solution{   
public:
    int maxSubarrayXOR(int N, int arr[]){    
        //code here
        int ans=0;
        int xor1=0;
        if(N==1)
        {
            return arr[0];
        }
        if(N==2)
        {
            xor1=arr[0]^arr[1];
            return max(xor1,max(arr[0],arr[1]));
        }
        
        for(int i=0;i<N-1;i++)
        { 
            int xor1=arr[i]^arr[i+1]; 
            int j = i+2; 
            while(j<N)
           {
               int xor2=xor1^arr[j];
               if(xor2>=xor1)
               {
                        xor1=xor2;
                }
                else
                {
                    break;
                } 
                j++;
            }
                ans=max(ans,xor1);
        }

        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends