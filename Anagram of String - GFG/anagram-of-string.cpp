// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int ans = 0;
    int arr[26] = {0};
    
    for(char ch : str1)
    {
        arr[ch-'a']++;
    }
    
    for(char ch : str2)
    {
        arr[ch-'a']--;
    }
    
    for(int i=0;i<26;i++)
    {
        ans += abs(arr[i]);
    }
    return ans;
}