//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string s){
        // code here 
        int ob=0;
        int cb=0;
        int swapc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                cb++;
            }
            else{
                if(cb>ob){
                    swapc+=cb-ob;
                }
                ob++;
            }
        }
        return swapc;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends