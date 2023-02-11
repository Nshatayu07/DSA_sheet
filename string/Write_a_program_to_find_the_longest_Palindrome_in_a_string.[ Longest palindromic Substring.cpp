//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  bool solve(string q){
      int n =q.size();
      int i=0,j=n-1;
      while(i<=j){
          if(q[i]==q[j]){
              i++;j--;
          }
          else{
              return false;
          }
      }
      return true;
  }
  
    string longestPalin (string s) {
        // code here
        int max=-1;
        string ans="";
        int n = s.size();
        for(int i=0;i<n;i++){
            string t="";
            for(int j=i;j<n;j++){
                t+=s[j];
                int l = t.size();
                if(l>max){
                    if(solve(t)){
                        ans=t;
                        max=l;
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends