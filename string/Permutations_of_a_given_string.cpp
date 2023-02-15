//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void solve(string s, vector<string> &v, int i){
	    if(i>=s.size()){
	        if(find(v.begin(), v.end(), s)==v.end()){
	            
	        v.push_back(s);
	        }
	        return ;
	    }
	    
	    for(int j=i;j<s.size();j++){
	        swap(s[i],s[j]);
	        solve(s, v, i+1);
	        swap(s[i],s[j]);
	    }
	}
	
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> v;
		    int i=0;
		    solve(s, v, i);
		    sort(v.begin(), v.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends