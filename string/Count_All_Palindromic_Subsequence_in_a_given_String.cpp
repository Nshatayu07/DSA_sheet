//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    int dp[1001][1001];
    
    int m = 1000000007;
    
    int solve(int i, int j, string s){
        if(i>j) return 0;
        if(i==j) return dp[i][j] = 1;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==s[j]){
            return dp[i][j] = (solve(i+1,j,s))%m + (solve(i, j-1,s))%m + 1;
        }
        else{
            return dp[i][j] = (solve(i+1,j,s))%m + (solve(i, j-1,s))%m - (solve(i+1, j-1, s))%m;
        }
    }
    long long int  countPS(string s)
    {
       //Your code here
       int n = s.size();
        memset(dp, -1, sizeof(dp));
        return (solve(0, n-1, s))%m;
       
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends