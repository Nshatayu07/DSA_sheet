//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string s){
        //Write your code here
        int count0=0, count1=0;
        int count=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
            if(count0==count1){
                ans++;
                count0=0;
                count1=0;
                // i=i-1;
            }
            
        }
        if(count0 or count1){
            return -1;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends