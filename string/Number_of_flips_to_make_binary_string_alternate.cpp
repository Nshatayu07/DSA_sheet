//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends




int minFlips (string S)
{
    // your code here
    string s = "";
    int n = S.size();
    
    for(int i=0;i<n;i++){
        s+='0';
    }
    for(int i=0;i<n;i+=2){
        s[i]='1';
    }
    
    string t = "";
    // int n = S.size();
    
    for(int i=0;i<n;i++){
        t+='1';
    }
    for(int i=0;i<n;i+=2){
        t[i]='0';
    }
    
    int count1=0, count2=0, ans=0;
    
    for(int i=0;i<n;i++){
        if(s[i]!=S[i]) count1++;
    }
    
    for(int i=0;i<n;i++){
        if(t[i]!=S[i]) count2++;
    }
    
    ans = min(count1, count2);
    
    return ans;
    
}