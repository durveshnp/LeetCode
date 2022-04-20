// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	int check_P(int n)
{
    if(sqrt(n)==(int)sqrt(n))
    {
        return 0;
    }
    return 1;
}
	
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	    long double result=0;
    multimap<long double,long long,greater<long double>>m;
    for(int i=0;i<N;i++)
    {
        if(check_P(w[i]))
        {
            long double t=(double)p[i]/(double)w[i];
            m.insert({t,w[i]});
        }
    }
   
   auto j=m.begin();
   for(auto itr = m.begin(); itr != m.end(); ++itr)
   {
       if(itr->second>C)
       {
           j=itr;
           break;
       }
       result+=itr->first*itr->second;
       C-=itr->second;
   }
 
   if(C)
   {
       result+=((double)C/(double)j->second)*j->first*j->second;
       
       
   }
   return result;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends