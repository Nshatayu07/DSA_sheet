//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A<B and B<C){
            return B;
        }
        else if(A<C and C<B){
            return C;
        }
        else if(B<A and A<C){
            return A;
        }
        else if(B<C and C<A){
            return C;
        }
        else if(C<A and A<B){
            return A;
        }
        else if(C<B and B<A){
            return B;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}
// } Driver Code Ends