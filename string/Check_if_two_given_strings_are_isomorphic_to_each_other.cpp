//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
        unordered_map<char, int> m1;
        int s=1;
        int num1=0;
        for(int i=0;i<s1.size();i++){
            if(m1[s1[i]]){
                num1 = num1*10 + m1[s1[i]];
            }
            else{
                m1[s1[i]]=s;
                num1 = num1*10 + s;
                s++;
            }
        }
        // cout<<num1<<endl;
        
        unordered_map<char, int> m2;
        int t=1;
        int num2=0;
        for(int i=0;i<s2.size();i++){
            if(m2[s2[i]]){
                num2 = num2*10 + m2[s2[i]];
            }
            else{
                m2[s2[i]]=t;
                num2 = num2*10 + t;
                t++;
            }
        }
        // cout<<num2<<endl;
        return (num1==num2)?1:0;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends