//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
  static bool comp(pair<string, int> &a, pair<string, int> &b){
      return a.second > b.second;
  }
  
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<pair<string, int>> v;
        for(auto i: m){
            v.push_back(i);
        }
        
        sort(v.begin(), v.end(), comp);
        
        string ans = v[1].first;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends